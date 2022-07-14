#include <iostream>
using namespace std;

char* strcatt(char* s1, const char* s2);
int main() {
    char s1[100] = "Vahe", s2[100] = "Rob";
    cout << strcatt(s1, s2) << endl;
}

char* strcatt(char* s1, const char* s2)
{
    int i;
    int j;

    for (i = 0; s1[i] != '\0'; i++);
    for (j = 0; s2[j] != '\0'; j++) {
        s1[i + j] = s2[j];
    }

    s1[i + j] = '\0';

    return s1;
}