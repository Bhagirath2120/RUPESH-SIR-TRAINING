//incomplete



#include<stdio.h>
#include<conio.h>

void bubbleSort(int a[5]){
int n=0;
     n = sizeof(a)/sizeof(int);
    for (int i=0;i<n-1; i++){
    for(int j=0; j<n-1-i;j++){
        if (a[j]>a[j+1]){
        int temp =a[j];
         a[j]=a[j+1];
         a[j+1]=temp;
         for(int k=0;k>=n; k++)
         printf("%d",a[k]);
       
        }
    }

    }
     
    
};




int main(){


    int arr[5]={2,5,4,3,1};
    bubbleSort(arr);
    




    return 0;
}