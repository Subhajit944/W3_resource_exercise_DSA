//Enter length in centimeter and convert it into meter and kilometer....

#include<iostream> 
using namespace std; 

int main() {

    float km, met, cent; 

    cout << " Convert centimeter into meter and kilometer :\n"; 
    cout << "--------------------------------------------------\n";

    cout << " Input the distance in centimeter : "; 
    cin >> cent; 

    met = (cent / 100); 
    km = (cent / 100000); 

    cout << " The distance in meter is: " << met << endl; 
    cout << " The distance in kilometer is: " << km << endl; 

    cout << endl; 

    return 0; 
}