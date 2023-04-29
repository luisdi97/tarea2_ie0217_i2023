#include "MyException.hpp"

const char* MyException::what() const throw() {
    return "My custom exception";
}
