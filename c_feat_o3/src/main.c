#include <stdlib.h>

typedef struct Person
{
    const char *name;
    int age;
    void (*display)(struct Person *);
    int (*getAge)(struct Person *);
} Person;
Person *constructor(const char *name, int age)
{
    Person *p = (Person *)malloc(sizeof(Person));
    
    p->name = name;
    p->age = age;
    return p;
}
int getAge(struct Person *p)
{
    return p->age;
}
void display(struct Person *p)
{
    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);
    printf("Size of Person struct: %zu bytes\n", sizeof(Person));}
int main()
{
    Person *p = constructor("John Doe", 30);
    p->display = display;
    p->display(p);
    free(p);

    Person *p2 = constructor("Jane Doe", 25);
    p2->getAge = getAge;
    printf("Age of %s: %d\n", p2->name, p2->getAge(p2));
    p2->display = display;
    p2->display(p2);
    free(p2);
    return 0;
}