#include<stdio.h>
#include<errno.h>
#include<string.h>

int main(){
    int i;
    char b;
    printf("enter number:\n");
    scanf("%d",&i);
   // fflush(stdin); this is required bcz prgrm ll take 'enter' as a character and print nothing
    printf("enter any character:\n");
    scanf("%c",&b);

    printf("the number is: %d \ncharacter is: %c",i,b);    
    return 0;
}