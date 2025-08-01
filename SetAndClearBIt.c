#include <stdio.h>

// Function to set a bit at position 'pos'
unsigned int setBit(unsigned int num, int pos) {
    return num | (1U << pos);
}

// Function to clear a bit at position 'pos'
unsigned int clearBit(unsigned int num, int pos) {
    return num & ~(1U << pos);
}

int main() 
{
    unsigned int num, pos;
    int choice;

    printf("Enter a number: ");
    scanf("%u", &num);

    printf("Enter bit position (0-31): ");
    scanf("%u", &pos);

    printf("Choose operation:\n1. Set Bit\n2. Clear Bit\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        num = setBit(num, pos);
        printf("After setting bit %u: %u\n", pos, num);
    } else if (choice == 2) {
        num = clearBit(num, pos);
        printf("After clearing bit %u: %u\n", pos, num);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}