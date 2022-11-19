
#include "Span.hpp"

Span::Span() : size(0) {}

Span::Span(unsigned int N) : size(N){}

Span::Span(const Span &span1) {

    size = span1.size;
    vec = span1.vec;
}

Span::~Span() {
    std::cout << "Span destructor called" << std::endl;
}

Span &Span::operator=(const Span &span1) {
    std::cout << "Span = operator overloaded" << std::endl;
    size = span1.size;
    vec = span1.vec;
    return *this;
}

void Span::addNumber(int number) {

    if( vec.size() >= size)
        throw std::out_of_range("Max numbers added");
    vec.push_back(number);
}

int Span::longestSpan() {

    if (vec.size() <= 1)
        throw std::logic_error("Vector size too small");

    std::vector<int>::iterator	maxE;
    std::vector<int>::iterator	minE;

    maxE = std::max_element(vec.begin(), vec.end());
    minE = std::min_element(vec.begin(), vec.end());

    return (*maxE - *minE);
}

int Span::shortestSpan() {

    std::vector<int>::iterator  it;
    int	                        span;

    if (vec.size() <= 1)
        throw std::logic_error("Vector size too small");

    std::sort(vec.begin(), vec.end());

    for (it = vec.begin() + 1, span = *it - *(it - 1); it < vec.end() - 1; ++it)
    {
        if (*(it + 1) - *it < span)
        {
            span = *(it + 1) - *it;
        }
    }
    return (span);
}

/*std::ostream &operator<<(std::ostream &out, Span const &org) {

    out << "Span: ";
    for (int it : org.getVector())
        out  << it << " ";
    return out;
}*/
