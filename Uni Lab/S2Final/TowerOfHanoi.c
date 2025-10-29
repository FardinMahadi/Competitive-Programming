// In the name of Allah, the Most Gracious, the Most Merciful
// Tower of Hanoi
#include <stdio.h>

void towerOfHanoi(int n, char BEG, char END, char AUX) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", BEG, END);
        return;
    }
    
    towerOfHanoi(n - 1, BEG, AUX, END);
    printf("Move disk %d from %c to %c\n", n, BEG, END);
    towerOfHanoi(n - 1, AUX, END, BEG);
}

int main() {
    int n;
    
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    
    printf("\nSteps to solve Tower of Hanoi:\n");
    towerOfHanoi(n, 'A', 'C', 'B');
    
    printf("\nTotal moves: %d\n", (1 << n) - 1); 
    
    return 0;
}