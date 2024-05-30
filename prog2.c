#include<stdio.h>
void street(),college();
int main()
{
	 printf("I'm in my home");
	 street();
	 printf("I'm back home");
	 college();
	 return 0;
	 
}
void street()
{
	 printf("\n I'm on my way to college'");
	 college();
	 printf("\n I'm on my way to home");
}
void college()
{
	 printf("\n I'm going to college to attending the lectures'");
}
