#include <iostream>
using namespace std; 

int noOfSubseqs(int *arr, int ind, int size, int sum, int target) {

    if (sum > target) { 
        return 0; 
    }

    if (ind == size) {
        if (sum == target) {
            return 1; 
        }
        return 0; 
    }

    sum += arr[ind]; 
    int first = noOfSubseqs(arr, ind + 1, size, sum, target); 
    sum -= arr[ind]; 
    int last = noOfSubseqs(arr, ind + 1, size, sum, target); 

    return first + last; 
}

int main(){
    int n; 
    cin >> n; 
    int arr[n]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    int target ; 
    cin >> target; 

    cout << noOfSubseqs(arr, 0, n, 0, target); 
}