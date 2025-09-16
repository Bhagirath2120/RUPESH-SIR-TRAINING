#include<stdio.h>
#include<conio.h>

int main(){
int A[5]={10,20,30,40,50};
int B[5];
for(int i=0;i<=4;i++)
{
   // printf("%d\n",A[i]);
       for(int j=0;j<=i;j++)
       {
        
           printf("%d\n",&B[i]);
       }
    

}
getch();
}