#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"
#include <iostream>

int main() {
    std::cout << "TEST1"<< std::endl;

    Bureaucrat bb = Bureaucrat();
    std::cout << bb << std::endl;

    Form aa = Form("Happy", 5, 10);
    std::cout << aa << std::endl;
    aa.signForm(bb);



}
