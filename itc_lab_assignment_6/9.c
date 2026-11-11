#include <stdio.h>
void classifyChar(char ch) {
if (ch >= 'A' && ch <= 'Z') puts("Uppercase letter");
else if (ch >= 'a' && ch <= 'z') puts("Lowercase letter");
else if (ch >= '0' && ch <= '9') puts("Digit");
else if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r')
puts("Whitespace");
else puts("Other character");
}
int main(void) {
char ch;
printf("Enter one character: ");
if (scanf("%c", &ch) != 1) return 1;
classifyChar(ch);
return 0;
}