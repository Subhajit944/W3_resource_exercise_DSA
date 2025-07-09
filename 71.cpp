//4 Copies of First 2 Characters...
#include <iostream>
using namespace std;


string test(string str) {
   
    return str.length() < 2 ? str : 
        str.substr(0, 2) + str.substr(0, 2) + str.substr(0, 2) + str.substr(0, 2); 
}

// Main function
int main() {

    cout << test("C Sharp") << endl;  
    cout << test("JS") << endl;       
    cout << test("a") << endl;   

    return 0;   
}
