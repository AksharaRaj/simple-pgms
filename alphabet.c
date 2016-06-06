#include <stdio.h>

int main(void) {
char ch;
scanf("%c",&ch);
if(ch>=65&&ch<=90 || ch>=97&&ch<=122)
	printf("Alphabet");
else
	printf("Not an Alphabet");
	return 0;
}
