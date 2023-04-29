/*! \file algoritmosSort.cpp
    \brief Implementación de los algoritmos de ordenamiento.
    
    Implementación de los algoritmos de ordenamiento de burbuja, selección,
    inserción y rápido.
*/

#include "headerSort.hpp"

using namespace std;

void bubbleSort(int arr[], int n){
    int temporal;

    for (int a = 0; a < n - 1; a++){
        for (int b = 0; b < n - a - 1; b++){
            if (arr[b + 1] < arr[b]){
                temporal = arr[b + 1];
                arr[b + 1] = arr[b];
                arr[b] = temporal; 
            }
        }
    }
}

void selectionSort(int arr[], int n){
    int indice_Del_Menor;
    int temporal;
    
    for (int a = 0; a < n - 1; a++){
        indice_Del_Menor = a;
        
        for (int b = a + 1; b < n; b++){
            if (arr[b] < arr[indice_Del_Menor]) {
                indice_Del_Menor = b;
            }
        }

        temporal = arr[a];
        arr[a] = arr[indice_Del_Menor];
        arr[indice_Del_Menor] = temporal;
    }
}

void insertionSort(int arr[], int n){
    int temporal;

    for (int a = 0; a < n - 1; a++){
        for (int b = a; b >= 0; b--){
            if (arr[b + 1] < arr[b]){
                temporal = arr[b];
                arr[b] = arr[b + 1];
                arr[b + 1] = temporal;

                if (b != 0 && (arr[b - 1] < arr[b])){
                    break;
                }
            }
        }
    }
}

void quickSort(int arr[], int low, int high){
    if (low < high){
        int a = low - 1;
        int temporal;

        for (int b = low; b < high; b++){
            if (arr[b] < arr[high]){
                if (a != b){
                    a++;
                    temporal = arr[a];
                    arr[a] = arr[b];
                    arr[b] = temporal;
                }else{
                    a++;
                }
            }
        }

        temporal = arr[high];
        arr[high] = arr[a + 1];
        arr[a + 1] = temporal;

        quickSort(arr, low, a);
        quickSort(arr, a + 2, high);
    }
}

int main() {
    return 0;
}
