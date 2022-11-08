#include <iostream>
#include "Iter.hpp"
#include <cstring>

template <typename T>
void f(T &a)
{
    a += 10;
}

int main()
{
    int *n = new int[3];
    n[0] = 0;
    n[1] = 1;
    n[2] = 2;

    std::cout << "Before pointer function:" << std::endl;
    for (int i = 0; i < 3; i++){
        std::cout << n[i] << std::endl;
    }
    std::cout << "After pointer function:" << std::endl;
    Iter(n, 3, f);
    delete []n;

    char ch[] = { 'a','b','c','d'};
    std::cout << "Before pointer function:" << std::endl;
    for (int i = 0; i < 3; i++){
        std::cout << ch[i] << std::endl;
    }
    std::cout << "After pointer function:" << std::endl;
    Iter(ch, 3, f);

    return 0;
}

/*
//CORRECTION TESTING
class Awesome
{
public:
    Awesome( void ) : _n( 42 ){
        return;
    }
    int get( void ) const {
        return this->_n;
    }
private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{ o << rhs.get(); return o; }

template< typename T >
void print( T const & x ){
    std::cout << x << std::endl;
    return;
}

int main() {
    int tab[] = {0, 1, 2, 3, 4}; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense? Awesome tab2[5];
    Awesome tab2[5];
    Iter(tab, 5, print);
    Iter(tab2, 5, print);
    return 0;
}
*/
