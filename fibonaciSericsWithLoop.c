#include<stdio.h>
int main(){
    int range,sum=1;
    printf("Please enter a positive value : ");
    scanf("%d",&range);
    for(int i=0;i<=range;i++){
        if(i==0){
            printf("%d \n",0);
            printf("%d \n",1);
        }
            sum+=i;
        printf("%d \n",sum);
    }
    return 0;
}
