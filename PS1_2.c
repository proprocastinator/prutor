#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int caloriecount=4*x+9*y+4*z;
    
    if(caloriecount<=1500){
    printf("Less Calorie Intake");}
    else if(caloriecount >1500&&caloriecount<3000){
    printf("Ideal Calorie Intake");}
    else if(caloriecount >=3000){
    printf("More Calorie Intake");}
    
	return 0;
}