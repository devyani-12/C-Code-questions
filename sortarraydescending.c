#include<stdio.h>

int main(){
   
    int arr[1000];
    int arr2[1000];
    int n;
   
    int swap(int *x,int *y){
        int temp;
        temp=*x;
        *x=*y;
        *y=temp;

        
    }
    scanf("%d",&n);
    for(int i = 0; i < n; i++)  
    {  
       
        scanf("%d", &arr[i]);  
    }
   
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                swap(&arr[i],&arr[j]);
            }
        }
    }
   
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}
