//recorsion

#include<stdio.h>
#include<conio.h>

 int sum(int a){
  
  int add=0;
    if(a==0){
    return 0;
   }
   return a+sum(a-1);

    //  add=add+a;
    //  printf("%d",add);
    // sum(a-1);
    // // printf(" %d ",a);
   
    
}

int main(){

int data = sum(5);
printf("%d",data);
    // printf("hello");
}
    


