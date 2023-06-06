#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    
    int num;
    char code;
    float amount;

    amount = 0;

    
    while (cin >> code >> num) {
        switch (code) 
        {
            case 'A':
                amount = amount + (45*num);
                cout << setprecision(2) << fixed << "Subtotal is " << amount << endl;
                break;
                
            case 'B':
                amount = amount + (50*num);
                cout << setprecision(2) << fixed << "Subtotal is " << amount << endl;
                break;
                
            case 'C':
                amount = amount + (55*num);
                cout << setprecision(2) << fixed << "Subtotal is " << amount << endl;
                break;
                
            case 'D':
                amount = amount + (60*num);
                cout << setprecision(2) << fixed << "Subtotal is " << amount << endl;
                break;
                
            case 'E':
                amount = amount + (75*num);
                cout << setprecision(2) << fixed << "Subtotal is " << amount << endl;
                break;
                
            default:
            break;
        }
    }
    
    cout << setprecision(2) << fixed << "Total Amount is Php" << amount;
    
    return 0;
}