//Calculate the volume of a Cone...
#include <iostream>
using namespace std ;

int main (){
    const float pi = 3.14159 ;

    float R , H , V ;

    cout << " Input Cone's radius :  ";
    cin >> R ;

    cout << " Input cone's height :  ";
    cin >> H ;

    V = ( 1.0 / 3.0 ) * pi * ( R * R) * H ;
    
    cout << " The volume of the cone is : " << V ;
    return 0 ;

}