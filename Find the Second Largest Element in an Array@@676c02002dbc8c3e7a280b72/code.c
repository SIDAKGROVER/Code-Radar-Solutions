// Your code here...
#include<stdio.h>
void sorting(int n,int arr[n]){
    for (int i=0;i<n;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int x=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=x;
            }

        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i])
    }

}