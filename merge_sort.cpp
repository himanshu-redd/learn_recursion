#include <iostream>
using namespace std; 

// TC: nlogn
void merge(int *arr, int left, int mid, int right) {

    int size = right - left + 1; 
    int i = 0; 
    int temp[size]; 
    int l = left, r = mid + 1; 

    while (l <= mid || r <= right) {
        if (l <= mid && r <= right) {
            if (arr[l] <= arr[r]){
                temp[i++] = arr[l++]; 
            } else {
                temp[i++] = arr[r++]; 
            }
        } else if (l <= mid) {
            temp[i++] = arr[l++]; 
        } else {
            temp[i++] = arr[r++]; 
        }
    }

    for (int i = 0; i < size; i++, left++) {
        arr[left] = temp[i]; 
    }
}

void divide(int *arr, int left, int right) {
    if (left == right) return; 
    int mid = left + (right - left) / 2; 
    divide(arr, left , mid); 
    divide(arr, mid + 1, right); 
    merge(arr, left, mid,  right); 
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