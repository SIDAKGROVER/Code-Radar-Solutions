// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%400==0){
        printf("Leap Year");
    }
    else if(a%4==0){
        printf("Leap Year");
    }
    else(a%1900==0){
        printf("Not a Leap Year");
    }
    return 0;
}