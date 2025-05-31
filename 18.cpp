//Convert temperature in Celsius to Fahrenheit....
#include<iostream>
using namespace std;

int main(){

    float  cel , frh ;

    cout << "Convert temperature in Celsius to Fahrenheit :\n";
    cout << "---------------------------------------------------\n" ;

    cout << " Input the trmperature in celsius :  " ;
    cin >> cel;

    frh =(cel * 9.0) / 5 + 32 ;

    cout << " The temperature in Celsius    : " << cel << endl; 
    cout << " The temperature in Fahrenheit : " << frh << endl; 
    cout << endl; 

    return 0;

}