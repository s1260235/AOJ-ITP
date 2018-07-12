#include <stdio.h>
int main(){
  int Num[100];
  int a,b=0,n,i,j;
  scanf("%d",&a);
  
  for(i = 0;i < a;i++){
    scanf("%d",&n);
     Num[i] = n;
    b++;
  }
  for(j = a-1;j >= 0;j--){
    
    if (j != 0) printf("%d ",Num[j]);
    else printf("%d",Num[j]);
    
  }
  printf("\n");

  
  return 0;
}
