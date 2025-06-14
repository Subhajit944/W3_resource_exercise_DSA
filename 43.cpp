//Print the code of a given character...
#include <iostream> 
using namespace std; 

int main() {

    char sing_ch; 

    cout << " Print code (ASCII code / Unicode code etc.) of a  given character:\n"; 
    cout << "-----------------------------------------------------------------------\n";

    cout << " Input a character: "; 
    cin >> sing_ch; 

   
    cout << " The ASCII value of " << sing_ch << " is: " << static_cast<int>(sing_ch) << endl;

    cout << " The character for the ASCII value " << static_cast<int>(sing_ch) << " is: " << static_cast<char>(static_cast<int>(sing_ch)) << endl << endl;

    return 0; 
}