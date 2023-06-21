/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:33:54 by junoh             #+#    #+#             */
/*   Updated: 2023/06/21 16:33:17 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{}

BitcoinExchange::BitcoinExchange(const IntPairMap& Chart, const StringFloatMap& Account){
    this->bitcoinChart_ = Chart;
    this->bitcoinAccount_ = Account;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& src){
    if (this != &src){
        this->bitcoinChart_ = src.bitcoinChart_;
        this->bitcoinAccount_ = src.bitcoinAccount_;
    }
    return (*this);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy){
    std::cout << "copy constructor is called" << std::endl;
    *this = copy;
}


void printChart(IntPairMap chart){
    IntPairMap::iterator it;
    for (it = chart.begin(); it != chart.end(); it++){
        if (it->second.second != -42)
            std::cout << it->second.first << " | " << it->second.second << std::endl;
        else
            std::cout << it->second.first << "something worng" << std::endl;
    }
}

void printError(std::string reason){
    if (!reason.compare("Minus")){
        std::cout << "Error: not a positive number." << std::endl;
    }
    else if (!reason.compare("Bad input")){
        std::cout << "Error: bad input => ";
    }
    else if (!reason.compare("Too big")){
        std::cout << "Error: too large a number." << std::endl;
    }
} 


static int leapYearCheck(int year){
    if (year == 2012 || year == 2016 || year == 2020){
        return 29;
    }
    else{
        return 28;
    }
}

static int checkDay(int leap, int month, int day) {
    switch(month) {
        case 1: 
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (day < 1 || day > 31) return 0;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (day < 1 || day > 30) return 0;
            break;
        case 2:
            if (day < 1 || day > leap) return 0;
            break;
        default:
            return 0;
    }
    return 1;
}


static int checkDate(std::string date){

    int year;
    int month;
    int day;
    char dash;

    std::istringstream(date) >> year >> dash >> month >> dash >> day;

    if (year > 2022 || year < 2010 || month < 1 || month > 12 || !checkDay(leapYearCheck(year), month, day)){
        printError("Bad input");
        std::cout << date << std::endl;
        return 0;
    }
    return 1;
}

static int checkCoin(float coin){
    if (coin < 0){
        printError("Minus");
        return 0;
    }
    else if (coin > 1000){
        printError("Too big");
        return 0;
    }
    return 1;
}


static void readOneDay(std::ifstream &file, IntPairMap &chart) {

    std::string line;
    std::string date;
    std::string separator;
    float coin;
    int i = 0;

    std::getline(file, line);
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::pair<std::string, float> pair;
        if (!(iss >> date >> separator >> coin)) {
            pair.second = -42;
        }
        else{
            pair.second = coin;
        }
        pair.first = date;
        chart[i++] = pair;
    }
}


void checkBitcoinChart(std::string filename, IntPairMap &chart){
    std::ifstream inFile;

    inFile.open(filename);
    if (inFile.fail()){
        std::cout << "Could not open file" << std::endl;
        inFile.close();
        exit(1);
    }
    readOneDay(inFile, chart);
    // printChart(chart);
}

void BitcoinExchange::showReceipt(void){
    IntPairMap::iterator chartIt;
    IntPairMap::iterator chartTmpIt;
    StringFloatMap::iterator accountIt;

    IntPairMap& chart = this->bitcoinChart_;
    StringFloatMap& account = this->bitcoinAccount_;
    chartTmpIt = chart.begin();
    for(accountIt = account.begin(); accountIt != account.end(); accountIt++){
        for(chartIt = chartTmpIt; chartIt != chart.end(); chartIt++){
            if (chartIt->second.first != accountIt->first){
                // std::cout << "chart: " << chartIt->second.first << " account: " << accountIt->first << std::endl;
                chartTmpIt = chartIt;
                break;
            }
            if (checkDate(accountIt->first) && checkCoin(chartIt->second.second)){
                std::cout << accountIt->first << " => " <<  chartIt->second.second <<
                " = " << chartIt->second.second * accountIt->second << std::endl;
            }
        }
    }
}

BitcoinExchange::~BitcoinExchange(void)
{}