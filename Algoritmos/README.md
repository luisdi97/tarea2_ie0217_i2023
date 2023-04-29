# Algoritmos de ordenamiento

Algoritmos de ordenamiento bubbleSort, selectionSort, insertionSort y
quickSort.

### Estudiante:

* Luis Diego Araya Campos. B60478

## Complejidad Big-O de los algoritmos

### bubbleSort

Este algortimo siempre realiza la misma cantidad de operaciones que se puede
calcular analizando los for:

```
for (int a = 0; a < n - 1; a++){
    for (int b = 0; b < n - a - 1; b++){
        // Código
    }
}
```

Estos for se puede ver como sumatorias, y para determinar el número total de
operaciones nada más sumo **1** operación en cada iteración, nótese que el
primer for presenta valores para **a** de **0** a **n-2**, y el segundo for
presenta valores de **b** de **0** a **n-a-2**, así:

$$\sum_{a = 0}^{n-2}\sum_{b = 0}^{n-a-2} \left(1\right)$$

$$\sum_{a = 0}^{n-2}\left(n-a-2-0+1\right)$$

$$\sum_{a = 0}^{n-2}\left(n-a-1\right)$$

$$\left(n-1\right)\sum_{a = 0}^{n-2}\left(1\right) - \sum_{a = 0}^{n-2}\left(a\right)$$

$$(n-1)(n-2-0+1) - \frac{(n-2)(n-2+1)}{2}$$

$$(n-1)(n-1) - \frac{(n-2)(n-1)}{2}$$

$$(n-1)\left(n-1-\frac{n-2}{2}\right)$$

$$(n-1)\left(\frac{2n-2-n+2}{2}\right)$$

$$(n-1)\left(\frac{n}{2}\right)$$

$$\frac{(n-1)n}{2}$$

Entonces la complejidad es $O(n^2)$.

### selectionSort

De manera similar al caso anterior, este algoritmo presenta siempre la misma
cantidad de operaciones, y se tienen los for:

```
for (int a = 0; a < n - 1; a++){
    for (int b = a + 1; b < n; b++){
        //Código
    }
    // Más una operación extra.
}
```

Pasando a sumatorias y tomando en cuenta la operación extra, sería equivalente
a que se le sume 1 al límite superior del índice **b**, así:

$$\sum_{a = 0}^{n-2}\sum_{b = a+1}^{n-1+1} \left(1\right)$$

$$\sum_{a = 0}^{n-2}\sum_{b = a+1}^{n} \left(1\right)$$

$$\sum_{a = 0}^{n-2}\left(n-(a+1)+1\right)$$

$$\sum_{a = 0}^{n-2}\left(n-a-1+1\right)$$

$$\sum_{a = 0}^{n-2}\left(n-a\right)$$

$$\left(n\right)\sum_{a = 0}^{n-2}\left(1\right) - \sum_{a = 0}^{n-2}\left(a\right)$$

$$n(n-2-0+1) - \frac{(n-2)(n-2+1)}{2}$$

$$n(n-1) - \frac{(n-2)(n-1)}{2}$$

$$(n-1)\left(n-\frac{n-2}{2}\right)$$

$$(n-1)\left(\frac{2n-n+2}{2}\right)$$

$$(n-1)\left(\frac{n+2}{2}\right)$$

$$\frac{(n-1)(n+2)}{2}$$

Entonces, la complejidad es $O(n^2)$.

### insertionSort

A diferencia de los casos anteriores, este algoritmo requiere una cantidad de
operaciones distinta dependiendo del caso, sin embargo, para la notación Big-O
se toma el máximo número de operaciones así, se tienen los for:

for (int a = 0; a < n - 1; a++){
    for (int b = a; b >= 0; b--){
        //Código
    }
}

Nótese que para el segundo for, para términos de determinar la cantidad de
operaciones, sería igual a que el índice **b** vaya de **0** a **a**, así se
tienen las sumatorias:

$$\sum_{a = 0}^{n-2}\sum_{b = 0}^{a} \left(1\right)$$

$$\sum_{a = 0}^{n-2}\left(a-0+1\right)$$

$$\sum_{a = 0}^{n-2}\left(a+1\right)$$

$$\sum_{a = 0}^{n-2}\left(a\right) + \sum_{a = 0}^{n-2}\left(1\right)$$

$$\frac{(n-2)(n-2+1)}{2} + (n-2-0+1)$$

$$\frac{(n-2)(n-1)}{2} + n-1$$

$$(n-1)\left(\frac{n-2}{2}+1\right)$$

$$(n-1)\left(\frac{n-2+2}{2}\right)$$

$$(n-1)\left(\frac{n}{2}\right)$$

$$\frac{(n-1)n}{2}$$

Entonces, la complejidad es $O(n^2)$.

### quickSort

La cantidad máxima de veces que tendría que aplicar la función recursiva del
quickSort sería **n-1** veces, donde cada vez ordena un valor y por defecto el
último valor queda acomodado, lo cual se puede analizar como un índice **a**
que varía de **0** a **n-2**. Dentro de cada iteración de la función hay un for
con índice **b**. Suponiendo que en cada iteración **a** el pivote elegido
corresponde al valor mayor, el índice **b** va de **0** a **n-2-a**, pero al
final hay una operación extra por acomodar el pivote en la posición correcta,
lo que implicaría que el índice **b** va de **0** a **n-1-a**. Así, en
sumatorias:

$$\sum_{a = 0}^{n-2}\sum_{b = 0}^{n-1-a} \left(1\right)$$

$$\sum_{a = 0}^{n-2}\left(n-1-a-0+1\right)$$

$$\sum_{a = 0}^{n-2}\left(n-a\right)$$

$$\sum_{a = 0}^{n-2}\left(n-a\right)$$

$$\left(n\right)\sum_{a = 0}^{n-2}\left(1\right) - \sum_{a = 0}^{n-2}\left(a\right)$$

$$n(n-2-0+1) - \frac{(n-2)(n-2+1)}{2}$$

$$n(n-1) - \frac{(n-2)(n-1)}{2}$$

$$(n-1)\left(n-\frac{n-2}{2}\right)$$

$$(n-1)\left(\frac{2n-n+2}{2}\right)$$

$$(n-1)\left(\frac{n+2}{2}\right)$$

$$\frac{(n-1)(n+2)}{2}$$

Entonces, la complejidad es $O(n^2)$.

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
