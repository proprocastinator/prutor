// You are given 3 integer values: a, b & c

// - You need to verify if these 3 values can form a triangle and if yes also print the type.
// - Assume that inputs are taken in increasing order i.e., "a < b < c "

// case1: if a, b, c can't form a triangle 
// output: "Can't form a triangle"
// case2: if a,b,c from equilateral triangle
// output: "Forms equi angled triangle" 
// case3: if a,b,c forms a acute-angled triangle
// output :  "Forms acute angled triangle" 
// case4: if a,b,c forms a right angle triangle
// output : "Forms right angled triangle"
// case5: if a,b,c forms an obtuse angle triangle
// output : "Forms obtuse angled triangle"
// print all the outputs without quotes
// hint: Pythagorean Theorem

// Note: you are not suppose to use any math library function

// Examples:

// Input: 2,6,10
// Output: Can't form a Triangle
#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%d, %d, %d", &a, &b, &c);

    /*write your code */
    if(a+b<c||a-b>c)
    printf("can't form a triangle");
    else if (a==b&&b==c)
    printf("Forms equi angled triangle");
    else if (a*a+b*b>c*c)
    printf("Forms acute angled triangle");
    else if(a*a+b*b==c*c)
    printf("Forms right angled triangle");
    else if( a*a+b*b<c*c)
    printf("Forms obtuse angled triangle");
    
    return 0;
}
