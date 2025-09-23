#include<stdio.h>

// int main(){
// swap value using 3rd variable


void pointer(int *arr, int *bbb)
{
int x= *arr;
*arr=*bbb;
*bbb=x;

printf("%d %d",*arr,*bbb);

};



int main(){

int a=3;
int b=10;

 pointer(&a,&b);



}


/*

 // swap value without using 3rd variable

/* void pointer(int *x, int *y){

    *x= *x+*y;
    *y=*x-*y;
    *x= *x-*y;

    printf("%d %d",*x,*y);



}



int main(){
int a=12;
int b=3;

pointer(&a,&b);


}*/




/////reverse array

// int main(){
//     int arr[4]={1,2,3,4};
//     int *p=arr;
//     for(int i=4;i>=0;i--){
// printf("%d",*(p+i));

//     }

// }

//////////////////////////////////////////////////////////////////////////////////////

// 2D array












