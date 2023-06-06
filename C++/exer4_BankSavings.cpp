#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    
    float bb,r;
    char percent;
    float Q1;
    float Q2;
    float Q3;
    float Q4;
    float interest;
    
    cin >> bb >> r >> percent;
    
    Q1 = bb + (bb * (r / 100));
    Q2 = Q1 + (Q1 * (r / 100));
    Q3 = Q2 + (Q2 * (r / 100));
    Q4 = Q3 + (Q3 * (r / 100));
    interest = Q4 - bb;
    
    cout << setprecision(2) << fixed << Q1 << endl;
    cout << setprecision(2) << fixed << Q2 << endl;
    cout << setprecision(2) << fixed << Q3 << endl;
    cout << setprecision(2) << fixed << Q4 << endl;
    cout << setprecision(2) << fixed << "Interest earned is " << interest << endl;
    
    return 0;
    
}