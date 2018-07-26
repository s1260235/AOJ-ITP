#include <stdio.h>
int main(){
  int un[101][101]={};
  int r,c;
  int i,j,k;

  scanf("%d %d",&r,&c);
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      scanf("%d",&un[i][j]);
      un[i][c]+=un[i][j];
      un[r][j]+=un[i][j];
    }
    un[r][c]+=un[i][j];
     }

  for(i=0;i<=r;i++){
    for(j=0;j<=c;j++){
      if(j==c) printf("%d",un[i][j]);
      else printf("%d ",un[i][j]);
    }
    printf ("\n");
  }
  
  return 0;
}
