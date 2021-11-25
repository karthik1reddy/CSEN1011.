#include <stdio.h>
int main() {
	int p,r,t;
	printf("enter principle:");
	scanf("%d",&p);
	printf("enter rate:");
	scanf("%d",&r);
	printf("enter time:");
	scanf("%d",&t);
	printf("Simple interest is: %d\n", float(p*r*t/100));
	printf("Compund interest is: %d",float(p*t*(1+r/100)));
	
}
