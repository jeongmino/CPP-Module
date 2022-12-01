/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:41:29 by junoh             #+#    #+#             */
/*   Updated: 2022/12/01 21:45:02 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
    std::string name;
    int age;
};

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}

int main(void)
{
    struct Data junoh;
    Data tester;
    uintptr_t ptr;
    struct Data *test_ptr;
    
    junoh.name = "junoh";
    junoh.age = 23;

    std::cout << "-------------Data member------------" << std::endl;
    std::cout << "The name of the member : " << junoh.name << std::endl;
    std::cout << "The age of the member : " << junoh.age << std::endl;

    std::cout << "-------------Serializing------------" << std::endl;
    ptr = serialize(&junoh);
    std::cout << "The serialized member : " << ptr << std::endl;
    
    std::cout << "-------------Deserializing------------" << std::endl;
    test_ptr = deserialize(ptr);
    std::cout << "The deserialized member : " << test_ptr << std::endl;
    return (0);
}















