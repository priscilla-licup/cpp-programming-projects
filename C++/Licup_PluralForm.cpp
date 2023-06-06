#include <iostream>
#include <cstring>

using namespace std;

bool isConsonant (char letter) {
    if (letter != ('a' || 'e' || 'i' || 'o' || 'u')) {
        return true;
    } 
    else {
        return false;
    }
}

void formPlural (string word) {
    int length = word.length();
    
        if (word[length-1]=='s' || word[length-1]=='x' || word[length-1]=='z' || (word[length-2]=='c' && word[length-1]=='h') || (word[length-2]=='s' && word[length-1]=='h')) {
            word += "es";
        }
        else if (word[length-1]=='y') {
            if (isConsonant(word[length-2]) == true) {
                word[length-1]='i';
                word += "es";
            }
            else {
               word += "s"; 
            }
        }
        else if (word[length-2]=='o' && word[length-1]=='n') {
            word[length-2]='a';
            word[length-1]=' ';
        }
        else {
            word += "s";
        }
        
    cout << word << endl;
}

int main () {
    string word;
    
    for (;;) {
        cin >> word;
        
        if (word == "EXIT") {
            break;
        }
        else {
            formPlural (word);
        }
    }
    
}