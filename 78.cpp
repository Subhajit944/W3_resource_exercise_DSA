//Check if Integers are in Range 20–50
#include <iostream>
using namespace std;


bool test(int x, int y, int z) {

    return (x >= 20 && x <= 50) || (y >= 20 && y <= 50) || (z >= 20 && z <= 50);
}


int main() {

    cout << test(11, 20, 12) << endl;  
    cout << test(30, 30, 17) << endl;  
    cout << test(25, 35, 50) << endl;   
    cout << test(15, 12, 8) << endl;  
      
    return 0;    
}