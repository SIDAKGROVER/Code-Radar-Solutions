// Your code here...
#include<stdio.h>
int main(){
    int a,a1,a2;
    scanf("%d %d %d",&a,&a1,&a2);
    if (a==a1 && a1==a2){
        printf("Equilateral");

    } 
    else if(a==a1 || a1==a2 || a2==a){
        printf("Isosceles");

    }
    else{
        printf("Scalene");
    }
           return 0;
}