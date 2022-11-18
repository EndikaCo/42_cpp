
#ifndef CPP8_SPAN_HPP
#define CPP8_SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>

class Span{
private:
    std::vector<int> vec;
    unsigned int size;
    //Make a class in which you can store N ints. N will be an unsigned int, and will be
    //passed to the constructor as its only parameter.
public:
    Span();
    Span(unsigned int N);
    ~Span();
    Span(const Span &);
    Span &operator=(const Span &);
    //This class will have a function to store a single number (addNumber), that will be used
    //to fill it. Attempting to add a new number if there are already N of them stored in the
    //object is an error and should result in an exception.
    void addNumber(int number);

    //You will now make two functions, shortestSpan and longestSpan, that will find
    //out respectively the shortest and longest Span between all the numbers contained in the
    //object, and return it. If there are no numbers stored, or only one, there is no Span to
    //find, and you will throw an exception.
    int shortestSpan();
    int longestSpan();

    std::vector<int> getVector() const {
        return vec;
    };
};

std::ostream &operator<<(std::ostream &out, Span const &org);

#endif //CPP8_SPAN_HPP
