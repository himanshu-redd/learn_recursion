#include <iostream>
using namespace std; 

void findInd(int *arr, int ind,  int size, int target,  pair<int, int> &pr) {
    if (ind == size) return;    
    if (arr[ind] == target) {
        if (pr.first == -1) {
            pr.first = ind; 
        }
        pr.second = ind; 
    }
    findInd(arr, ind+1, size, target, pr); 
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

    pair<int, int> res {-1, -1}; 
    findInd(arr, 0,  n, target, res);  

    cout << res.first << " " << res.second << endl; 
}