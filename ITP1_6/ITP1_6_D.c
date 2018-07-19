#include<stdio.h>
int main(){

  int x;
  int i,j;
  int n,m;
  int sum=0;
  int A[100][100]={};
  int B[100][100]={};
  int Sum[100][100]={};

  scanf("%d %d",&n,&m);

  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf("%d",&x);
      A[i][j]=x;
    }
                
  }

  for(i=0;i<m;i++){
    scanf("%d",&x);
    B[i][1]=x;
  }

  for(i=0;i<n;i++){
    sum=0;
    for(j=0;j<m;j++){
      sum+=A[i][j]*B[j][1];
    }
    Sum[i][1]=sum;
  }

  for(i=0;i<n;i++){
  printf("%d\n",Sum[i][1]);
  }
  


  return 0;
}
