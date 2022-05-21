// Given 3 numbers a,b,c determine if they are "Pythagorean triples" i.e. the sum of squares of any two of them is equal to the square of the third.


// Input:
// Three numbers a b c separated by spaces.
// a, b, c can be any number from 0 to 300 (0 <= a, b, c <= 300)

// Output:
// "Yes" if a,b,c are Pythagorean triples, else "No".
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
