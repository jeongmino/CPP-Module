/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 11:23:25 by junoh             #+#    #+#             */
/*   Updated: 2022/12/03 20:32:04 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : max_(0), storage_(0)
{
}

Span::Span(unsigned int N): max_(N), storage_(0)
{
}

Span::Span(const Span& copy)
{
	*this = copy;
}

Span::~Span(void)
{
}

Span& Span::operator=(const Span &other)
{
	if (this != &other)
    {
        this->max_ = other.getMax();
        this->storage_ = other.getStorage();
    }
	return (*this);
}

unsigned int Span::getMax(void) const
{
    return (this->max_);
}

std::vector<int> Span::getStorage(void) const
{
    return (this->storage_);
}

void Span::addNumber(int number)
{
	if (!this->storage_.size())
		this->storage_.push_back(number);
	else if (this->storage_.size() < this->max_)
    {
		if (find(this->storage_.begin(), this->storage_.end(), number) == this->storage_.end())
			this->storage_.push_back(number);
		else
			throw(Span::ExistElement());
	}
	else
		throw(Span::StorageFull());
}

int Span::shortestSpan()
{
	if (this->storage_.size() >= 2)
	{
		unsigned int minVal = UINT_MAX;
		sort(this->storage_.begin(), this->storage_.end());
		for (std::vector<int>::iterator it = this->storage_.begin(); it != this->storage_.end(); it++)
		{
			unsigned int temp = *(it + 1) - *(it);
			minVal = std::min(minVal, temp);
		}
		return (minVal);
	}
	else
		throw(Span::OneElement());
	return 0;
}

int Span::longestSpan()
{
	if (this->storage_.size() >= 2)
		sort(this->storage_.begin(), this->storage_.end());
	else
		throw(Span::OneElement());
	return (this->storage_.back() - this->storage_.front());
}

void Span::fill(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (std::distance(begin, end) == this->max_)
	{
		int i = 0;
		while (begin != end)
		{
			addNumber(*begin);
			begin++;
			i++;
		}
	}
	else
		throw(Span::InvalidVector());
}


const char *Span::ExistElement::what() const throw()
{
	return ("already existing element");
}

const char *Span::StorageFull::what() const throw()
{
	return ("storage is full");
}

const char *Span::OneElement::what() const throw()
{
	return ("not compatiable");
}

const char *Span::InvalidVector::what() const throw()
{
	return ("invalid vector");
}