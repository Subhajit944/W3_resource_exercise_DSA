//Check whether a number is positive, negative or zero...
#include <iostream>
using namespace std; 

int main() {

    signed long num1 = 0; 

    cout << "Check whether a number is positive, negative or zero :\n";
    cout << "-----------------------------------------------------------\n"; 

    cout << " Input a number : "; 
    cin >> num1;
    if (num1 > 0){

        cout << " The entered number is positive."<<endl; 

    }else if (num1 < 0) {

        cout << " The entered number is negative." <<endl; 

    }else {

       cout << " The number is zero." <<endl;; 
    }

    return 0; 
} 