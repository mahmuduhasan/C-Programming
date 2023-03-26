#include<stdio.h>
#include<math.h>
float circle_area(float radius);
float triangle_area(float height, float base);
float rectangle_area(float width, float length);
int main() {
  int square_side = 5;
  printf("Area of square is : %.2f \n", pow(square_side, 2));
  printf("Area of circle is :%.2f \n", circle_area(2));
  printf("Area of triangle is : %.2f\n", triangle_area(5, 8));
  printf("Area of rectangle is : %.2f", rectangle_area(3,2));
  return 0;
}

float circle_area(float radius){
  float pi = 3.1416;
  return pi * (radius * radius);
}

float triangle_area(float height,float base){
  float area = (height * base) / 2;
  return area;
}

float rectangle_area(float width, float length){
  float area = width * length;
  return area;
}