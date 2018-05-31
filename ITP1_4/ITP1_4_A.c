#include<stdio.h>
int main(){
  double f3;
  int a,b,f1,f2;
  scanf("%d %d" ,&a , &b);
  f1 = a / b;
  f2 = a % b;
  f3 =(double) a / b;
  printf("%d %d %.5f\n",f1,f2,f3);
  return 0;
}

    
