//Display arithmetic operations with mixed data type

#include <iostream>
using namespace std;

int main (){

    int a1=5 ,a2=7 ;
    
    double b1 = 3.74 , b2=8.01 ;
  


    cout << a1 <<" + "<< a2 << " = " << a1+a2 <<endl;
    cout << b1 <<" + "<< b2 << " = " << b1+b2 <<endl;
    cout << a1 <<" + "<< b1 << " = " << a1+b1 <<endl;
    cout << a2 <<" + "<< b2 << " = " << a2+b2 <<endl;

    cout << a1 <<" - "<< a2 << " = " << a1-a2 <<endl;
    cout << b1 <<" - "<< b2 << " = " << b1-b2 <<endl;
    cout << a1 <<" - "<< b1 << " = " << a1-b1 <<endl;
    cout << a2 <<" - "<< b2 << " = " << a2-b2 <<endl;

    cout << a1 <<" * "<< a2 << " = " << a1*a2 <<endl;
    cout << b1 <<" * "<< b2 << " = " << b1*b2 <<endl;
    cout << a1 <<" * "<< b1 << " = " << a1*b1 <<endl;
    cout << a2 <<" * "<< b2 << " = " << a2*b2 <<endl;

    cout << a1 <<" / "<< a2 << " = " << a1/a2 <<endl;
    cout << b1 <<" / "<< b2 << " = " << b1/b2 <<endl;
    cout << a1 <<" / "<< b1 << " = " << a1/b1 <<endl;
    cout << a2 <<" / "<< b2 << " = " << a2/b2 <<endl;

    return 0;
}