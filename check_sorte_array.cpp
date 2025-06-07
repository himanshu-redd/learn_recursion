#include <iostream>
using namespace std; 

bool checkSortedArray(int *arr, int ind, int size) {
    if (ind == size) return true; 
    if (arr[ind-1] > arr[ind]) {
        return false;
    } 
    return checkSortedArray(arr, ind+1, size); 
}


int main(){
    int n; 
    cin >> n; 
    int arr[n]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }

    if (n == 1 || checkSortedArray(arr, 1, n) == true)  {
        cout << "Array is sorted" << endl; 
    } else {
        cout << "Array is not sorted" << endl; 
    }
}