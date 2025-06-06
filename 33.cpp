//Takes a number as input and prints its multiplication table upto 10.....
#include <iostream>
using namespace std;

int main (){

    int a, i=1;

    cout<<  " Print the multiplication table of a number up to 10:\n";
    cout << "--------------------------------------------------------\n";

    cout << " Input a number :  ";
    cin >> a;

    for (i =1 ; i<=10; i++) {

        cout << a << " x " << i << " = " <<a*i <<endl;  
      }

      
    return 0;
}













