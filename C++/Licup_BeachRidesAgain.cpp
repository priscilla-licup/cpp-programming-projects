#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

using namespace std;

double computeFee (char type,int h1,int m1,int h2,int m2) {
     int hour,min,Amin;
     
     Amin = ((h2-h1)*60)+m2-m1;
     hour = Amin/60;
     min = Amin%60;

     
    switch (type) {
        case 'J':
            return (500*(hour))+(10*(min));
            break;
                    
        case 'K':
            return (200*(hour))+(5*(min));
            break;
                    
        case 'B':
            return (100*(hour))+(2*(min));
            break;

    }
}

int main () {
    int h1,m1,h2,m2;
    char type;
    char colon;
    double total = 0;
    
    for (;;) {
        cin >> type >> h1 >> colon >> m1 >> h2 >> colon >> m2;
        if (type=='0') {
            break;
        }

        cout << setprecision(2) << fixed << "Rent Fee is Php" << computeFee (type,h1,m1,h2,m2) << endl;
        total = total + computeFee (type,h1,m1,h2,m2);
    }
    cout << setprecision(2) << fixed << "Total Earnings is Php" << total << endl;
}

