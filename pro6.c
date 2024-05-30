#include<stdio.h>
void fn();
int main()
{
	 fn();
	 fn();
	// count++;
	 fn();
	 return 0;
	 
}
void fn()
{
	static int count=1;
	 printf("\n No. of times fn() is called is %d",count);
	 count++;
}
