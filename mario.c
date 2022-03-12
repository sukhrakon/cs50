#include <stdio.h>
int main()
{   int height;
    printf("please enter the level:");
    scanf("%d",&height);
    if(height < 9 || 0 < height){
        for(int i=0; i<height;i++){
            for(int j =height-1;j>=1;j--){
                printf(" ");
            }
            for(int j=0;j<=i;j++){
                printf("#");
            }
            printf("\n");
        }
    }
}
