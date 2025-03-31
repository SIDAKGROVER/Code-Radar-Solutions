#include <stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    int prr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for (int j=0;j<n;j++){
        if (j+k+1<=n){
            prr[j+k]=arr[j];

        }
        else{
            prr[j+k-n]=arr[j];
        }
        
    }
    for(int j =0;j<n;j++){
        printf("%d\n",prr[j]);
    }


}