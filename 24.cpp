//Convert temperature in Fahrenheit to Kelvin....
#include <iostream>
using namespace std ;

int main (){

    float kel , frh ;

    cout << " convert temperature is Fahrenheit to kelvin :\n ";
    cout << "-------------------------------------------------\n";

    cout << " Input the temperature in fahrenheit :  ";
    cin >> frh;

    kel = (5 /9) * ( frh - 32) +273.15;

    cout << " The temperature in Fahrenheit :  " << frh <<endl;
    cout << " The temperature in kelvin :  " << kel << endl;

    cout << endl;

    return 0;
    


}

