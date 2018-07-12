#include <stdio.h>
int main(){
  int a,i,j,x,N[4][13]={};
  char ch;

  scanf("%d\n",&a);
  for(i = 0;i < a;i++){
    scanf("%c %d\n",&ch,&x);

    if(ch == 'S') N[0][x-1] = x;
    if(ch == 'H') N[1][x-1] = x;
    if(ch == 'C') N[2][x-1] = x;
    if(ch == 'D') N[3][x-1] = x;
    
  }
  for(j = 0;j < 13 ;j++){
    if (N[0][j] == 0) printf("S %d\n",j+1);
  }
  for(j = 0;j < 13 ;j++){
    if (N[1][j] == 0) printf("H %d\n",j+1);
  }
  for(j = 0;j < 13 ;j++){
    if (N[2][j] == 0) printf("C %d\n",j+1);
  }
  for(j = 0;j < 13 ;j++){
    if (N[3][j] == 0) printf("D %d\n",j+1);
  }
  return 0;
}
