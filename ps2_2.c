//You are given an integer which can be represented as a multiplication of two integers. Please print all the distinct pairs of integers that represent the given integer.
//Note that pairs (a, b) and (b, a) with a!=b are distinct pairs.
//Please print all the pairs in the increasing order of the first integer of the pairs.
//Input Format
//K

//K is the input integer and K!=0.
//Output Format
//a1 b1
//a2 b2
.
.
.
//an bn
//Each line is the pair of integers such that their multiplication is equal to K, Ex. a1*b1==K.
//Example
//Input:
//15
//Output:
//-15 -1
//5 -3
//-3 -5
//-1 -15
//1 15
//3 5
//5 3
//15 1
  
  
#include <stdio.h>

int main()
{
 int a,i;
 scanf("%d",&a);
 if(a>0){
 for(i=-a;i<=a;i++)
 {
     if(i!=0&&a%i==0){
     printf("%d %d\n",i,a/i);}
 }
 }
 else
 {
     for(i=a;i<=-a;i++)
 {
     if(i!=0&&a%i==0){
     printf("%d %d\n",i,a/i);}
 } 
 }
  return 0;
}
