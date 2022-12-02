/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 00:25:43 by junoh             #+#    #+#             */
/*   Updated: 2022/12/03 00:33:12 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int isPrintableAscii(char *str)
{
    char c = *str;
    if ((static_cast<int>(c) >= 32 && static_cast<int>(c) <= 47) ||
        (static_cast<int>(c) >= 58 && static_cast<int>(c) <= 126))
        return (0);
    return (1);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error : Arguments" << std::endl;
		return (1);
	}

	double value;
	Converter converter;
	if (!isPrintableAscii(argv[1]))
        value = static_cast<double>(argv[1][0]);
    
	try
	{
        if (!isPrintableAscii(argv[1]) && strlen(argv[1]) == 1)
            value = static_cast<double>(argv[1][0]);
        else{
		char	*end;
		value = std::strtod(argv[1], &end);
        }
	}
	catch (std::exception &e)
	{
		std::cout << "Error : " << e.what() << std::endl;
		return (1);
	}

	try
	{
		char c = converter.toChar(value);
		std::cout << "char : '" << c << "'" << std::endl;
	}
	catch (std::string &e)
	{
		std::cout << "char : " << e << std::endl;
	}

	try
	{
		std::cout << "int : " << converter.toInt(value) << std::endl;
	}
	catch (std::string &e)
	{
		std::cout << e << std::endl;
	}

	float f = converter.toFloat(value);
	if (f - static_cast<int>(f) != 0)
		std::cout << "float : " << f << "f" << std::endl;
	else
		std::cout << "float : " << f << ".0f" << std::endl;

    if (value - static_cast<int>(value) != 0)
		std::cout << "double : " << value << std::endl;
	else
		std::cout << "double : " << value << ".0" << std::endl;
	return (0);
}
