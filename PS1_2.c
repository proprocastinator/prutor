// Lokesh is planning to have a proper diet from today onwards. He started measuring the food intake in terms of carbohydrates, fat and protein daily. Then he calculates the calorie count per day using a simple formula:

// caloriecount = (4* carbohydrates)+(9 * fat)+(4 * protein)

// Now he uses the calculated caloriecount to infer the nutritious diet as per the following standards:
// - caloriecount value less than or equals 1500 -> "Less Calorie Intake" 
// - caloriecount value greater than 1500 and less than 3000  -> "Ideal Calorie Intake"
// - caloriecount value greater than or equals 3000  -> "More Calorie Intake"

// Input Format:
// ## Input Format:
// Single Line containing three integer numbers separated by spaces, e.g.,:
// x y z
// where x is carbohydrate intake per day, y is fat intake per day, and z is protein intake per day.

// Output Format:
// Single line specifying the inference obtained from the caloriecount:

// Example:
// Input:
// 210 11 22
// Output:
// Less Calorie Intake
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
