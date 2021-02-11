//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h> 
struct points  
{ 	
  float x,y;
}pointer1,pointer2;

float input() 
{
	float a;
	scanf("%f",&a);
	return a;
}
float compute_add(float a, float b, float c, float d) 
{
  return (sqrt(((a-c)*(a-c))+((b-d)*(b-d))));
}
int display(float sum) 
{
	printf("The distance between the points is : %.2f\n",sum);
  return 0;
}
int main() 
{
  float sum;
  printf("Enter (x1,y1):");
  pointer1.x = input();
  pointer1.y = input();
  printf("Enter (x2,y2):");
  pointer2.x = input();
  pointer2.y = input();
  sum = compute_add(pointer1.x, pointer1.y, pointer2.x, pointer2.y);
  display(sum);
  return 0;
}
