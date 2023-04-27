#include "headerSort.hpp"

using namespace std;

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
