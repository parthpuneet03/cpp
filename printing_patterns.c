#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{/* the logic here is to construct a matrix    for max row and columns, here, maxR=maxC=2*n-1 and then fill the matrix with no in such a way that
    ek puri row aur ek pure column me ek hi number print ho and aise print ho ki uska ek hollow square ban jaye jiske andar uske chhote no. ke  square bane*/
    #include<stdio.h>
int main(){
    int n, len, start, end;
    scanf("%d",&n);
    len=2*n-1;
    start=0;
    end=len-1;
    int a[len][len];
    while(n>0){
        for(int i=start; i<=end; i++){
            for(int j=start; j<=end ; j++){
                if(i==start || i==end || j==start || j== end){
                    a[i][j]=n;
                }
            }
        }
        ++start;
        --end;
        --n;
    }
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
