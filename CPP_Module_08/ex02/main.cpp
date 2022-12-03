/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 11:34:34 by junoh             #+#    #+#             */
/*   Updated: 2022/12/03 20:49:35 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <stack>
#include <list>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "top " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "size " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
        
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout << "top " << s.size() << std::endl;
   
    std::cout << "--------------------------list-------------------------" << std::endl;
    
    std::list<int> m_list;
    m_list.push_back(5);
    m_list.push_back(17);
    std::cout << "front " << m_list.front() << std::endl;
    m_list.pop_front();
    std::cout << "size " << m_list.size() << std::endl;
    m_list.push_back(3);
    m_list.push_back(5);
    m_list.push_back(737);
    //[...]
    m_list.push_back(0);
        
    std::list<int>::iterator it_l = m_list.begin();
    std::list<int>::iterator ite_l = m_list.end();
    ++it_l;
    --it_l;
    while (it_l != ite_l)
    {
        std::cout << *it_l << std::endl;
        ++it_l;
    }
    return (0);   
}