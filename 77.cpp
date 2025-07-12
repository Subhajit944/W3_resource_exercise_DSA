//Check if Integers are in Range 100–200....
#include <iostream>
using namespace std;


bool test(int x, int y) {

    return (x >= 100 && x <= 200) || (y >= 100 && y <= 200);
}


int main() {

    cout << test(100, 199) << endl; 
    cout << test(250, 300) << endl;  
    cout << test(105, 190) << endl;
      
    return 0;    
}