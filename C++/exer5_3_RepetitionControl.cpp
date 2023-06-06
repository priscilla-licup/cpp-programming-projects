#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    
    int n,x;
    int counter = 0;
    
    cin >> n;
    
    if (n<=0) {
        cout << "Invalid input";
    }
    else {
        x = n;
        while (x>1) {
            if (x%2 == 0){
                x = x/2;
                cout << x << endl;
                counter++;
            }
        
            else {
                x = (3*x)+1;
                cout << x << endl;
                counter++;
            }
        }
        cout << "Steps taken: " << counter;
    }
}