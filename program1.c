#include <stdio.h>

int main()
{
    int input;
    scanf("%d",&input);
    int sum = 0;
    for(int i=0;i<input;i++){
        if(i%5==0||i%3==0){
            sum=sum+i;
        }
    }
    printf("%d",sum);

    return 0;
}