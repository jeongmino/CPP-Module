/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 00:25:46 by junoh             #+#    #+#             */
/*   Updated: 2022/12/03 00:25:47 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <string>
# include <iostream>
# include <cmath>
# include <climits>
# include <limits>

class Converter
{
    private :

    public:
	    Converter(void);
	    Converter(const Converter& copy);
	    Converter& operator=(const Converter& other);
        ~Converter(void);

    public :
        char toChar(double num);
        int toInt(double num);
        float toFloat(double num);


    public :
        bool ft_is_nan(double *num);
        bool ft_is_inf(float &num);

	class NotConvertible : public std::exception
	{
	    public:
		    virtual const char *what() const throw();
	};
};

#endif
