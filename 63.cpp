//Difference Between Max and Min Numbers....

#include <iostream> 

using namespace std;

int main(){

    double num[52]; 
    int c = 0; 

    
    while (cin >> num[c++]); 

    sort(num, num + c - 1); 


    cout << "Difference between the highest number and the lowest number: " << endl;
    cout << num[c - 2] - num[0] << endl; 

    return 0; 
}