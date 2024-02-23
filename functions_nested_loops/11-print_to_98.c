#include <stdio.h>

void print_to_98(int n) {
    // Check if n is greater than or equal to 98
    if (n >= 98) {
        // Print numbers from n to 98 decreasingly
        for (int i = n; i >= 98; i--) {
            printf("%d", i);
            if (i != 98) {
                printf(", ");
            }
        }
    } else {
        // Print numbers from n to 98 increasingly
        for (int i = n; i <= 98; i++) {
            printf("%d", i);
            if (i != 98) {
                printf(", ");
            }
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    print_to_98(n);
    return 0;
}
