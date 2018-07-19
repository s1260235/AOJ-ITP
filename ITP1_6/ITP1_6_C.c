#include <stdio.h>
int main(){
  int a, n,i,j,k,x,y,z,w;
  int count[4][3][10];
  for(i=0;i<4;i++){
    for(j=0;j<3;j++){
      for(k=0;k<10;k++){
	count[i][j][k]=0;
      }
    }
  }


  scanf("%d",&n);
  for(i=0;i < n;i++){
    
    scanf ("%d %d %d %d",&x,&y,&z,&w);
    count[x-1][y-1][z-1] += w;
  }



  for(i=0;i<4;i++){
    for(j=0;j<3;j++){
      for(k=0;k<10;k++){
	printf(" %d",count[i][j][k]);
	 
	  }
      printf("\n"); }
    if(i!=3)printf("####################\n");
  }
  return 0;
}
