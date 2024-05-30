#include<stdio.h>
int calsum(int,int,int);
int main()
{
	 int a,b,c,sum;
	 printf("enter 3 whole numbers");
	 scanf("%d %d %d",&a,&b,&c);
	 sum=calsum(a,b,c);
	 printf("Sum of given three number is %d",sum);
	 return 0;
}
int calsum(int a,int b,int c)
{
	 int result;
	 result=a+b+c;
	 return result;
	 
}
