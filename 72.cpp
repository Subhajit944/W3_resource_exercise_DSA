//Add Last Character to Front and Back...
#include <iostream>
using namespace std;


string test(string str) {
   
    string s = str.substr(str.length() - 1);

    return s + str + s;
}

// Main function
int main() {

    cout << test("Red") << endl;  
    cout << test("Green") << endl;  
    cout << test("1") << endl;   
      
    return 0;   
}