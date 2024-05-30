# include<stdio.h>
void print_nos(int);
int main()
{
	 print_nos(1);
	 return 0;
}
void print_nos(int no)
{
	 printf("%d\t",no);
	 no++;
	 if(no==101)
	    return;
	 print_nos(no);   
}
