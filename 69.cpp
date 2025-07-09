//Remove Character from String...

#include <iostream>
using namespace std;


string test(string str, int n) {

    return str.erase(n, 1); 
}


int main() {

    cout << test("Python", 1) << endl;  
    cout << test("Python", 0) << endl;  
    cout << test("Python", 4) << endl; 
    
    return 0;   
}