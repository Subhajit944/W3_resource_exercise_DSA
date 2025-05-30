//Find the Area and Perimeter of a Rectangle
#include<iostream>
using namespace std ;

int main (){
    int width , lngth , area , peri ;

    cout << " Find the Area and Perimeter of a Rectangle :\n";
    cout << "-------------------------------------------------\n";
    
    cout << " Input the width of the rectangle : ";
    cin >> width;

    cout << " Input the lngth of the rectangle : ";
    cin >> lngth;

    area = ( lngth * width);
    peri = 2*(lngth + width);

    cout << " The area of the rectangle is : "<< area << endl; 
    cout << " The perimeter of the rectangle is : "<< peri << endl;

    cout <<endl;

    return 0;


}