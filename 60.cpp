//Replace Lowercase with Uppercase...
#include <iostream> 
#include <algorithm> 
using namespace std; 

int main() {

    string text; 

    getline(cin, text); 

    // Using transform function to convert each character of the string to uppercase
    transform(text.begin(), text.end(), text.begin(), ::toupper);

    cout << text << endl;

    return 0; 
}