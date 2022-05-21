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