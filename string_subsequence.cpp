#include <iostream>
using namespace std; 

void subseq(string str, string temp, int ind, int size) {
    if (ind == size) {
        cout << temp << endl; 
        return;
    }

    temp.push_back(str[ind]); 
    subseq(str, temp, ind + 1, size); 
    temp.pop_back(); 
    subseq(str, temp, ind + 1, size); 
}

int main(){
    string str; 
    cin >> str;
    subseq(str, "", 0, str.size()); 
}