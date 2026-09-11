#include <stdio.h>

void pattern1()
    {
        for(int i=0;i<5;i++){
    
        for(int j=0;j<5;j++){
            printf("*");
        }
        printf("\n");
    }
    }

    
    void pattern2()
    {
    for(int i=0;i<5;i++){    
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    }

    void pattern3(){
        for(int i=1;i<=4;i++){
            for(int j=1;j<=i;j++){
                printf("%d",j);
            }
            printf("\n");
        }
    }
     void pattern4(){
        for(int i=1;i<=4;i++){
            for(int j=1;j<=i;j++){
                printf("%d",i);
            }
            printf("\n");
        }
    }
    void pattern5(){
        for(int j=0;j<5;j++){
            for(int i=5;i>j;i--)
            {
                printf("*");
            }
            printf("\n");
        }
    }
   void pattern6(){
        for(int i=0;i<5;i++){
            for(int j=0;j<5-i-1;j++){
                printf(" ");

            }
            for(int j=0;j<2*i+1;j++){
                printf("*");


            }


        for(int j=0;j<5-i-1;j++){
                printf(" ");
              }
        
        printf("\n");
            }
    }
    
    
int main() {
    pattern6();
    return 0;
}


