#include<stdio.h>

int main(){
    int n,m;
    scanf("%d %d" ,&n,&m);

    int arr[n][m];
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int c;
    scanf("%d",&c);

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i+j==c-1){
                printf("%d",arr[i][j]);
            }
        }
    }
    
}