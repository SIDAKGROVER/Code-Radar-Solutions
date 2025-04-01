#include <stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }   
    scanf("%d",&k);
    int prry[n];
    for (int j=0;j<n;j++){
        if (j+k+1<=n){
            prry[j+k]=arr[j];

        }
        else{
            prry[j+k-n]=arr[j];
        }
         
    }
     for(int i=0;i<n;i++){
        printf("%d\n",prry[i]);

}
}