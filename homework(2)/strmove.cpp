#include <iostream>
using namespace std;

char* strmove(char* s, int ch);
int main() {
    char s[11] = "hello";
    cout << strmove(s, 5) << endl;
}
char* strmove(char* s, int ch) {
    char *newStr = new char[100];
    int l = strlen(s);
    int i = 0;
    for (i = 0; i < ch; i++) {
        newStr[i] = s[l - ch + i];
        cout << newStr[i] << endl;
    }
    for (int j = 0; j < l - ch; j++) {
        newStr[i++] = s[j];
    }

    newStr[i] = '\0';
    return newStr;
}