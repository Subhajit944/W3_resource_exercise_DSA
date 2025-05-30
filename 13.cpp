#include <iostream>
using namespace std;

int main (){


    int radius ;
    float sphere;

      cout << "Calculate the volume of a sphere :\n"; 
    cout << "---------------------------------------\n;"

    cout << "Input the radius of a sphere : " 
    cin >>redius ;

    sphere = ( 4*3.14*radius *radius * radius)/3;

    cout <<  " The volume of a sphere is : " <<sphere <<endl;
    cout <<endl;

    return 0;
}
