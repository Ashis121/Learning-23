#include <stdio.h>
#include <math.h>

int main() {
  double x1, y1;
  printf("Enter the x-coordinate of the first point: ");
  scanf("%lf", &x1);
  printf("Enter the y-coordinate of the first point: ");
  scanf("%lf", &y1);

  double x2, y2;
  printf("Enter the x-coordinate of the second point: ");
  scanf("%lf", &x2);
  printf("Enter the y-coordinate of the second point: ");
  scanf("%lf", &y2);

  double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

  printf("The distance between the two points is %.2f.\n", distance);

  return 0;
}
