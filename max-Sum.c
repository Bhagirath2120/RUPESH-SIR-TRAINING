#include<stdio.h>


int main(){
    int arr[5]={1,-2,3,-4,5,};
    int k=3;
    int wSum=0;
    for (int i=0;i<k;i++){
        wSum+=arr[i];
    }

    int maxSum=wSum;
    for(int i=k;i<5;i++)
    {
        wSum =wSum+arr[i]-arr[i-k];
        if (wSum>maxSum){
            maxSum=wSum;

            // printf("%d",maxSum);
        }
    }


printf("%d",maxSum);


}