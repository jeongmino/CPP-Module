/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 21:17:18 by junoh             #+#    #+#             */
/*   Updated: 2022/11/20 00:48:36 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{

    private :
        Brain *brain_;        
    public :
        Cat(void);
        Cat(const Cat& copy);
        Cat& operator=(const Cat& other);
        std::string getType(void) const;
        ~Cat(void);
    public :
        void makeSound(void) const;
};

#endif