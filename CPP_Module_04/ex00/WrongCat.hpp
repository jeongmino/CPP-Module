/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 21:17:18 by junoh             #+#    #+#             */
/*   Updated: 2022/11/19 23:54:31 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public :
        WrongCat(void);
        WrongCat(const WrongCat& copy);
        WrongCat& operator=(const WrongCat& other);
        std::string getType(void) const;
        ~WrongCat();
    public :
        void makeSound(void) const;
};

#endif