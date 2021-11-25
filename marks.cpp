#include <stdio.h>
int main(){
	int e,m,s,so,h;
	printf("Enter maths marks");
	scanf("%d",&m);
	printf("Enter english marks");
	scanf("%d",&e);
	printf("Enter social marks");
	scanf("%d",&so);
	printf("Enter science marks");
	scanf("%d",&s);
	printf("Enter hindi marks");
	scanf("%d",&h);
	printf("total marks is:%d \nAverage marks is:%d\n percentage is:%d", e+m+s+so+h, (e+m+s+so+h)/5, (e+m+s+so+h)/5);
}
