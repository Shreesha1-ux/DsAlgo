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

int main() {
    pattern3();
    return 0;
}
