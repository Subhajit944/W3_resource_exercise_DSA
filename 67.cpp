//Within 10 of 100 or 200...
#include <iostream>
using namespace std;

bool test(int x) {
    
    if (abs(x - 100) <= 10 || abs(x - 200) <= 10) 
        return true; 

    return false; 
}


int main() {
    
    cout << test(103) << endl;  
    cout << test(90) << endl; 
    cout << test(89) << endl;  

    return 0;   
}