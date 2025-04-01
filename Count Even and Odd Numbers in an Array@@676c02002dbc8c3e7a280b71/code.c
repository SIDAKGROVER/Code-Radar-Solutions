// Your code here...
#include <stdio.h>
int main(){
    int n;
    int odd_count=0,even_count=0;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    for (int i=0;i<n;i++){
        if (arr[i]%2==0){
            even_count++;
        }else{
            odd_count++;
        }
    
    }
    printf("%d %d",even_count,odd_count);
    return 0;

}