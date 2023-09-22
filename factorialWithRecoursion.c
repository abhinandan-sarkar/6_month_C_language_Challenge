#include<stdio.h>
int factorial();
int main() {
    int n;
    /*
        this is a recursive factorial example :
                in this program you have find same advane concepet in concepet
                
                1. scope of the variable 
                2. recurence relation 
                3. same basic condition 
                4. basic input  output
                5.function call + function declaration 
                
                
                 that's all thank you 
                
    
    */
    printf("enter any positive integer : ");
    scanf("%d",&n);
    int factorial(int x){

        if(x==0 || x==1){
            return 1;
        }
        return x*factorial(x-1);

        }
        int a =factorial(n);
        printf("%d ",a);



        


     
    return 0;
}
