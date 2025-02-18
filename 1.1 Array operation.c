/* program for Array Operations author : Adyasha singh */
#include<stdio.h>
#include<stdlib.h>
void create (int a[] ,int *n)
{
	int i;
	printf("\n Enter N : \n");
	scanf("%d",n);
	printf("\n Enter data into Array :\n");
	for (i=0;i<*n;i++)
		scanf("%d",&a[i]);
		
}
void traverse(int a[],int lb ,int ub)
{
	int i;
	printf("\n Data in Array :\n");
	while (i<=ub)
	{
		printf("%d\t",a[i]);
		i++;
	}
	
}
main()
{
	int a[10],n;
	create(a,&n);//call to create function. 
	traverse(a,0,n-1);//call to traverse function.
}
