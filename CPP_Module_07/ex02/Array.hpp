/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:40:58 by junoh             #+#    #+#             */
/*   Updated: 2022/12/01 12:42:25 by junoh            ###   ########.fr       */
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
        unsigned n_;
        
    public :
        Array(void) : n_(0)
        {
            std::cout << "Array Default constructor is called" << std::endl;
            this->array_ = new T[0];
        }
        Array(unsigned n) : n_(n)
        {
            std::cout << "Array constructor is called" << std::endl;
            this->array_ = new T[this->n_];
        }
        Array(const Array& copy)
        {
            std::cout << "Array Copy constructor is called" << std::endl;
            this->array_ = 0;
            *this = copy;
        }
        Array& operator=(const Array& other)
        {
            if (this != &other)
            {
                if (this->array_)
                    delete this->array_;
                this->array_ = other.getArray();
                this->n_ = other.getN();
                for (unsigned i = 0; i < this->n_; i++)
                    this->array_[i] = other.getArray()[i];
            }
            return (*this);
                
        }
        ~Array(void)
        {
            std::cout << "Array destructor is called" << std::endl;
            delete[] this->array_;
        };

    public : 
        T* getArray(void) const
        {
            return (this->array_);
        };
        
        unsigned getN(void) const
        {
            return (this->n_);
        };

    public :
        unsigned size(void)
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