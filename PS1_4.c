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