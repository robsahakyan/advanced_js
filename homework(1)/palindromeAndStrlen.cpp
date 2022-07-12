#include <iostream>
using namespace std;

int strLen(char* n);
string palindrome(string str);

int main() {
    char str[6] = "hello";
    cout << strLen(str) << endl;
    cout << palindrome("Hello") << endl;
    return 0;
}

string palindrome(string str)
{
    int l = str.length();
    for (int i = 0; i < l / 2; i++)
    {
        swap(str[i], str[l - i - 1]);
    }
    return str;
}

int strLen(char* n)
{
    int count = 0;
    while (*(n + count) != '\0') {
        count++;
    }
    return count;
}