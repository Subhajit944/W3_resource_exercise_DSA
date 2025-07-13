//Remove 'yt' at Index 1...
#include <iostream>
using namespace std;


string test(string str) {

    return str.substr(1, 2) == "yt" ? str.erase(1, 2) : str;
}


int main() {

    cout << test("Python") << endl;   
    cout << test("ytade") << endl;    
    cout << test("jsues") << endl; 
    cout << test("tytee") << endl; 
    cout << test("yet") << endl; 
    cout << test("weyt") << endl; 

    return 0;  
}