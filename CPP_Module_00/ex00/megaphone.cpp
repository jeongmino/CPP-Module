/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 11:10:40 by junoh             #+#    #+#             */
/*   Updated: 2022/10/15 11:25:57 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>



int main(int argc, char *argv[])
{   
    int i;
    int j;
    
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARBLE FEEDBACK NOISE *";
    i = 1;
    while (argv[i])
    {
        j = 0;
        while (argv[i][j])
        {
            if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
                argv[i][j] -= 32;
            j++;
        }
        i++;    
    }
    i = 1;
    while (argv[i])
        std::cout << argv[i++];
    std::cout << std::endl;
    return (0);
}