//Add First 3 Characters to Front and Back...

#include <iostream>
using namespace std;


string test(string str) {

    if (str.length() < 3) {

        return str + str + str; 

    }else{

        string front = str.substr(0, 3); 
        return front + str + front; 
    }
}


int main() {

    cout << test("Python") << endl;  
    cout << test("JS") << endl;     
    cout << test("Code") << endl;   
    
    return 0;    
}