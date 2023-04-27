#include "headerSort.hpp"

using namespace std;

void selectionSort(int arr[], int n){
    int indice_Del_Menor;
    int temporal;
    
    for (int a = 0; a < n - 1; a++){
        indice_Del_Menor = a;
        
        for (int b = a+1; b < n; b++){
            if (arr[b] < arr[indice_Del_Menor]) {
                indice_Del_Menor = b;
            }
        }

        temporal = arr[a];
        arr[a] = arr[indice_Del_Menor];
        arr[indice_Del_Menor] = temporal;
    }
}
