#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    string text1 = "I have Morning Brain";
    reverse(text1.begin(), text1.end());
    cout << text1 << endl;

    string mystrobject = "abc defx g h ijk";;
    cout << mystrobject << endl;
    int lengthofmystr = mystrobject.length();
    cout << lengthofmystr << endl;
    char myTempChar;
    for (int i = 0; i < lengthofmystr/2; i++) {

        cout << "i = " << i << "and the char at " << i << "is" << mystrobject[i]<<  endl;

        myTempChar = mystrobject[i];
        mystrobject[i] = mystrobject[lengthofmystr - i - 1];
        mystrobject[lengthofmystr - i - 1] = myTempChar;
        cout << "\n the reversed string is";
        cout << "\n the reversed string is: " << mystrobject << endl;

    }

    return 0;
}