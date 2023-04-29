# Algoritmos de ordenamiento

Algoritmos de ordenamiento bubbleSort, selectionSort, insertionSort y
quickSort.

### Estudiante:

* Luis Diego Araya Campos. B60478

## Complejidad Big-O de los algoritmos

### bubbleSort

$$\sum_{i = 0}^{n-2}\sum_{j = 0}^{n-i-2} \left(1\right)$$

$$\sum_{i = 0}^{n-2}\left(n-i-2-0+1\right)$$

$$\sum_{i = 0}^{n-2}\left(n-i-1\right)$$

$$\left(n-1\right)\sum_{i = 0}^{n-2}\left(1\right) - \sum_{i = 0}^{n-2}\left(i\right)$$

$$(n-1)(n-2-0+1) - \frac{(n-2)(n-2+1)}{2}$$

$$(n-1)(n-1) - \frac{(n-2)(n-1)}{2}$$

$$(n-1)\left(n-1-\frac{n-2}{2}\right)$$

$$(n-1)\left(\frac{2n-2-n+2}{2}\right)$$

$$(n-1)\left(\frac{n}{2}\right)$$

$$\left(\frac{(n-1)n}{2}\right)$$

Entonces la complejidad es $O(n^2)$.

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
