// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Direct recursion:
    // If it calls the same function again
    // fun() {
    // ...some code
    //      fun();
    //  ...some code
    // }

    // Indirect recursion
    // If it calles another function
    // fun() {
    // ...some code
    //      fun2();
    // ...some code
    // }
    // fun2() {
    // ...some code
    //      fun();
    // ...some code
    // }

    // Tail recursion
    // If the recursive call is the last thing done by the function. There is no need to keep record of the previous state.
    // void fun(int n)
    // {
    //     if (n == 0)
    //         return;
    //     else
    //         cout << n;
    //     return fun(n - 1);
    // }
    // int main()
    // {
    //     fun(3);
    //     return 0;
    // }

    // Non-tail recursion
    // if the recursive call is not the last thing done by the function. After returning back, there is some something left to evaluate.
    // void fun(int n)
    // {
    //     if (n == 0)
    //         return;
    //     fun(n - 1);
    //     cout << n << " ";
    // }
    // int main()
    // {
    //     fun(3);
    //     return 0;
    // }
}