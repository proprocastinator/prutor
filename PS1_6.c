// ## Problem Statement


// Mahesh likes to walk in the evening and keep record of how much he walks every day around the park (Walks along the perimeters of the park). There are three parks with shapes of square, rectangle and triangle. Mahesh has record of length of sides of the parks and the number of rounds he makes every day.

// Please help Mahesh find the distance that he has walked. The structure of information is as follows:

  

// Shape 1 indicates square

// Shape 2 indicates rectangle

// Shape 3 indicates triangle

// All the length parameters are in meters. You can read the information as input from the `stdin`. The number of inputs is dependent on the first entry of the input which determines the shape.

// Please write a `c code` that takes the information as input and prints the total distance that Mahesh has walked. All the inputs are positive integers.


// ## Input Format
// First line decides the shape of the park.
// Second line determines the number of rounds that Mahesh has made around the park.
// The third line contains the information of the side lengths of given shape.
//   In case of square shaped park, there is only one entry as all the sides equal.
//   In case of rectangle shaped park, there are two entries.
//   In case of triangle shaped park, there are three entries.


// shape
// rounds
// side1 side2 side3

// ## Sample Input:
// ```
// 2
// 10
// 3 4

// Output: 140
#include <stdio.h>

int main(void) {

	// Read the input in the Sample Input
	// use scanf(...), printf(...) calls for I/O.
 int shape, rounds, totDistance, side1=0, side2=0, side3=0;

 // TODO: Write your code here
 scanf("%d",&shape);
 scanf("%d",&rounds);
 
 if(shape==1){
     scanf("%d",&side1);
     totDistance=rounds*4*side1;
 }
 else if(shape==2){
 scanf("%d %d",&side1,&side2);
 totDistance=rounds*2*(side1+side2);
}
else
{scanf("%d %d %d",&side1,&side2,&side3);
totDistance=rounds*(side1+side2+side3);
}
printf("%d",totDistance);
return 0;
}
