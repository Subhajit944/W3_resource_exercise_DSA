//Check If String Starts with 'C#'...
#include <iostream>
using namespace std;


bool test(string str) {
   
    return (str.length() < 3 && str == "C#") || (str.substr(0, 2) == "C#" && str[2] == ' ');
}

int main()  {

    cout << test("C# Sharp") << endl;  
    cout << test("C#") << endl;       
    cout << test("C++") << endl;   
     
    return 0;   
}