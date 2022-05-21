#include <stdio.h>

int main() {

  // write your code here
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
//   0<=a&a<=300;
//   0<=b&b<=300;
//   0<=c&c<=300;
  
  if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
  {
      printf("Yes");
  }
  else
  {
      printf("No");
  }  
  return 0;
}