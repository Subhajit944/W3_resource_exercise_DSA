//Check if Either Integer is in Range 20–50..
#include <iostream>
using namespace std;


bool test(int x, int y) {

    return (x <= 20 || y >= 50) || (y <= 20 || x >= 50);
}


int main() {

    cout << test(20, 84) << endl;   
    cout << test(14, 50) << endl;  
    cout << test(11, 45) << endl;   
    cout << test(25, 40) << endl;  

    return 0;    
}