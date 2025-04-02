// #include <stdio.h>

// int main()
// {
//     int countdown = 3;

//     while (countdown > 0)
//     {
//         printf("%d\n", countdown);
//         countdown--;
//     }

//     printf("Happy New Year!!\n");
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int i = 0;

//     while (i <= 10)
//     {
//         printf("%d\n", i);
//         i += 2;
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     // A variable with some specific numbers
//     int numbers = 12345;

//     // A variable to store the reversed number
//     int revNumbers = 0;

//     // Reverse and reorder the numbers
//     while (numbers)
//     {
//         // Get the last number of 'numbers' and add it to 'revNumber'
//         revNumbers = revNumbers * 10 + numbers % 10;
//         // Remove the last number of 'numbers'
//         numbers /= 10;
//     }
//     printf("%d\n", revNumbers);
//     return 0;
// }

#include <stdio.h>

int main()
{
    int dice = 1;

    while (dice <= 6)
    {
        if (dice < 6)
        {
            printf("No Yatzy\n");
        }
        else
        {
            printf("Yatzy!\n");
        }
        dice = dice + 1;
    }
    return 0;
}