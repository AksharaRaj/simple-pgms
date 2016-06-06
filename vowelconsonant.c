#include <stdio.h>

int main(void) {
	int flag=0;
	char str[5]="aeiou";
	char ch;
	scanf("%c",&ch);
	for(int i=0;i<5;i++)
	{
		if(ch==str[i])
		{
			printf("Vowel");flag=1;
			break;
		}
	}
	if(flag==0)
		printf("Consonant");
}
