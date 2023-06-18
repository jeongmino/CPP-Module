/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:35:21 by junoh             #+#    #+#             */
/*   Updated: 2023/06/18 17:09:42 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static void csvParse(std::map<std::string, float> &chart){
    std::ifstream inFile;

    inFile.open("./data.csv");
    if (inFile.fail()) {
        std::cout << "Could not open file" << std::endl;
        inFile.close();
        exit(1);
    }
    std::string line;

    std::getline(inFile, line);
    while (std::getline(inFile, line)) {
        std::istringstream sline(line);
        std::string date;
        std::getline(sline, date, ',');
        std::string price_str;
        std::getline(sline, price_str);
        float price = atof(price_str.c_str());
        chart.insert(std::make_pair(date, price));
        // chart.insert(std::pair<std::string, int> oneDay(date, price));
    }
    std::map<std::string, float>::iterator it;
    for (it = chart.begin(); it != chart.end(); it++){
        std::cout << it->first << " | " << it->second << std::endl;
    }
}

int main(int argc, char *argv[])
{
    if (argc != 2){
        std::cerr << "Wrong argument numbers: " << argc << " / " << argv[0] << std::endl;
        return(1);
    }
    
    std::map<int, std::pair<std::string, float> > chart;
    std::map<std::string, float> bitcoint_chart;
    // checkBitcoinChart(std::string(argv[1]), chart);
    csvParse(bitcoint_chart);
}