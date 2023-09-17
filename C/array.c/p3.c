#include<stdio.h>
int main()
{
	int la[11]={1,2,3,4,5,6,7,8,9,10};
	int n=9;
	int j=n,k=5,item=29,i=0;
	while(j>=k){
		la[j+1]=la[j];
		j--;
	//	printf("%d\n",la[k]);
		
	}
	la[k]=item;
	n++;
	while(i<=n){
		printf("%d\n",la[i]);
		i++;
	}
	 item=la[k];
	for(j=k;j<=n-1;j++)
	{
		la[j]=la[j+1];
	}
	n--;
	int y=0;
	while(y<=n){
		printf("%d\n",la[y]);
		y++;
	}
	return 0;
}
