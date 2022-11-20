/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:19:34 by junoh             #+#    #+#             */
/*   Updated: 2022/11/20 01:07:16 by junoh            ###   ########.fr       */
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
    for (int i  = 0; i < size; i++)
        delete animals[i]; 
}
