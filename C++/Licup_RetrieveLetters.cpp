#include <iostream>
#include <cstring>
#include <string>
#include <ctype.h>

using namespace std;

void retrieve (string code) {
    string message;
    for (int i=0; i<=code.length(); i++) {
        if (isalpha (code[i])) {
            message += code[i];
        }
    }
    cout << message << endl;

}

int main () {
    string code;
    
    for (;;) {
        cin >> code; 
        
        if (code=="exit") {
            break;
        }
        else {
            retrieve (code);
        }
    }
    
}
