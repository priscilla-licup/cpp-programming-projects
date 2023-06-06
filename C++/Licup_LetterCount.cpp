#include <iostream>
#include<bits/stdc++.h> 
#include <string>
#include <string.h>


using namespace std; 

int LetterCount (char letter, char StringInput[]) {
    int count=0;
    int length = strlen(StringInput);
    

    for (int i=0; i < length; i++) {
        StringInput[i] = tolower (StringInput[i]);
        if (StringInput[i]==letter) {
            count++;
            }
    }
    return count;
}
  
int main() 
{ 
    char StringInput[100];
    char letter;
    char alphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int alen = sizeof(alphabet);
    cin >> StringInput;

    for (int i=0; i<alen; i++) {
        letter = alphabet[i];
        cout << letter << "=" << LetterCount (letter, StringInput) << ", ";
    }
}