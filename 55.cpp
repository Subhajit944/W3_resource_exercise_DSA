//Check whether given length of three side form a right triangle..

#include <iostream> 
#include <vector>   
#include <algorithm> 
using namespace std; 

int main() {

    vector<int> triangle_sides(3); 

    
    cin >> triangle_sides[0] >> triangle_sides[1] >> triangle_sides[2];

    
    sort(triangle_sides.begin(), triangle_sides.end());

    
    if (triangle_sides[0] * triangle_sides[0] + triangle_sides[1] * triangle_sides[1] == triangle_sides[2] * triangle_sides[2]) {

        cout << "Yes" << endl; // If the sides form a right-angled triangle, outpu

    } else {

        cout << "No" << endl; // If not, output "No"
    }

    return 0; 
}