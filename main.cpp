#include <iostream>
using namespace std; 



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

// print fibonacci till upperBound
void printFib(int upperBound) {
    printFibRecursively(0, 1, upperBound); 
}

int main(){
    printFib(50);
}