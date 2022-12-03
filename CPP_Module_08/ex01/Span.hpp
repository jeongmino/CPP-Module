/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 11:19:46 by junoh             #+#    #+#             */
/*   Updated: 2022/12/03 20:10:52 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <algorithm>
#include <iostream>

class Span
{
private:
	unsigned int max_;
	std::vector<int> storage_;
public:

    public :
        Span(void);
        Span(unsigned int N);
        Span(const Span& copy);
        Span& operator=(const Span &other);
        ~Span(void);
	public :
            void addNumber(int number);
            int shortestSpan(void);
            int longestSpan(void);
    public :
        unsigned int getMax(void) const;
        std::vector<int> getStorage(void) const;
        
    class ExistElement: public std::exception
	{
	public:
		const char *what() const throw();
	};
	class StorageFull: public std::exception
	{
		const char *what() const throw();
	};
	class OneElement: public std::exception
	{
		const char *what() const throw();
	};
	class InvalidVector: public std::exception
	{
		const char *what() const throw();
	};

	void fill(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};

#endif