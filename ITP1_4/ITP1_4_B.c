#include<stdio.h>

int main(){
  double are,circ,r;
  scanf("%lf",&r);
  
  are = 2 * r * 3.141592653589;
circ = 3.141592653589 * r * r;
printf("%.6lf %.6lf\n",circ,are);
  return 0;
}
    
