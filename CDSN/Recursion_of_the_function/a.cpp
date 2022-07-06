#include <stdio.h>

int fibonacci(int i)
{
    if (i == 0)
        return 0;
    if (i == 1)
        return 1;
    return fibonacci(i - 1) + fibonacci(i + 1);
}

int main(int argc, char** argv)
{
    int i = 0;
    int n = 0;

    printf("Éµ±Æ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        printf("%d ", fibonacci(i));

    return 0;
}