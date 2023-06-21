#include <stdio.h>

struct Point {
    int x;
    int y;
};

void swapPoints(struct Point* p1, struct Point* p2) {
    int temp;

    temp = p1->x;
    p1->x = p2->x;
    p2->x = temp;

    temp = p1->y;
    p1->y = p2->y;
    p2->y = temp;
}

int main() {
    struct Point point1, point2;

    point1.x = 10;
    point1.y = 20;

    point2.x = 30;
    point2.y = 40;

    printf("Before swapping:\n");
    printf("point1: x = %d, y = %d\n", point1.x, point1.y);
    printf("point2: x = %d, y = %d\n", point2.x, point2.y);

    swapPoints(&point1, &point2);

    printf("After swapping:\n");
    printf("point1: x = %d, y = %d\n", point1.x, point1.y);
    printf("point2: x = %d, y = %d\n", point2.x, point2.y);

    return 0;
}