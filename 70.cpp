//Swap First and Last Characters...

#include <iostream>
using namespace std;

string test(string str) {
   
    return str.length() > 1

        ? str.substr(str.length() - 1) + str.substr(1, str.length() - 2) + str.substr(0, 1) 
        : str; 
}


int main() {

    cout << test("abcd") << endl;  
    cout << test("a") << endl;     
    cout << test("xy") << endl;    
    
    return 0;   
}
