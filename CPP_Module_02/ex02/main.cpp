/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:19:36 by junoh             #+#    #+#             */
/*   Updated: 2022/11/21 16:24:51 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int main( void ) 
{
	Fixed a(0);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

	Fixed const c(1);
	std::cout << c << std::endl;

	std::cout << "c + a = " << c + a << std::endl;
	std::cout << "c - a = " << c - a << std::endl;
	std::cout << "c * a = " << c * a << std::endl;
	std::cout << "c / a = " << c / a << std::endl;

	std::cout << std::boolalpha << "(c > a) : " << (bool)(c > a) << std::endl;
	std::cout << std::boolalpha << "(c >= c) : " << (bool)(c >= c) << std::endl;
	std::cout << std::boolalpha << "(c < a) : " << (bool)(c < a) << std::endl;
	std::cout << std::boolalpha << "(c <= c) : " << (bool)(c <= c) << std::endl;
	std::cout << std::boolalpha << "(c == c) : " << (bool)(c == c) << std::endl;
	std::cout << std::boolalpha << "(c != a) ; " << (bool)(c != a) << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;

	return (0);
}
