/**
 A B C
 A B
 A
**/
#include<stdio.h>
int main(){

    int rows,cols,n;
    printf("Enter Number of Rows=");
    scanf("%d",&n);
    for(rows=n;rows>=1;rows--){
        for(cols=1;cols<=rows;cols++){
            printf("%c ",cols+64);
        }
        printf("\n");
    }
return 0;
}
