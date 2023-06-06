#include <iostream>

using namespace std;

int main() {
    
    int a1,a2,a3;
    int cardValue;
    
    cin >> a1 >> a2 >> a3;
    
    if (a1 >10)
    a1 = 10;
    
    if (a2>10)
    a2 = 10;
    
    if (a3 > 10)
    a3 = 10;
    
    if (a1 == 1 && a2+a3 <= 10)
    a1 = 11;
    
    if (a2 == 1 && a1+a3 <= 10)
    a2 = 11;
    
    if (a3 == 1 && a1+a2 <= 10)
    a3 = 11;
    
    cardValue = (a1 + a2 + a3);

    
    cout << "The card value is: " << cardValue;
    
     return 0;
}