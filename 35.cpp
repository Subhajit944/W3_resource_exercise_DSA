// Print the area and perimeter of a rectangle....
#include <iostream> 
using namespace std; 

int main() {

    float ar, peri, width, height = 0; 
    
    cout << " Print the area and perimeter of a rectangle:\n"; 
    cout << "----------------------------------------------\n";

    cout << " Input the width of the rectangle: "; 
    cin >> width; 

    cout << " Input the height of the rectangle: "; 
    cin >> height; 

    peri = 2 * (width + height); 
    ar = height * width; 

    cout << "The area of the rectangle is: " << ar << endl; 
    cout << "The perimeter of the rectangle is: " << peri << endl;; 

    return 0;
}