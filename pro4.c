#include<stdio.h>


int main()
{
	 int no,fv;
	 printf("enter the number");
	 scanf("%d",&no);
	 fv=fact(no);
	 printf("factorial value of no %d is %d",no,fv);
	  return 0;
}
int fact(int x)
{
	 int y;
	 if(x==1)
	    return 1;
	    y=x*fact(x-1);
	    return y;
}
