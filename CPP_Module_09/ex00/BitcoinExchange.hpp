/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:24:54 by junoh             #+#    #+#             */
/*   Updated: 2023/06/16 19:07:59 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANCE_HPP
# define BITCOINEXCHANCE_HPP

#include <iostream>
#include <sstream>
#include <fstream>
#include <map>
#include <utility>

class BitcoinExchange{
    private:
        std::map<int, std::pair<std::string, float> > bitcoinChart;
        std::map<int, std::pair<std::string, float> > bitcoinAccount;

    public:
        void setBitcoinChart(const std::map<std::string, float>);
        void setBitcoinAccount(const std::map<std::string, float>);

    public:
        BitcoinExchange(void);
        BitcoinExchange(const BitcoinExchange& copy);
        BitcoinExchange& operator=(const BitcoinExchange& src); 
        ~BitcoinExchange();
};

std::ostream    &operator<<(std::ostream& os, BitcoinExchange const &BitcoinExchange);

void checkBitcoinChart(std::string filename, std::map<int, std::pair<std::string, float> > &chart);
void printError(std::string reason);
# endif
