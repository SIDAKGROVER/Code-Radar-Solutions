#include <stdio.h>
int main() {
    char str[100];
    int n;
    char str1[100];
    scanf("%s %d\n %s",&str,&n,&str1);
    printf("Name: %s\n",str);
    printf("Age: %d\n",n);
    printf("Hobby: %s\n",str1);
    return 0;
}