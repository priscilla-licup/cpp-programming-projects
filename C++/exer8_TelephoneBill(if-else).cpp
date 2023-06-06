#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    
    int acc;
    char type;
    float min,minA,minB,ama,pma,amount;
    
    cin >> acc;
    cin >> type;

    
    if (type == 'r') {
        
        cout << "Account Number: " << acc << endl;
        cin >> min;
        cout << "Type of Service: Regular" << endl;
        cout << setprecision(2) << fixed << "Number of minutes: " << min << endl;
        
        if (min <= 50) {
            amount = 10;
        }
        else {
            amount = 10 + ((min - 50)*0.20);
        }
                    cout << setprecision(2) << fixed << "Total Amount Due: $" << amount << endl;
    }
    
    
    else if (type == 'p') {
        
        cout << "Account Number: " << acc << endl;
        cin >> minA;
        cin >> minB;
        
        cout << "Type of Service: Premium" << endl;
        cout << setprecision(2) << fixed << "Number of minutes during the day: " << minA << endl;
        cout << setprecision(2) << fixed << "Number of minutes during the night: " << minB << endl;
        
        if (minA <= 75) {
            ama = 0;
        }
        else {
            ama = ((minA - 75)*0.10);
        }
        
        if (minB <=100) {
            pma = 0;
        }
        else {
            pma = ((minB - 100)*0.05);
        }
        
        amount = 25 + ama + pma;
        cout << setprecision(2) << fixed << "Total Amount Due: $" << amount << endl;
    }
    
    
    else {
        cout << "Invalid Service Type";
    }
    
    
    return 0;

}