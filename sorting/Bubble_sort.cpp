#include <iostream>
using namespace std;

void bubble_sort(int arr[], int k) {
    int temp;
    for (int i = 0; i < k - 1; i++) {            
        for (int j = 0; j < k - i - 1; j++) {    
            if (arr[j] > arr[j + 1]) {           
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {2, 6, 7, 4, 32, 1};   
    int size = sizeof(arr) / sizeof(arr[0]); 
    
    bubble_sort(arr, size); 
    
    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";  
    }
    cout << endl;
    return 0;
}
