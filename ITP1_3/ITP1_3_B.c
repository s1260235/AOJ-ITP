#include<stdio.h>
 int main(){
   int i;
   int x;
   for(i = 0 ;i < 10000 ;i++ ){
     scanf("%d",&x);
     if (x == 0) break;
     
     printf("Case %d: %d\n",i+1, x);
      }return 0;
 }
     
       
