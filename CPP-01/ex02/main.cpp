#include <iostream>

int main(void)
{
    std::string strink = "HI THIS IS BRAIN";
    std::string *stringPTR = &strink;
    std::string &stringREF = strink;

    std::cout << "The memory address of the string variable: " << &strink << std::endl;
    std::cout << "The memory address held by stringPTR: " << &stringPTR << std::endl;
    std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;

    std::cout << "The value of the string variable: " << strink << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
}