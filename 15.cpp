//Calculate the volume of a cylinder----
#include <iostream>
using namespace std ;

int main (){

    int rad1, hgt;
    float volcy;

    cout << "Calculate the volume of a cylinder :\n"; 
    
    cout << "-----------------------------------------\n";

    cout <<" Input the radius of the Cylinder :  ";
    cin >> rad1;

    cout << " Input the height of the  Cylinder : ";
    cin >> hgt;

    volcy = ( 3.14 *rad1 * rad1 * hgt);

  cout << " The volume of a cylinder is : "<< volcy << endl;
  cout << endl;

    return 0;
}