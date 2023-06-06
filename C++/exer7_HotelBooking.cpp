#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int c,r,d;
    string type;
    float dis,fc,fd;
    float cost,bill;
    
    cin >> type >> c >> r >> d;
    
    if (d >= 3) {
        dis = 5;
    }
    else {
        dis = 0;
    }
    
    if (type == "W") {
    cout << "Guest type: Walk-in Guest" << endl;
        if (r >= 10 && r <15) {
            fd = dis + 5;
            fc = c - (c*(fd/100));
        }
        else if (r >= 15 && r < 20) {
            fd = dis + 15;
            fc = c - (c*(fd/100));
        }
        else if (r >= 20) {
            fd = dis + 20;
            fc = c - (c*(fd/100));
        }
        else {
            fd = 0;
            fc = c;
        }
    }
    else {
    cout << "Guest type: Privilege Guest" << endl;
        if (r >= 10 && r <15) {
            fd = dis + 10;
            fc = c - (c*(fd/100));
        }
        else if (r >= 15 && r < 20) {
            fd = dis + 20;
            fc = c - (c*(fd/100));
        }
        else if (r >= 20) {
            fd = dis + 30;
            fc = c - (c*(fd/100));
        }  
        else {
            fd = 0;
            fc = c;
        }
    }
    
    
    cost = fc * r * d;
    bill = cost + (cost * 0.12);

    
    cout << "Cost of renting a room: " << c << endl;
    cout << setprecision(2) << fixed << "Discount: " << fd << "%" << endl;
    cout << "Number of rooms booked: " << r << endl;
    cout << "Number of days: " << d << endl;
    cout << setprecision(2) << fixed << "Total cost: " << cost << endl;
    cout << setprecision(2) << fixed << "Total bill: " << bill;
    
    return 0;
}
