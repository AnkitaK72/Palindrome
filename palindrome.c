#include <stdio.h>


int main()
{
    int n;
    int size = 8;
    int c[size];
    printf("enter the no");
    scanf("%d",&n);
    int i=size-1;
    printf("binary representation is: ");
    while(n!=0){
        c[i--]=n&1;
        n=n>>1;
        
        
    }
    for(int j=0;j<size;j++)
    printf("%d",c[j]);
    printf("\n");
    
    for(int j=0,k=size-1;j<k;j++,k--){
        if(c[j]!=c[k]){
            printf("Not palindrome\n");
            return 0;
        }
    }
    
    printf("it's palindrome\n");

    return 0;
}