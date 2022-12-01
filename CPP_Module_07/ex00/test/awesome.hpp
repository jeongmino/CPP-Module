/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   awesome.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:59:38 by junoh             #+#    #+#             */
/*   Updated: 2022/12/01 11:00:02 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWESOME_HPP
# define AWESOME_HPP

class Awesome
{
    public:
    Awesome(void) : n(0) {}
    Awesome( int n ) : n( n ) {}
    Awesome & operator= (Awesome & a) { n = a._n; return *this; }

    bool operator==( Awesome const & rhs ) const { return (this->n == rhs._n); }
    bool operator!=( Awesome const & rhs ) const{ return (this->n != rhs.n); }
    bool operator>( Awesome const & rhs ) const { return (this->_n > rhs.n); }
    bool operator<( Awesome const & rhs ) const { return (this->n < rhs.n); }
    bool operator>=( Awesome const & rhs ) const { return (this->n >= rhs._n); }
    bool operator<=( Awesome const & rhs ) const { return (this->n <= rhs._n); }
    int getn() const { return n; }
    
    private:
        int _n;
        int n;
};
std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.getn(); return o; }

#endif
