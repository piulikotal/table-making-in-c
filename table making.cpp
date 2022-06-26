#include <stdio.h>  
int main()   
{
	int num,i=1;
	printf("enter the table you want to print");
	scanf("%d",&num);
	table:
	printf("%d x %d=%d\n",num,i,num*i);
	i++;
    if(i<=10)
	goto table;
}
