// ## Problem Statement. 

// Astorga finds geometry very interesting and has a special love for **rectangles**. 
// He has solved an interesting problem where he is able to find if a 
// point lies inside or outside a given plannar shape.  Assuming that he is working with plannar and convex shapes, moreover with *rectangles*, can you help him **verify his solution** ? A point is said to be *inside* if it 
// lies inside the rectangular region or on the perimeter of the rectangle.

// - You may assume that **all rectangles are oriented parallel to the x-axis** 
// and are described by 2 points (lower left and upper right point coordinates). 
// Eg. `(5, 20), (100, 100)`. 
// - You are given **2 points (lower left and upper right point coordinates)** for the rectangle that needs
// to read as inputs from the `stdin`. **You must check if a rectangle can be formed
// using the coordinate values given as input for the rectangle.**
// - You are also given **a test point information (x, y coordinates)** to be read from the `stdin`. 
// Your program outputs `1` if the point lies inside, `0` if the point lies outside the *valid* rectangle
// region and `-1` for invalid rectangle coordinate inputs.

// ### Can you figure out if the point lies inside or outside the given valid plannar rectangle?

// ## Sample Input 

// Description
// 1. First line for **lower left** coordinates.
// 2. Second line for **upper right** coordinates.
// 3. Third line for **test point's (x,y)** coordinates.
// **Assume all inputs to be integer (`int`) type.**

// ```
// 5 20
// 100 100
// 30 89

// Output : 1
#include <stdio.h>

int main(void) {

	int x1,y1;
	scanf("%d %d",&x1,&y1);
	int x2,y2;
	scanf("%d %d",&x2,&y2);
	int a,b;
	scanf("%d %d",&a,&b);
	 if((x2<=x1)||(y2<=y1))
	  printf("%d",-1);
	else if((a>=x1&&a<=x2)&&(b>=y1&&b<=y2))
	   printf("%d",1);
	else 
	  printf("%d\n",0);
	 
	  
	// Read the input in the Sample Input
// Print the 1, 0, -1 based on condtions
   
    
	// defined in the problem statement.
	// use scanf(...), printf(...) calls for I/O.
    
	return 0;
}
