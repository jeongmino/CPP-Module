/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:33:54 by junoh             #+#    #+#             */
/*   Updated: 2023/06/16 17:48:53 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{}

static void printAccount(std::map<std::string, float> chart){
    std::map<std::string, float>::iterator it;
    for (it = chart.begin(); it != chart.end(); it++){
        if (it->second != -42f)
            std::cout << it->first << " | " << it->second << std::endl;
        else
            std::cout << it->first << "something worng" << std::endl;
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
        return 29
    }
    else return 28
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
    else{
        checkCoin(coin);
    }
    }

    return 1;
}

static void checkCoin(float coin){
    else if (coin < 0){
        printError("Minus");
    }
    else if (coin > 1000){
        printError("Too big");
    }
}

static void readOneDay(std::ifstream &file, std::std::map<std::string, float> &chart) {

    std::string line;
    std::string date;
    std::string separator;
    float coin;

    while (std::getline(file, line)) {
        std::istringstream iss(line);
        if (!(iss >> date >> separator >> coin)) {
            chart[date] = -42f;
            continue;
        }
        chart[date] = coin;
    }
}


void checkBitcoinChart(std::string filename, std::map<std::string, float> chart &chart){
    std::ifstream inFile;

    inFile.open(filename);
    if (inFile.fail()){
        std::cout << "Could not open file" << std::endl;
        inFile.close();
        return (1);
    }
    readOneDay(inFile, chart);
    printAccount(chart);
}

BitcoinExchange::~BitcoinExchange(void)
{}