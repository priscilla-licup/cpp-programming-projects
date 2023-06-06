#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    float g1,g2,g3,g4,g5;
    float i1,i2,i3,i4,i5;
    char slash;
    float labGrade;
    
    cin >> g1 >> slash >> i1;
    cin >> g2 >> slash >> i2;
    cin >> g3 >> slash >> i3;
    cin >> g4 >> slash >> i4;
    cin >> g5 >> slash >> i5;
    
    labGrade = ((g1+g2+g3+g4+g5)/(i1+i2+i3+i4+i5)) * 60 + 40;
    
    cout << setprecision(2) << fixed << "lab grade is " << labGrade;
    
     return 0;
}