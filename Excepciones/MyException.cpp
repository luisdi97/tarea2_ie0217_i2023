/*! \file MyException.cpp
  Declaración del método what() donde se nota que devulve la cadena de
  caracteres "My custom exception".
*/

#include "MyException.hpp"

const char* MyException::what() const throw() {
    return "My custom exception";
}
