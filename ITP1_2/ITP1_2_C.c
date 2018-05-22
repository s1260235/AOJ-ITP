#include<stdio.h>
int main(){
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if (a < b && b < c){
    printf("%d %d %d\n",a,b,c);
  }else if(a > b && b > c){
    printf("%d %d %d\n",c,b,a);
  }else if(a < b && b > c){
    printf("%d %d %d\n",a,c,b);
  }else if(a < b && a > c){
    printf("%d %d %d\n",c,a,b);
  }else if(b < a && a < c){
    printf("%d %d %dn",b,a,c);
  }else if(b < a && a > c){
    printf("%d %d %d\n",b,c,a);
  }return 0;
}
	  
