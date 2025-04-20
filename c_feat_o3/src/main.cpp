#include <iostream>
#include <stdlib.h>
using namespace std;

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
    if (p == nullptr)
    {
        return nullptr;
    }
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
    cout << "Name: " << p->name << ", Age: " << p->age << endl;
}
int main()
{
    Person *p = constructor("John Doe", 30);
    p->display = display;
    p->display(p);
    free(p);

    Person *p2 = constructor("Jane Doe", 25);
    p2->getAge = getAge;
    cout << "Age: " << p2->getAge(p2) << endl;
    p2->display = display;
    p2->display(p2);
    free(p2);
    return 0;
}