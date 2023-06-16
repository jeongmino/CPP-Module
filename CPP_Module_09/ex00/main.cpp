/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:35:21 by junoh             #+#    #+#             */
/*   Updated: 2023/06/16 17:51:22 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2){
        std::cerr << "Wrong argument numbers: " << argc << " / " << argv[0] << std::endl;
        return(1);
    }
    
    std::map<std::string, float> chart;
    checkBitcoinChart(std::string(argv[1]), chart);
}