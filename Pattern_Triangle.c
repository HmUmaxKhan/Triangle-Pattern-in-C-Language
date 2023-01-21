#include <stdio.h> // TRIANGLE PATTERN NATURAL NUMBER
int main()
{

    // Initialize the variables
    int n, i, j, k, s;

    // Enter the Natural Number
    printf("Enter a natural number.\n");

    // Taking input from the user
    scanf("%d", &n);

    // Using nested for loops
    for (int i = 0; i < n; ++i)
    {
        k = 1;
        for (s = 0; s < n - i; ++s)
        {
            printf(" ");
        }
        for (j = 0; j <= i; ++j)
        {
            printf("%d", k);
            ++k;
        }
        printf("\n");
    }
    return 0;
}