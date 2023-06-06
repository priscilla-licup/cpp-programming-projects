#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    
    int year;
    int a,b,c,d,e;
    float de,day;
    
    cin >> year;
    
    if (year >= 1901 && year <= 2100) {
       
        a = year % 19;
        b = year % 4;
        c = year % 7;
        d = ((a * 19) + 24) % 30;
        e = ((b * 2) + (c * 4) + (d * 6) + 5) % 7;
        de = d + e;
        
        if (de < 10) {
            day = (de + 22);
            cout << "March " << day;
        }
        else {
            day = (de - 9);
            cout << "April " << day;
        }
    }
    else {
        cout << "Invalid input";
    }
}