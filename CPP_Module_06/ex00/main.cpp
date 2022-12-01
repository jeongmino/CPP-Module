#include "Converter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error : Arguments" << std::endl;
		return (1);
	}

	double value;
	Converter converter;
	
	try
	{
		char	*end;
		value = std::strtod(argv[1], &end);
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

	double d = value;
	float	tmp = static_cast<float>(d);
	if (converter.ft_is_inf(tmp))
		std::cout << "double : " << value << std::endl;
	else if (converter.ft_is_nan(&d))
		std::cout << "double : " << d << std::endl;
	else if (fabs(d - converter.toInt(d)) < std::numeric_limits<double>::epsilon())
		std::cout << "double : " << d << ".0" << std::endl;
	else if (value < 0 && fabs(d - converter.toInt(d)) < std::numeric_limits<double>::epsilon())
		std::cout << "double : " << d << ".0" << std::endl;
	return (0);
}
