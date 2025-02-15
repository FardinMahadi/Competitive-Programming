#include <stdio.h>

typedef struct Person
{
    float salary;
    int age;
} person;

int main()
{
    person person1;
    person1.age = 25;
    person1.salary = 2342.42;

    return 0;
}