// #include <stdio.h>

// int main()
// {
//     int doorCode = 1337;

//     if (doorCode == 1337)
//     {
//         printf("Correct code.\nThe door is now open.\n");
//     }
//     else
//     {
//         printf("Wrong code.\nThe door remains closed.\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int myNum = 10; // Is this a positive or negative number?

//     if (myNum > 0)
//     {
//         printf("The value is a positive number.\n");
//     }
//     else if (myNum < 0)
//     {
//         printf("The value is a negative number.\n");
//     }
//     else
//     {
//         printf("The value is 0.\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int myAge = 25;
//     int votingAge = 18;

//     if (myAge >= votingAge)
//     {
//         printf("Old enough to vote!\n");
//     }
//     else
//     {
//         printf("Not old enough to vote.\n");
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int myNum = 5;

    if (myNum % 2 == 0)
    {
        printf("%d is even.\n", myNum);
    }
    else
    {
        printf("%d is odd.\n", myNum);
    }
}