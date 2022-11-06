#include <stdio.h>

int main()
{
    int num, large, small;
    scanf ("%d", &num);
    large = small = num;

    for (int i = 0; i < 3; i++)
    {
        scanf ("%d", &num);
        if (large < num)
            large = num;
        else if (small > num)
            small = num;
    }

    printf ("Largest = %d\n", large);
    printf ("Smallest = %d\n", small);
    return 0;
}
