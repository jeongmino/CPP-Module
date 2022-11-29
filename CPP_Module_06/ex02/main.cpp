/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:36:25 by junoh             #+#    #+#             */
/*   Updated: 2022/11/28 19:50:40 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>


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
    
}