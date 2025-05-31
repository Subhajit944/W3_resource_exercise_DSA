//Convert temperature in Fahrenheit to Celsius..
#include <iostream> 
using namespace std;

int main (){

    float frh , cel ;

    cout << " Convert temperature in Fahrenheit to Celsius :\n"; 
    cout << "---------------------------------------------------\n"; 

    cout <<" Input the temperature in Fahrenheit to celsius : ";
    cin>> frh;

    cel = ((frh * 5) - ( 5*32)) / 9;

    cout << " The temperature in Fahrenheit : " << frh << endl;

    cout << " The temperature in Celsius : " << cel << endl;

    cout << endl; 
    
    return 0;
}