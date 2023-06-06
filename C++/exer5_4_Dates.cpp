#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main () {
    
    int m,d,y;
    char dash;
    string monthString [] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    
    cin >> m >> dash >> d >> dash >> y;
    
    cout << monthString [m-1] << " " << d << ", " << y << endl;
    
    if (y % 4 != 0) {
        cout << y << " is a Common Year.";
    }
    else {
        if (y % 100 != 0) {
            cout << y << " is a Leap Year.";
        }
        else {
            if (y % 400 != 0) {
                cout << y << " is a Common Year.";
            }
            else {
                cout << y << " is a Leap Year.";
            }
        }
    }  
    
    return 0;
}