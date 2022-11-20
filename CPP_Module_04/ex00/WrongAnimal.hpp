/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 21:07:57 by junoh             #+#    #+#             */
/*   Updated: 2022/11/20 00:04:37 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{    
    protected : 
        std::string type_;

    public :
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal& copy);
        WrongAnimal& operator=(const WrongAnimal& other);
        void setType(std::string type);
        std::string getType(void) const;
        ~WrongAnimal();
    public :
        void makeSound(void) const;
};

#endif 