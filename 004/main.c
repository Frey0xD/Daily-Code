#include <stdio.h>

int findRange(int a, int b, int c) {
    int max = a;
    int min = a;

    // Find the maximum and minimum values among the three variables
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    if (b < min)
        min = b;
    if (c < min)
        min = c;

    // Calculate and return the range
    return max - min;
}

int main() {
    int var1, var2, var3;

    printf("Enter three variables: ");
    scanf("%d %d %d", &var1, &var2, &var3);

    int range = findRange(var1, var2, var3);

    printf("The range of the variables is: %d\n", range);

    return 0;
}
