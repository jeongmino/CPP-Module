#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <string>
# include <iostream>
# include <cmath>
# include <climits>
# include <limits>

class Converter
{
    public:
	    Converter(void);
	    Converter(const Converter& copy);
	    Converter& operator=(const Converter& other);
        ~Converter(void);
    public :
        char toChar(double num);
        int toInt(double num);
        float toFloat(double num);
        double toDouble(double num);
    public :
        bool ft_is_nan(double *num);
        bool ft_is_inf(double *num);


	class NotConvertible : public std::exception
	{
	    public:
		    virtual const char *what() const throw();
	};
};

#endif
