//Print the area of a polygon.....
#include <iostream> 
#include <math.h>  
using namespace std; 

int main() { 

    float ar, s, n; 

    cout << " Print the area of a polygon:\n"; 
	cout << "---------------------------------\n";
	
	cout << " Input the number of sides of the polygon: "; 
	cin >> n;
	
	cout << " Input the length of each side of the polygon: "; 
	cin >> s; 
	
	// Calculating the area of the polygon using the formula: n * s^2 / (4 * tan(π / n))
	ar = (n * (s * s)) / (4.0 * tan((M_PI / n))); 
	
	cout << " The area of the polygon is: " << ar << endl; 
	
	return 0; 
}