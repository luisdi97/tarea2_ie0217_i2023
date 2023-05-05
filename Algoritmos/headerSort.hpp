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

/*! \file headerSort.hpp
    \brief Encabezado con prototipos de funciones para ordenar.
    
    Encabezado con los prototipos de funciones para ordenar arrays de int de
    cualquier tamaño.
*/
 
/*! \fn void bubbleSort(int arr[], int n)
    \brief Función para ordenamiento de burbuja.

    Sea un array de tamaño n, para ordenar de menor a mayor mediante el
    ordenamiento de burbuja se requiere n - 1 iteraciones del método, en
    cada iteración se coloca en la posición correcta 1 elemento. Dada una
    iteración cualquiera hay una parte del array sin ordenar y otra parte
    ya ordenada. La parte ordenada se ubica al final del array y en la
    iteración se van comparando pares de valores en la parte no ordenada
    y si el mayor se ubica en el índice menor se intercambian de posición
    los valores, de esta forma, mientras se recorre la parte no ordenada se
    logra colocar el mayor valor al final de esta parte no ordenada, con lo
    cual se agrega un elemento más a la parte ordenada y la parte no ordenada
    reduce su tamaño en 1.

    \param arr Array a ordenar.
    \param n Tamaño del array.
*/

/*! \fn void selectionSort(int arr[], int n)
    \brief Función para ordenamiento de selección

    Sea un array de tamaño n, para ordenar de menor a mayor mediante el
    ordenamiento de selección se requiere n - 1 iteraciones del método, en
    cada iteración se coloca en la posición correcta 1 elemento. Dada una
    iteración cualquiera hay una parte del array sin ordenar y otra parte
    ya ordenada. La parte ordenada se ubica al inicio del array y en la
    iteración se recorre la parte no ordenada en busca del menor valor, para
    ello se asume que el índice del menor es el primero de la parte no
    ordenada, luego se compara este valor con los demás y si encuentra uno
    menor cambia el índice del menor a este, al terminar de recorrer la parte
    no ordenada se encontró el valor menor, el cual se intercambia de posición
    con el primer valor de la parte no ordenada. De esta manera se logra
    agregar un elemento más a la parte ordenada, y la parte no ordenada reduce
    su tamaño en 1.

    \param arr Array a ordenar.
    \param n Tamaño del array.
*/

/*! \fn void insertionSort(int arr[], int n)
    \brief Función para ordenamiento de inserción

    Sea un array de tamaño n, para ordenar de menor a mayor mediante el
    ordenamiento de inserción se requiere n - 1 iteraciones del método, en
    cada iteración se coloca en la posición correcta 1 elemento. Dada una
    iteración cualquiera hay una parte del array sin ordenar y otra parte
    ya ordenada. La parte ordenada se ubica al inicio del array y en la
    iteración se toma el primer elemento de la parte no ordenada y se va
    intercambiando con los valores de la parte ordenada movilizando el
    elemento hasta colocarlo en la posición correcta, lo cual ocurre cuando
    el elemento posee un otro elemento mayor en la posición siguiente y
    otro elemento menor en la posición anterior, o llegó a la primera posición
    de la parte ordenada, lo cual quiere decir que es el menor. De esta manera
    se logra agregar un elemento más a la parte ordenada, y la parte no
    ordenada reduce su tamaño en 1.

    \param arr Array a ordenar.
    \param n Tamaño del array.
*/

/*! \fn void quickSort(int arr[], int low, int high)
    \brief Función para ordenamiento rápido

    El método de ordenamiento rápido consiste en separar la sección a ordenar
    de acuerdo con un pivote en una sección de valores menores al pivote, otra
    sección de valores mayores al pivote y el pivote, donde este pivote queda
    colocado en la posición correcta en cada iteración. La recursividad se
    presenta porque la sección de valores menores al pivote se vuelve a
    introducir en la función al igual que la sección de valores mayores al
    pivote. La cantidad de iteraciones de la función para ordenar el array
    depende de si el pivote seleccionado en cada iteración permite obtener dos
    secciones de tamaño igual o una sección de tamaño mayor en uno respecto a
    la otra sección, el peor caso sería que el pivote siempre fuera el mayor de
    la sección a ordenar. En una iteración cualquiera se toma el pivote como el
    último elemento de la sección a ordenar, y el inicializa un int **a** en
    low - 1, donde **a** corresponde a la posición restándole uno en la cual se
    debe ubicar el pivote dentro de la sección a ordenar. Luego se recorre la
    sección sin ordenar desde el inicio al fin, y cada vez que se encuentra un
    elemento menor al pivote se le suma uno a **a** y se intercambia el
    elemento en la posición **a** con el elemento actual sobre el cual se
    recorre, de esta forma se asegura que todos los elementos menores al pivote
    se ubican en posiciones menores a **a + 1**, al finalizar de recorrer
    la sección a ordenar se intercambia de posición el pivote con el elemento
    en la posición **a + 1**. Luego se llama a quickSort(arr, low, a) que para
    ordenar la sección de elementos menores al pivote y
    quickSort(arr, a + 2, high) para ordenar la sección de elementos mayores al
    pivote. Muy importante comentar que todo lo anterior está en un 
    if(low < high){} para asegurar que solo se aplique la función si es
    necesario ordenar una sección, ya que si la sección es un solo elemento
    significa que ya está ordenada.

    \param arr Array a ordenar.
    \param low Índice inicial de la sección a ordenar.
    \param high Índice final de la sección a ordenar.
*/

#ifndef HEADER_SORT_HPP
#define HEADER_SORT_HPP

void bubbleSort(int arr[], int n);

void selectionSort(int arr[], int n);

void insertionSort(int arr[], int n);

void quickSort(int arr[], int low, int high);

#endif /* HEADER_SORT_HPP */
