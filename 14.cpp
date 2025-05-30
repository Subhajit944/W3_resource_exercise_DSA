#include<iostream>
using namespace std ;

int main () {
    int side1;
    float volcu ;

    cout << " Calculate the volume of a cube :\n";
    cout << "--------------------------------\n" ;

    cout << " Input the side of a cube : ";
    cin >> side1 ;

    volcu = ( side1 * side1 * side1);

    cout << " The volume of a cube is : "<< volcu << endl; 
    cout << endl; 

    return 0;

}