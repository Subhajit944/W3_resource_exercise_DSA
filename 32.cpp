//Print a mystery series from 1 to 50.....
#include <iostream> 
using namespace std; 

int main() {
    
    cout << " Print a mystery series:\n"; 
    cout << "-------------------------\n";

    cout << " The series are: \n"; 

    int num1 = 1;

    while (true) {
         ++num1; 
        
        if ((num1 % 3) == 0) 
            continue; 

        if (num1 == 50) 
            break; 

        if ((num1 % 2) == 0) {
            num1 += 3; 
        }else{
            num1 -= 3; 
        }

        cout << num1 << " "; 
    }

    cout << endl; 
    return 0; 
}