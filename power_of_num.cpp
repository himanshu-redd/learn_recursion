#include <iostream>
using namespace std; 

unsigned long long power(unsigned long long base, unsigned long long pow) {
    if (pow == 0) return 1;     
    unsigned long long res =  power(base, pow / 2); 
    if (pow % 2){
        return res * res * base; 
    }
    return res * res; 
}

int main(){
    int base; 
    int pow; 

    cin >> base; 
    cin >> pow; 

    cout << power((unsigned long long)base, (unsigned long long)pow); 
}