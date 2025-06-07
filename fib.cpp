#include <iostream>
using namespace std; 

// print fibonacci till upperBound
void  printFibRecursively(int num1, int num2, int upperBound){
    cout << num1 << " " ; 

    int temp = num2; 
    num2 = num1 + num2; 
    num1 = temp;  

    if (num2 > upperBound){
        cout << num1 << " " ; 
        return; 
    } 

    printFibRecursively(num1, num2, upperBound); 
}


int main(){
    int uprBound; 
    cin >> uprBound; 
    printFibRecursively(uprBound); 
}