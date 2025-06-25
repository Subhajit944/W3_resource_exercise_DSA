//Circumscribed Circle of Triangle......
#include <iostream> 
#include <iomanip> 
#include <cmath> 

using namespace std; 

int main() {
    
    double a, b, c, x1, y1, x2, y2, x3, y3, xp, yp, d, radius;

    
    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3) {
        
        a = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
        b = sqrt((x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1));
        c = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));

        
        radius = (a * b * c) / (sqrt((a + b + c) * (b + c - a) * (c + a - b) * (a + b - c)));

        // Calculating the coordinates of the center of the circumscribed circle (x, y)

        d = 2 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
        xp = ((x1 * x1 + y1 * y1) * (y2 - y3) + (x2 * x2 + y2 * y2) * (y3 - y1) + (x3 * x3 + y3 * y3) * (y1 - y2)) / d;
        yp = ((x1 * x1 + y1 * y1) * (x3 - x2) + (x2 * x2 + y2 * y2) * (x1 - x3) + (x3 * x3 + y3 * y3) * (x2 - x1)) / d;

        // Outputting the coordinates and radius of the circumscribed circle
        cout << fixed << setprecision(3) << "Central coordinate of the circumscribed circle: (" << xp << ", " << yp << ")\nRadius: " << radius << endl;
    }

    return 0; 
}
