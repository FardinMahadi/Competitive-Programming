// In the name of Allah, the Most Gracious, the Most Merciful
// Stack Operation
#include <stdio.h>

void stack();
void push();
void pop();

int n, top;
char a[20], s[20];

int main() {
    

    return 0;
}   

void stack() {
    int i; 
    printf("\n");

    for (i = top; i > 0; i--) 
        printf("\n%c", s[i]);

    printf("\n");
}

void push() {
    char item;
    printf("\nWhich item do you want to push: ");
    item = getchar();
    
}