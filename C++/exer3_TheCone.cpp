#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
    
    float r,h,s;
    float pi = 3.14159;
    float volume;
    float area;
    
    cin >> r;
    cin >> h;
    cin >> s;
    
    area = ((pi) * r * s) + ((pi) * (r*r));
    volume = ((pi) * (r*r) * (h)) / 3;
    
    cout << setprecision(2) << fixed << "Surface Area is " << area << endl;
    cout << setprecision(2) << fixed << "Cone Volume is " << volume << endl;
    
    return 0;
    
}