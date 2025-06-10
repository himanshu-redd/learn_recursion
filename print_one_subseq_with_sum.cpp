#include <iostream>
using namespace std; 

bool printOneSubseq(int *arr, int ind, int size, int sum, int target, vector<int> &vec) {
    if (ind == size) {
        if (sum == target) {
            for (int i = 0; i < vec.size(); i++) {
                cout << vec[i] << " " ; 
            }
            cout << endl; 
            return true; 
        } else {
            return false; 
        }
    }

    sum += arr[ind]; 
    vec.push_back(arr[ind]); 
    if (printOneSubseq(arr, ind + 1, size, sum, target, vec) == true) {
        return true; 
    }

    sum -= arr[ind]; 
    vec.pop_back(); 
    if (printOneSubseq(arr, ind + 1, size, sum, target, vec) == true){
        return true; 
    } 

    return false; 
}

int main(){
    int n; 
    cin >> n; 
    int arr[n]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    int target; 
    cin >> target; 

    vector<int> vec; 
    printOneSubseq(arr, 0, n, 0, target, vec); 
}