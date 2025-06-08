//Calculate the volume of a sphere.....
#include <iostream> 
using namespace std; 

int main() {

    int rad1; 
    float volsp;

    cout << " Calculate the volume of a sphere :\n"; 
    cout << "---------------------------------------\n";

    cout << " Input the radius of a sphere : ";
    cin >> rad1;

    
    volsp = (4 * 3.14 * rad1 * rad1 * rad1) / 3; // Calculating the volume of the sphere using the formula: (4 * π * r^3) / 3

    cout << " The volume of a sphere is : " << volsp << endl;

    cout << endl;

    return 0; 
}