//Multiple of 3 or 7...
#include <iostream>
using namespace std;


bool test(int n) {

    return n % 3 == 0 || n % 7 == 0; 
}

// Main function
int main() {

    cout << test(3) << endl;   
    cout << test(14) << endl;   
    cout << test(12) << endl;   
    cout << test(37) << endl;  
     
    return 0;  
}