#include <iostream>
#include <string>

using namespace std;

void setCase (string phrase) {
    for (int i=0; i<phrase.length(); i++) {
        if (i==0) {
            phrase[i] = toupper(phrase[i]);
        }
        else if (phrase[i] == ' ') {
            phrase[i] = toupper(phrase[i]);
        }
        else if (phrase[i] == '-') {
            phrase[i] = toupper(phrase[i]);
        }
    }
    cout << phrase << endl;
}


int main () {
    string phrase;
    for (;;) {
        getline (cin,phrase);
        if (phrase == "0") {
            break;
        }
        else {
            setCase (phrase);
        }
    }
}