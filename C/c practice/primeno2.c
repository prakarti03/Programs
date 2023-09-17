#include<stdio.h>

int main(){
    int n,i=2;
    int isprime=1;
    printf("Enter n:\n");
    scanf("%d",&n);

    while(i<n)
    {
        if(n%i==0)
        {
            isprime=0;
        }
    i++;
    }
    if (isprime)
    {
        printf("The number %d is prime.", n);
    }
    else
    {
        printf("The number %d is not prime.", n);
    }
    return 0;
}