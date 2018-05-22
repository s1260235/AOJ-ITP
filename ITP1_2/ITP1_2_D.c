#include<stdio.h>
int main(){
  int W,H,x,y,r;
  scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
  if(x >= r && x <= W - r && y >= r && y <= H - r ){
    printf("Yes\n");
  }else if(x >= r && x <= W - r && y >= r && y <= H - r  && x ==y){
    printf("Yes\n");
  } else if(x <= r){
    printf("No\n");
  }else if(x >= W -r){
    printf("No\n");
  }else if(y <= r){
    printf("No\n");
  }else if(y >= H - r){
    printf("No\n");
  }return 0;
}
 
      
