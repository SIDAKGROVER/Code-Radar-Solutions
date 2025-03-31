#include <stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<n;i++){
        scanf("%d",&arr[i]);

    }   
    scanf("%d",&k);
    int prry[n];
    for (int j=1;j<n;j++){
        if (i+k<=n){
            prry[i+k]=arr[i];

        }
        else{
            prry[i+k-n]=arr[]
        }

    }
     for(int i=1;i<n;i++){
        printf("%d",prry[i]);

}
}