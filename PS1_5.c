// Problem Statement
// Some students told Mr C that he is getting a bit overweight so he decided to go on a diet. To do so, he wants to find the total surface area and volume of the glass he uses to measure his food. His glass is a cylinder with radius r and height h. Help him find our these two quantities.

// Your code should take 2 integers as input, the first is radius, the second is height, and then calculate and output the total surface area and volume of the cylinder in two separate lines. 

// Hint:
// Surface area of the glass = ?r(r+2h), Volume of the glass = ?r^2h

// Caution

// For this question, you MUST take the value of pi as 3.
// Do not use any datatype other than int.
// Do not use any library other than stdio.h
// ----------------------------------------------------------------------

// INPUT:
// radius height

// OUTPUT:
// area
// volume

// EXAMPLE:
// INPUT
// 1 2
// OUTPUT:
// 15
#include<stdio.h>
int main()
{
    int r,h;
    scanf("%d %d",&r,&h);
    int S=3*r*(r+2*h);
     printf("%d\n",S);
    int V=3*r*r*h;
    printf("%d",V);
  
    return 0;
}
