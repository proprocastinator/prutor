You will be given the coordinates of the bottom-left and top-right corners of an axis-aligned rectangle
(i.e. a rectangle whose sides are parallel to the x and y axes). 


The input format is given below. The 4 quadrants on the plane are defined below for your convenience



Quadrant I    : x >= 0, y >= 0

Quadrant II   : x < 0, y >= 0

Quadrant III  : x < 0, y < 0

Quadrant IV  : x >= 0, y < 0


You will need out output the number of quadrants with which this rectangle intersects. 
The coordinates will be given as integer numbers.


Caution



Be careful about extra/missing lines and extra/missing spaces.

Be careful about using relational operators.

Note that ( xbotleft < xtopright ) and ( ybotleft < ytopright )



INPUT:


(xbotleft, ybotleft) (xtopright, ytopright)
OUTPUT:


N
(Where N is the number of quadrants with which this rectangle intersects)


EXAMPLE:
INPUT
(-1, -1) (2, 2)
OUTPUT:
4

#include <stdio.h>

int main() 
{
    int x1,y1,x2,y2;
    scanf("(%d, %d) ",&x1,&y1);
    scanf("(%d, %d)",&x2,&y2);
    if(x1*x2<0&&y1*y2<0)
    {
        printf("4");
    }
    else if((x1*x2>0&&y1*y2<0)||(x1*x2<0&&y1*y2>0))
	{
	printf("2");
	}
	else //if(x1*x2>0&&y1*y2>0)
	{
	    printf("1");
	}
	return 0;
}
