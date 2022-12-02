#include "Converter.hpp"

Converter::Converter(void) 
{}

Converter::Converter(const Converter& copy) 
{
    *this = copy;
}

Converter &Converter::operator=(const Converter &other)
{
    (void)other;
	return (*this);
}

char Converter::toChar(double num)
{
	float	tmp = static_cast<float>(num);
	if (this->ft_is_inf(tmp) || this->ft_is_nan(&num))
		throw std::string("impossible");
	else if (num < 32 || num > 126)
		throw std::string("Non displayable");
	char value = static_cast<char>(num);
	return (value);
}

int Converter::toInt(double num)
{
	float	tmp = static_cast<float>(num);
	int i = static_cast<int>(num);
	if (this->ft_is_inf(tmp) || this->ft_is_nan(&num) || num > INT_MAX || num < INT_MIN)
		throw std::string("impossible");
	return (i);
}

float Converter::toFloat(double num)
{
	return (static_cast<float>(num));
}

bool Converter::ft_is_inf(float &num)
{
    if ((*(int *)(&num) & 0x7f800000) == 0x7f800000)
        return (true);
    if ((*(int *)(&num) & 0xff800000) == 0xff800000)
        return (true);
    return (false);
}

bool Converter::ft_is_nan(double *num)
{
    return (*num != *num);
}

const char *Converter::NotConvertible::what() const throw() 
{ 
    return ("Invalid format or can't be converted."); 
}

Converter::~Converter(void)
{}