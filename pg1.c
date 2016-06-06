#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	if(n>0)
		printf("Positive");
	else
	if(n==0)
		printf("Zero");
	else
		printf("Negative");
	return 0;
}
