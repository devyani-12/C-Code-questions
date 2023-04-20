#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
     
     int power=1;   //power =2 ki powers ko equal krke
     
      int sum=0;
    

    while(n!=0){
         int rem;
         rem=n%10;

         n=n/10;
         if(rem==1){
            sum=sum+power;
         }
         power=power*2;
    }

    printf("%d",sum);

     



}