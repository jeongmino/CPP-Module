/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:36:25 by junoh             #+#    #+#             */
/*   Updated: 2022/12/01 20:48:24 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <exception>

Base* generate(void)
{
    int time = rand() % 3;
    
    Base* ptr;
    
    switch (time)
    {
        case 0:
            ptr = new A;    
            break;
        case 1:
            ptr = new B;    
            break;
        case 2:
            ptr = new C;
            break;
    }
    return (ptr);
}

void identify(Base *p)
{
    A* a = dynamic_cast<A*>(p);
    if (a != NULL)
    {
        std::cout << "Pointer is A" << std::endl;
        return ;
    }
    B* b = dynamic_cast<B*>(p);
    if (b != NULL)
    {
        std::cout << "Pointer is B" << std::endl;
        return ;
    }
    C* c = dynamic_cast<C*>(p);
    if (c != NULL)
    {
        std::cout << "Pointer is C" << std::endl;
        return ;
    }
    std::cout << "Pointer is not A,B,C" << std::endl;
    return ;
}

void identify(Base &p)
{
    try{
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "Pointer is A" << std::endl;
        return ;
    }catch(std::bad_cast){
        try{
            B& b = dynamic_cast<B&>(p);
            (void)b;
            std::cout << "Pointer is B" << std::endl;
            return ; 
        }catch(std::bad_cast){
            try{
                 C& c = dynamic_cast<C&>(p);
                (void)c;
                std::cout << "Pointer is C" << std::endl;
                return ;
            }catch(std::bad_cast){
                std::cout << "Pointer is not A,B,C" << std::endl;
                return ;
            }
        }
    }
}

int main(void)
{
    srand(time(0));
    Base *b1;
    Base *b2;
    Base *b3;

    
    try{
        b1 = generate();
        b2 = generate();
        b3 = generate();


        identify(b1);
        identify(b2);
        identify(b3);

        std::cout << "Reference Identify" << std::endl;
        identify(*b1);
        identify(*b2);
        identify(*b3);

        delete b1;
        delete b2;
        delete b3;
        
    }catch(std::bad_cast &e){
        delete b1;
        delete b2;
        delete b3;
    }
    return (0);
}