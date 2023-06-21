/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:24:54 by junoh             #+#    #+#             */
/*   Updated: 2023/06/21 16:26:27 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANCE_HPP
# define BITCOINEXCHANCE_HPP

#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include <utility>

typedef std::map<int, std::pair<std::string, float> > IntPairMap;
typedef std::map<std::string, float> StringFloatMap;
class BitcoinExchange{
    private:
        IntPairMap bitcoinChart_;
        StringFloatMap bitcoinAccount_;

    public:
        BitcoinExchange(void);
        BitcoinExchange(const IntPairMap& Chart, const StringFloatMap& Account);
        BitcoinExchange(const BitcoinExchange& copy);
        BitcoinExchange& operator=(const BitcoinExchange& src);
        ~BitcoinExchange();
    public:
        void showReceipt(void);
};

void checkBitcoinChart(std::string filename, IntPairMap &chart);
void printError(std::string reason);
void printChart(IntPairMap chart);
# endif
