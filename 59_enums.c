#include <stdio.h>

enum Level
{
    LOW,
    MEDIUM,
    HIGH
};

enum Level2
{
    LO = 25,
    MEDIU = 50,
    HIG = 75
};

enum Level3
{
    L = 5,
    MEDI,
    HI
};

int main()
{
    enum Level a = MEDIUM;
    enum Level2 b = HIG;
    enum Level3 c = L;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    switch (c)
    {
    case 5:
        printf("Low Level\n");
        break;
    case 6:
        printf("Medium Level\n");
        break;
    case 7:
        printf("High Level\n");
        break;
    default:
        break;
    }
    return 0;
}