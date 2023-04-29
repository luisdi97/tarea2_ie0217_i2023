#ifndef var_cont_func_my_exception
#define var_cont_func_my_exception

#include <iostream>

class MyException : public std::exception {
public:
  const char* what() const throw();
};

#endif
