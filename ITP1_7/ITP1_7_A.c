#include<stdio.h>
int main(){
   int m,f,r;
   int seiseki[50]={};
   int i=0;
   int count=0;
   

   while(1){
    scanf("%d %d %d",&m,&f,&r);
    
     if(m==-1 && f==-1 && r==-1) break;
     else if(m+f>=30 &&m+f<50 && r>=50) seiseki[i]=50;
     else  if(m==-1 || f==-1) seiseki[i]= 0;
     else seiseki[i]=m+f;
     i++;
     count +=1;
   }

   for(i=0;i<count;i++){
     if(seiseki[i]>=80) printf("A\n");
if(seiseki[i]<80 && seiseki[i]>=65) printf("B\n");
 if(seiseki[i]<65 && seiseki[i]>=50) printf("C\n");
 if(seiseki[i]<50 && seiseki[i]>=30) printf("D\n");
  if(seiseki[i]<30) printf("F\n");
   }

   return 0;
}
