#include<stdio.h>
int main(){
  int data[10000][2]={};
  int i=0,j=0,k=0,l=0;
  int x,n;
  int count=0;
  int counts=0;

  while(1){
    scanf("%d %d",&n,&x);
    if(n==0 && x==0) break;
    data[i][0]=n;
    data[i][1]=x;
    i++;
    count +=1;
  }

  for(l=0;l<count;l++){
    counts=0;
  
    for(i=1;i<=data[l][0];i++){
      for(j=1;j<=data[l][0];j++){
	for(k=1;k<=data[l][0];k++){
	 
	  if((i+j+k)==data[l][1] && i!=j && j!=k && k!=i) counts+=1;
	}
      }
    }
    printf("%d\n",counts / 6);
  }


  return 0;
}
