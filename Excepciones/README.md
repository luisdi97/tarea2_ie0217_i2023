# Excepciones

Excepción personalizada y tres distintos tipos de excepciones incluidas en la librería estándar.

### Estudiante:

* Luis Diego Araya Campos. B60478

## Investigación

### std::invalid_argument

Esta excepción reporta errores provocados por usar un argumento no aceptado
**[1]**. En el caso del ejemplo usado en el código, ocurre por ingresarle a
la función std::stoi() el string "Hola" que no es un argumento válido para
convertir a int.

### std::bad_alloc

Esta excepción es lanzada por funciones que reservan memoria cuando fallan al
reservar memoria **[2]**. En el ejemplo del código continuamente se concatena
el string **palabra** a sí mismo hasta que no hay suficiente memoria para
concatenarse una vez más, lanzando la excepción de std::bad_alloc.

### std::out_of_range

Esta excepción reporta errores como consecuencia de intentar acceder un
elemento fuera del rango definido **[3]**. En el ejemplo usado en el código se
intentar obtener una referencia al elemento en el índice 5 de un vector vacío
lo cual dispara la excepción de std::out_of_range.

### Referencias

**[1]** cppreference. std::invalid_argument. Tomado de https://en.cppreference.com/w/cpp/error/invalid_argument,
2022. Disponible en línea; tomado el 29/04/2023.

**[2]** cppreference. std::bad_alloc. Tomado de https://en.cppreference.com/w/cpp/memory/new/bad_alloc,
2020. Disponible en línea; tomado el 29/04/2023.

**[3]** cppreference. std::out_of_range. Tomado de https://en.cppreference.com/w/cpp/error/out_of_range,
2022. Disponible en línea; tomado el 29/04/2023.

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
