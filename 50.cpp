//Print the area of a hexagon.......
#include <iostream> 
#include <math.h> 
using namespace std;

int main() { 

    float ar, s; 

    cout << " Print the area of a hexagon:\n"; 
    cout << "---------------------------------\n";

    cout << " Input the side of the hexagon: "; 
    cin >> s; 

    // Calculating the area of the hexagon using the formula: 6 * s^2 / (4 * tan(π/6))
    ar = (6 * (s * s)) / (4 * tan(M_PI / 6)); 

    cout << "The area of the hexagon is: " << ar << "\n"; 
    
    return 0; 
}