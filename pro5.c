#include<stdio.h>
int modify (int);
int main()
{ 
   int c=20;
   printf("bfore modify(),value in var c %d",c);
   c=modify(c);
   printf("\n After modify(),value in var c %d",c);
   return 0;
   
}
int modify (int x)
{
	 x+=5;
	 return x;
	 
}
