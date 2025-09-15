#include<stdio.h>
int main(){
    int n=5;
 
    for( int i=0; i<=5;i++){
        for( j=0;j<=5;j++){
            printf(" ");

            {
                //upper half
                for(int j=1;j<=2*i-1;j++){
                    printf("*");
                    {
                        printf("\n");
                    }
                    //lower half
                    for ( i= n-1;i>=1;i--){
                        for (j=1;j<=n-i;j++){
                            printf(" ");
                            {
                                
                                    for (j=i;j<=n-i;j++ )
                                    printf("*");
                                    
                                    
                                
                                printf("/n");
                                return 0;

                            }
                        }
                    }
                }
            }
        }
    }
}
                        
                            
                            
                      