#include <iostream>
using namespace std; 

void subset(int *arr, int ind1, int ind2, int ind3,  int n, int size) {
    if (ind1 == n-2) return; 

}

int main(){
    int n; 
    cin >> n; 
    int arr[n]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    subset(arr, 0, 1, 2,   n, 3); 
}