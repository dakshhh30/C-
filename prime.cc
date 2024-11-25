#include <stdio.h>
int main(){

    int num = 0;
    int n;
    printf("the number is n is :");
    scanf("%d",&n);

    for(int i = 1; i<=n; i++){
        if(i % 2 !=0){
            printf("a prime number: %d \n",i);
        }

        
    }
}