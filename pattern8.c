/**
 # # #
 # #
 #
**/
#include<stdio.h>
int main(){

    int rows,cols,n;
    printf("Enter Number of Rows=");
    scanf("%d",&n);
    for(rows=n;rows>=1;rows--){
        for(cols=1;cols<=rows;cols++){
            printf("#");
        }
        printf("\n");
    }
return 0;
}
