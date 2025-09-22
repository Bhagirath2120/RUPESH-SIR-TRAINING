#include <stdio.h>


int data(int *a ,int *b){
    *a = 10;
    *b =20;
 int sum = *a+*b;
 return sum;

}
int main(){

int a=5;
int b=10;
 int result = data(&a,&b);
 printf("%d", result);
 printf("%d",a+b);





// int *p=&a;


// printf("%d\n",a);
// printf("%d\n",&a);
// printf("%d\n",p);
// printf("%d",*p);
}