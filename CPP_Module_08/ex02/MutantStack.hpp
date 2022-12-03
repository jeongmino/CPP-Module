/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 11:32:48 by junoh             #+#    #+#             */
/*   Updated: 2022/12/03 20:37:51 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTAN_STACK_HPP
# define MUTAN_STACK_HPP

#include<iostream>
#include<stack>

template<typename T>
class MutantStack: public std::stack<T>
{
public:

	MutantStack(void): std::stack<T>()
	{		
	};
	~MutantStack(void)
	{	
	};
	MutantStack(const MutantStack &copy): std::stack<T>(copy)
	{
	};
	MutantStack& operator=(const MutantStack &other)
	{
		if (this != &other)
		    std::stack<T>::operator=(other);
		return (*this);
	};
	
    typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin(void)
	{
		return (std::stack<T>::c.begin());
	}
	iterator end(void)
	{
		return (std::stack<T>::c.end());
	}
    
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	const_iterator begin() const
	{
		return (std::stack<T>::c.begin());
	}
    
	const_iterator end() const 
	{
		return (std::stack<T>::c.end());
	}
    class MutantException : public std::exception
	{
		public:
			const char * what() const throw()
            {
                return ("Stack is weird!");
            }
	};

};

#endif