//Sort Seven Numbers in Descending....
#include <iostream> 
using namespace std; 

int main() {

    int num[7]; 

    for (int i = 0; i != 7; ++i) {

        cin >> num[i]; 
    }

    sort(num, num+7); 

    cout << " " << num[6]  << " " << num[5]  << " " << num[4]  << " " << num[3]  << " " << num[2] << " " << num[1] << " " << num[0];

    return 0; 
}