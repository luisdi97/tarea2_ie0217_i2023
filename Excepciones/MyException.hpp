/*! \file MyException.hpp
  Header para la clase MyException.
*/

#ifndef var_cont_func_my_exception
#define var_cont_func_my_exception

#include <iostream>

/*!
  Clase MyException que hereda de manera pública de la clase std::exception
*/

class MyException : public std::exception {
public:
  /*!
    El método what() es también un método de la clase std::exception,
    entonces se reescribe para devolver un mensaje personalizado. Este método
    devuelve un puntero constante a la primera posición de una cadena de
    caracteres. Este método también presenta la palabra clave const luego del
    nombre del método lo que quiere decir que no tiene permitido modificar el
    objeto que lo invoca. Finalmente aparece throw() que previene al método
    what() de lanzar una excepción. 
  */
  const char* what() const throw();
};

#endif
