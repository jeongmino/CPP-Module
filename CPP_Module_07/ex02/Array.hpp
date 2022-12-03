/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:40:58 by junoh             #+#    #+#             */
/*   Updated: 2022/12/03 16:56:13 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template<typename T>
class Array
{
    private :
        T *array_;
        unsigned int n_;
        
    public :
        Array(void) : n_(0)
        {
            std::cout << "Array Default constructor is called" << std::endl;
            this->array_ = new T[0];
        }
        Array(unsigned int n) : n_(n)
        {
            std::cout << "Array constructor is called" << std::endl;
            this->array_ = new T[this->n_];
        }
        Array(const Array& copy) : n_(0)
        {
            std::cout << "Array Copy constructor is called" << std::endl;
            *this = copy;
        }
        Array& operator=(const Array& other)
        {
            if (this != &other)
            {
                if (this->n_)
                    delete[] this->array_;
                    this->array_ = 0;
            }
            this->n_ = other.size();
            this->array_ =  new T [this->n_];
            for (unsigned int i = 0; i < this->n_; i++){
                    this->array_[i] = other.array_[i];
            }
            return (*this);
        }
        ~Array(void)
        {
            std::cout << "Array destructor is called" << std::endl;
            delete[] this->array_;
        };
        
    public :
        unsigned int size(void) const
        {
            return (this->n_);
        };
        
        T &operator[] (unsigned int index)
        {
            if (index >= this->n_)
                throw(Array::OutBoundException());
            return (this->array_[index]);
        };
        
    class OutBoundException : public std::exception
    {
        public :
            virtual const char* what(void) const throw()
            {
                return ("Index is out of bounds");
            }
    };
};

#endif