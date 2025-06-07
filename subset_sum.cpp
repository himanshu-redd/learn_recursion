#include <iostream>
using namespace std; 

void subset(int *arr, int sum, int ind, int size) {
    if (ind == size) {
        cout << sum << endl; 
        return; 
    } 

    sum += arr[ind];
    subset(arr, sum, ind + 1, size); 
    sum -= arr[ind]; 
    subset(arr, sum, ind + 1, size); 
}

int main(){
    int n; 
    cin >> n; 
    int arr[n]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    subset(arr, 0, 0, n); 
}