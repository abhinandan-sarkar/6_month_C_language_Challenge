#include <stdio.h>
int main(){
int max(int x,int y){
if(x>y){
printf("%d is grater than %d",x,y);
}else{
printf("%d is grater than %d",y,x);
}

}
max(10,20);
return 0;
}
