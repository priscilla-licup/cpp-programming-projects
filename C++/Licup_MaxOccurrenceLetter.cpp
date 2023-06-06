#include <iostream>
#include <iomanip>
#include<bits/stdc++.h>

using namespace std;

char finalLetter (string sentence) {
    int All=256;
    int count[All] = {0};
    int length = sentence.length();
    int m = 0;
    char fin;
    
    for (int i=0; i<length; i++) {
        if (isalpha (sentence[i])) {
            count[sentence[i]]++;
            if (m <= count[sentence[i]]) {
                m = count[sentence[i]];
                fin = sentence[i];
            }
        }
    }
    return fin;
}

int finalCount (string sentence) {
    int All=256;
    int count[All] = {0};
    int length = sentence.length();
    int m = 0;
    
    for (int i=0; i<length; i++) {
        if (isalpha (sentence[i])) {
            count[sentence[i]]++;
            if (m < count[sentence[i]]) {
                m = count[sentence[i]];
            }
        }
    }
    return m;
}

int main() {
    string sentence;
    
    for (;;) {
        getline (cin,sentence);
        
        if (sentence=="quit") {
            break;
        }
        else {
            cout << finalLetter (sentence) << "=" << finalCount (sentence);
        }
    }
    
}
