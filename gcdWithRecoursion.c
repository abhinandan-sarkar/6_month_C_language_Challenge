#include<stdio.h>
int gcd(int , int);
int main() {
    int n1,n2,b;
    printf("****** WELCOME TO GCD PROGRAM *******\n\n");
    printf("Please enter two positive integer \n");
   scanf("%d %d" ,&n1,&n2);

    int gcd(int n1, int n2){
                if(n1>n2){
                
                int rem=n1%n2;
                if(n1%rem==0){
                        return rem;
                        
                }else{
                      return gcd(b,rem);
                }
                
            }
          
            
            
    }
    
    
    int g=gcd(n1,n2);
    printf("%d",g);

     
    return 0;
}
