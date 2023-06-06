#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    
    float q1,s1,l1,p1,m1;
    float q2,s2,l2,p2,m2;
    char dash;
    char percent;
    float termGrade;
    
    cin >> q1 >> dash >> q2 >> percent;
    cin >> s1 >> dash >> s2 >> percent;
    cin >> l1 >> dash >> l2 >> percent;
    cin >> p1 >> dash >> p2 >> percent;
    cin >> m1 >> dash >> m2 >> percent;
    
    termGrade = (q1 * (q2 / 100)) + (s1 * (s2 / 100)) + (l1 * (l2 / 100)) + (p1 * (p2 / 100)) + (m1 * (m2 / 100));
    
    cout << setprecision(2) << fixed << "Term grade is " << termGrade;
    
    return 0;
    
}