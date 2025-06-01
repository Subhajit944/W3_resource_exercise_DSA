// Convert temperature in Kelvin to Celsius....
#include <iostream>
using namespace std;

int main (){

    float kel, cel;

    cout << " Convert temperature in Kelvin to Celsius :\n" ;
    cout << "------------------------------------------------\n";

    cout << " Input your temperature in kelvin : " ;
    cin >> kel;

    cel = kel - 273.15 ;

    cout << " The temperature in kelvin :  "<< kel << endl;
    cout << " The temperature in celsius :  "<< cel << endl;
    
    cout << endl;

    return 0;

}