#include <stdio.h>

int main()
{
    int marks[1000], n, i = 0, sum = 0, num = 0, min,max;
    char gender;
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        scanf("%d", &marks[i]);
    }
    scanf("%c", &gender);

    if (gender == 'b')
    {
        for (i = 0; i <= n; i = i + 2)
        {
            min = marks[i];
            sum = sum + min;
        }
    }
    else
    {
        for (i = 1; i <= n; i = i + 2)
        {
            max = marks[i];

            num = num + max;
        }
    }

    {
        if (gender == 'b')
        {
            printf("%d\n", sum);
        }
        else
        {
            printf("%d", num);
        }
    }
    return 0;
}