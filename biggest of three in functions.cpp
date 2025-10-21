#include<stdio.h>
int biggest(int,int,int,int);
int main(){
	int a,b,c,d;
	printf("enter a,b,c,d values");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("biggest number is:%d\n",biggest(a,b,c,d));
	return 0;
}
int biggest(int a,int b,int c,int d)
{
	if(a>b&&a>c&&a>d)
	return a;
	else if(b>c&&b>d&&b>a)
	return b;
	else if(c>d&&c>b&&c>a)
	return c;
	else
	return d;
}
