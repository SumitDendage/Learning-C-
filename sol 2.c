#include<stdio.h>
int main()
{
	 static int no=1;
	 printf("%d ",no);
	 no++;
	 if(no==101)
	   return 0;
	 
	 main();
	 return 0;  
}
