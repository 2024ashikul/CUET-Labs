#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if (n & 1 )
    {
        printf("The number %d is odd ",n);
    }else{
        printf("The number %d is even" , n );
    }
    

    return 0;
}