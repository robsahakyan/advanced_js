#include <iostream>
using namespace std;

char* strset(char* s, char ch);
int main() {
   char s[4] = "bro";
   char ch1 = 'a';
cout << strset(s,ch1) << endl;
}
char* strset(char* s, char ch) {
   
   while(*s != '\0'){
       *s++ = ch;
   }
   return s;
}