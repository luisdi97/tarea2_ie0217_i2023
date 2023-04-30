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

#define at_vector_index 5

#include <iostream>
#include <string>
#include <vector>
#include "MyException.hpp"

int main() {

  try {
    throw MyException();
  } catch (std::exception& e) {
    std::cout << "Error: " << e.what() << std::endl;
  }

  std::cout << std::endl;

  std::string palabra = "Hola";

  try {
    int a = std::stoi(palabra);
  } catch (std::invalid_argument& e) {
    std::cout << "Argumento invalido para std::" << e.what() << std::endl;
  }

  std::cout << std::endl;

  try {
    while (true){
      palabra = palabra + palabra;
    }
  } catch (std::bad_alloc& e) {
    std::cout << "Error obtenido es: " << e.what() << std::endl;
  }

  std::cout << std::endl;

  std::vector<int> int_vector;

  try {
    int_vector.at(at_vector_index);
  } catch (std::out_of_range& e) {
    std::cout << "Informacion del error: " << std::endl;
    std::cout << e.what() << std::endl;
  }

  return 0;
}
