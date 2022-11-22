/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:19:34 by junoh             #+#    #+#             */
/*   Updated: 2022/11/22 16:26:38 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"
#include "Cat.hpp"


int main(void)
{
    Animal *animals[10];
    
    int size = 4;
    
    for (int i = 0; i < size - (size / 2); i++)
        animals[i] = new Dog();
    for (int i = size - (size / 2); i < size; i++)
        animals[i] = new Cat();

    Dog d1;
    d1.getBrain()->setIdea("T1");
    Dog d2(d1);

    d2.getBrain()->setIdea("DRX");
    
    std::cout << "d1 : " << d1.getBrain()->getIdea() << std::endl;
    std::cout << "d2 : " << d2.getBrain()->getIdea() << std::endl;
    for (int i  = 0; i < size; i++)
        delete animals[i]; 
}
