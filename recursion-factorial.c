#include<stdio.h>

// int fact(int a){
//     if(a==0 || a==1){
//         return 1;
//     }
//     return a*fact
//}

double power( int x, int n){
    if(n==0){
        return 1;
    }
    return x*power(x,n-1);
}


int main(){
 int data = power(2,3);

 printf("%d",data);
}