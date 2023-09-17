//insertion sorting
#include<stdio.h>
int main()
{
	int i,j,n,a[100],temp;
	printf("enter the number of elements:\n");
	scanf("%d",&n);
	printf("enter elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=1;i<n;i++)
	{
	  temp=a[i];
	for(j=i-1;j>=0&&a[j]>temp;j--)
	{
	  a[j+1]=a[j];	
	}
	a[j+1]=temp;
	}
	printf("SORTED ARRAY IS:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	
	return 0;
}
