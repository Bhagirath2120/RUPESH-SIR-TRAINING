#include<stdio.h>
#include<conio.h>/*

int main(){
int a[5]={9,4,3,6,8};
int sum=0;

int max;

for(int i=0;i<3;i++){
printf("%d\n",a[i]);

sum=sum+a[i]; 


printf("%d\n",sum);}
sum=0;

for(int j=2;j<4;j++){
    printf("%d.\n",a[j]);
    
    sum=sum+a[j];

}

printf("%d",sum);




    return 0;*/
int main(){

int a[5]={9,4,3,6,8};
int sum=0;
int k=3;
int n=  sizeof(a)/sizeof(a[0]);

for(int i=0;i<k;i++){
    sum=sum+a[i];
}
int max=sum;
for(int j=k;j<n;j++){
    sum=sum+a[j]-a[j-k];
    if(sum>max){
        max=sum;
        printf("%d",max);}
        
    
    //printf("%d",max);
}

}