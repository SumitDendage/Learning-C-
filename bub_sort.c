#include<stdio.h>
#define SIZE 50

//fn declarations
void accept(int [],int);
void bub_sort(int[],int);

int main()
{
	 int nos[SIZE],noe;
	 printf("Enter the numbers of elements");
	 scanf("%d",&noe);
	 accept(nos,noe);
	 bub_sort(nos,noe);
	 return 0;
	 
}
void accept(int nos[],int noe)
{
	 int i;
	 printf("Enter the elements:-");
	 for(i=0;i<noe;i++)
	 scanf("%d",&nos[i]);
}
void bub_sort(int nos[],int noe)
{

	 int i,j,temp,comp_count=0,flag,
	 swap_count=0;
	 for(i=1;i<noe;i++)
	 {
	 	 flag=0;
	 	 for(j=0;j<noe-i;j++)
	 	 {
	 	 	 comp_count++;
	 	 	 if(nos[j]>nos[j+1])
	 	 	 {
	 	 	 	 temp=nos[j];
	 	 	 	 nos[j]=nos[j+1];
	 	 	 	 nos[j+1]=temp;
	 	 	 	 swap_count=3;
	 	 	 	 flag=1;
			   }
		  }
		  printf("\nAfter pass $d elements are ",i);
		  for(j=0;j<noe;j++)
		  printf("%d",nos[j]);
		  
		  if(!flag)
		  break;
		  printf("\n No. pf comparisons are %d",comp_count);
		  printf("\n No of comparisons are %d",swap_count);
		  
	 }
}
