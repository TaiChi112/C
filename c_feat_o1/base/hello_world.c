#include <stdio.h>

struct Person
{
    int id;
    char name[50];
};

typedef struct Point
{
    int x, y;
    void (*move)(struct Point *, int, int);
    void (*print)(struct Point *);
} Point;

void move_point(struct Point *p, int dx, int dy)
{
    p->x += dx;
    p->y += dy;
}
void print_point(struct Point *p)
{
    printf("Point(%d, %d)\n", p->x, p->y);
}

int main()
{
    Point p1 = {0, 0, move_point, print_point};
    Point p2 = {10, 20, move_point, print_point};

    p1.move(&p1, 5, 5);
    p2.move(&p2, -5, -5);

    p1.print(&p1);
    p2.print(&p2);
    return 0;
}