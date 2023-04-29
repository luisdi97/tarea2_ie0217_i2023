/**
Licencia MIT

Copyright (c) [2023] Tarea 2 - Grupo 2 - IE 0217 - I Ciclo 2023

Se concede aquí, sin cargo, a cualquier persona que obtenga una copia de este
software y los archivos de documentación asociados (el "Software"), para
utilizar el Software sin restricciones, incluyendo, sin limitación, los
derechos para usar, copiar, modificar, fusionar, publicar, distribuir,
sublicenciar y/o vender copias del Software, y para permitir a las personas a
quienes se les proporcione el Software que lo hagan, sujeto a las siguientes
condiciones:

El aviso de copyright anterior y este aviso de permiso se incluirán en todas
las copias o partes sustanciales del Software.

EL SOFTWARE SE PROPORCIONA "TAL CUAL", SIN GARANTÍA DE NINGÚN TIPO, EXPRESA O
IMPLÍCITA, INCLUYENDO PERO NO LIMITADO A GARANTÍAS DE COMERCIALIZACIÓN,
IDONEIDAD PARA UN PROPÓSITO PARTICULAR Y NO INFRACCIÓN. EN NINGÚN CASO LOS
AUTORES O TITULARES DEL COPYRIGHT SERÁN RESPONSABLES POR NINGUNA RECLAMACIÓN,
DAÑO O OTRA RESPONSABILIDAD, YA SEA EN UNA ACCIÓN CONTRACTUAL, AGRAVIO O DE
OTRO MODO, QUE SURJA DE, FUERA DE O EN CONEXIÓN CON EL SOFTWARE O EL USO U
OTROS ACUERDOS EN EL SOFTWARE.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <functional>

/*
En efecto todos los includes son necesarios, <iostream> para usar std::cout,
<vector> porque se usa la clase std::vector y sus métodos, <algorith> para usar
std::for_each, <stdexcept> para usar std::out_of_range y <functional> para usar
std::function.
*/

/*
T es el argumento del template de la clase Stack, para ingresar el tipo de dato
a usar
*/

template<typename T>
/*
Stack es el nombre de la clase template
*/
class Stack {
private:
  /*
  Se utiliza un vector de datos tipo T para guardar los datos del Stack (pila).
  El cual es un atributo privado.
  */
  std::vector<T> data_;

public:
  /*
  El método push utiliza el método push_back de la clase vector para agregar un
  elemento al final del vector data_. Toma como parámetro value de tipo T e
  cual corresponde al valor que agrega.
  */
  void push(T value) {
    data_.push_back(value);
  }

  /*
  Primero si se llama al método pop se verifica si el vector data_ está vacío,
  si fuera el caso lanza la excepción tipo out_of_range indica que el Stack
  está vacío. Por otro lado, si el Stack no está vacío, primero obtiene una
  referencia al último elemento del vector con el método back y lo guarda en la
  variable tipo T llamada value, luego elimina el último elemento del vector
  con el método pop_back. Finalmente la función devuelve la variable value
  mencionada anteriormente.
  */
  T pop() {
    if (data_.empty()) {
      throw std::out_of_range("Stack is empty");
    }
    T value = data_.back();
    data_.pop_back();
    return value;
  }

  /*
  El método clear elimina todos los elementos del vector data_.
  */
  void clear() {
    data_.clear();
  }

  /*
  El método empty utiliza la palabra clave const para indicar que la función no
  tiene permitido modificar el objeto que la invoca. En sí, el método empty
  devuelve un booleano para indicar si el vector data_ está vacío.
  */
  bool empty() const {
    return data_.empty();
  }

  /*
  El método size utiliza la palabra clave const para indicar que la función no
  tiene permitido modificar el objeto que la invoca. Este método devuelve una
  variable de tipo size_t la cual representa un entero sin signo que puede
  almacenar el tamaño máximo de cualquier objeto, en este caso almacena el
  tamaño del vector data_. Es decir este método devuelve el tamaño del vector
  data_.
  */
  std::size_t size() const {
    return data_.size();
  }

  /*
  El método foreach recibe un parámetro constante, o sea que no tiene permitido
  variar dentro de la función. El parámetro de este método es una referencia a
  una función que no devuelve nada (void) y recibe como parámetro una
  referencia a una variable tipo T. Este método foreach aplica la función a
  todos los elementos del vector data_. Para esto último se usó la función
  std::for_each que aplica la función func al resultado de dereferenciar cada
  iterador en el rango data_.begin() a data_.end(), es decir todos los
  iteradores del vector data_.
  */
  void foreach(const std::function<void(T&)>& func) {
    std::for_each(data_.begin(), data_.end(), func);
  }
};

int main() {
  /*
  Se crea un Stack de datos int.
  */
  Stack<int> s;
  /*
  Se agregan tres valores.
  */
  s.push(2021);
  s.push(2054);
  s.push(6524);

  /*
  Se imprime el tamaño del Stack. De la forma: "Stack size: size".
  */
  std::cout << "Stack size: " << s.size() << std::endl;

  /*
  Se ingresa al método foreach una expresión lambda que en términos simples es
  una función sin nombre, que toma como parámetro la referencia a una variable
  tipo int. Esta expresión lambda imprime el valor de la forma "Value: value".
  Y de acuerdo a lo que hace el método foreach, se aplicaría esta expresión
  lambda a todos los elementos del vector.
  */
  s.foreach([](int& value) {
    std::cout << "Value: " << value << std::endl;
  });

  /*
  Por medio de manejo de excepciones se intenta aplicar el método pop al Stack
  mientras no esté vacío, de forma que se elimina el último elemento del vector
  data_ y luego se imprime el valor que se acaba de eliminar de la forma
  "Popped value: value". Luego de este while se imprime el tamaño del Stack de
  la forma "Stack size: size". Como parte del manejo de la excepción, se atrapa
  cualquier exepción y se imprime "Exception: e.what()" donde e.what() devuelve
  información explicativa sobre la exepción capturada.
  */
  try {
    while (!s.empty()) {
      int value = s.pop();
      std::cout << "Popped value: " << value << std::endl;
    }
    std::cout << "Stack size: " << s.size() << std::endl;
  } catch (const std::exception& e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  Stack<char> char_stack;

  char_stack.push('a');
  char_stack.push('b');
  char_stack.push('c');
  char_stack.push('d');

  std::cout << std::endl;

  std::cout << "char_stack es:" << std::endl;

  char_stack.foreach([](char caracter) {
    std::cout << caracter << " ";
  });

  std::cout << std::endl;

  /*
  while(true){
    char borrado = char_stack.pop();
    std::cout << "Elemento borrado: " << borrado << std::endl;
  }
  */

  return 0;
}
