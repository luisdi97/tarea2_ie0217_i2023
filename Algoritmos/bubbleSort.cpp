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
