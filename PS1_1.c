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