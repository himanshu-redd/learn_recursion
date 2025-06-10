#include <iostream>
using namespace std; 

int getPivot(int *arr, int left, int right) {
    int pivot = arr[right]; 
    int pInd = left; 

    for (int i = left; i < right; i++) {
        if (arr[i] <= pivot) {
            swap(arr[i], arr[pInd]); 
            pInd++;
        }
    }

    swap(arr[pInd], arr[right]); 
    return pInd; 
}

void divide(int *arr, int left, int right) {
    if (left >= right) return; 
    int mid = getPivot(arr, left, right); 
    divide(arr, left, mid - 1); 
    divide(arr, mid + 1, right); 
}

int main(){
    int n; 
    cin >> n; 
    int arr[n]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    divide(arr, 0, n-1); 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " " ;  
    }
}