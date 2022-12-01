#ifndef AWESOME_HPP
# define AWESOME_HPP

#include <iostream>

class Awesome
{
    public:
        Awesome(void) : n(0) {}
        Awesome( int n ) : n( n ) {}
        Awesome & operator= (Awesome & a) { this->n = a._n; return *this; }
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