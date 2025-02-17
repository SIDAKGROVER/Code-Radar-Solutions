// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int sum1=0;
    for(int i = 1;i<a+1;i++){
       sum1 = sum1 + i ;
    }
    printf("%d",sum1);

}