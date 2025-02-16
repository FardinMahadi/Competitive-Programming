// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

// Write a program to print numbers from 1 to 10 in such way that when number is odd, add 1 and when number is even, subtract 1.

void odd();
void even();
int n = 1;

int main()
{
    odd();
}

void odd()
{
    if (n <= 10)
    {
        cout << n + 1 << " ";
        n++;
        even();
    }
    return;
}

void even()
{
    if (n <= 10)
    {
        cout << n - 1 << " ";
        n++;
        odd();
    }
}