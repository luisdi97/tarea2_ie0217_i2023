#include "headerSort.hpp"

using namespace std;

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
