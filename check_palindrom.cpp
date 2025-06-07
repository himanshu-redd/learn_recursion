#include <iostream>

bool check_palindrom(std::string s, int left, int right) {
    if (left >= right ) return true; 
    if (s[left] != s[right]) return false; 
    return check_palindrom(s, left + 1, right-1); 
}

int main(){
    std::string s; 
    std::cin >>  s; 

    if (check_palindrom(s, 0, s.size()-1)) {
        std::cout << "yes" << std::endl; 
    } else {
        std::cout << "no" << std::endl; 
    }
}
