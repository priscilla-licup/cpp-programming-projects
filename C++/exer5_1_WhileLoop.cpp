#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    
    int a,b,c;
    int x,y,z;
    
    cin >> a;
    cin >> b;
    cin >> c;
    
    
    x = a;
    while (x <= b) {
        cout << x << " ";
        x = x + 1;
    }
    cout << endl;
    
    y = a;
    while (y <= c) {
        if (y % 2 == 1) {
            cout << y << " ";
        }
        y = y + 1;
    }
    
    cout << endl;
    
    z = b;
    while (z <= c) {
       if (z % 2 == 0) {
            cout << z << " ";
        }
        z = z + 1; 
    }
    
    return 0;
}