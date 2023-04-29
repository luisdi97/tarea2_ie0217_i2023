# Stack Template

Template de una clase Stack.

### Estudiante:

* Luis Diego Araya Campos. B60478

## Investigación

std::size t es el tipo de entero sin signo resultado del operador sizeof. std::size t puede almacenar el máximo tamaño teóricamente posible de un objeto de cualquier tipo [1].

La clase template std::function es un wrapper de una función polimórfica y de uso general. Las instancias de std::function pueden guardar, copiar e invocar funciones vía puntero, expresiones lambda, punteros a métodos, entre otros [2].

std::for each aplica la función dada al resultado de derreferenciar todos los iteradores en el rango [first, last] [3].

Una expresión lambda permite insertar funciones en la sección del código donde se llaman para bloques pequeños de código que no se van a reusar por lo que no requiere un nombre [4].

std::exception::what en una función que devuelve un puntero a un string con información explicativa [5].

### Referencias
[1] cppreference. std::size t. Tomado de https://en.cppreference.com/w/cpp/types/size_t, 2022. Disponible en línea; tomado el 29/04/2023.
[2] cppreference. std::function. Tomado de https://en.cppreference.com/w/cpp/utility/functional/function, 2023. Disponible en línea; tomado el 29/04/2023.
[3] cppreference. std::for each. Tomado de https://en.cppreference.com/w/cpp/algorithm/for_each, 2023. Disponible en línea; tomado el 29/04/2023.
[4] GeeksforGeeks. Lambda expression in C++. Tomado de https://www.geeksforgeeks.org/lambda-expression-in-c/, s.f. Disponible en línea; tomado el 29/04/2023.
[5] cppreference. std::exception::what. Tomado de https://en.cppreference.com/w/cpp/error/exception/what, 2022. Disponible en línea; tomado el 29/04/2023.

## Instrucciones de uso:

Para compilar, ejecutar y borrar el ejecutable se hace uso del makefile por
medio del programa **make** o su equivalente. Para compilar el programa utilice
el comando:

```
make
```

Con esto se crea el ejecutable **test.exe**. Luego, para correr el programa
utilice el comando:

```
make run
```

Finalmente, luego de observar el resultado en consola puede eliminar el
ejecutable con:

```
make clean
```
