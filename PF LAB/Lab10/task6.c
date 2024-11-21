#include <stdio.h>
#include <math.h>

typedef struct
{
    float x, y;
} Point;

float distance(Point p1, Point p2)
{
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int is_within(Point p, Point top_left, Point bottom_right)
{
    return (p.x >= top_left.x && p.x <= bottom_right.x && p.y <= top_left.y && p.y >= bottom_right.y);
}

int main()
{
    Point p1 = {2, 3}, p2 = {5, 7}, top_left = {0, 8}, bottom_right = {6, 2};
    printf("Distance: %.2f\n", distance(p1, p2));
    printf("Point within rectangle: %s\n", is_within(p1, top_left, bottom_right) ? "Yes" : "No");
    return 0;
}
