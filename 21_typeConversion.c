// #include <stdio.h>

// int main()
// {
//     int x = 5;
//     int y = 2;
//     int sum = 5 / 2;

//     float a = 9;
//     int b = 9.99;
//     float sum2 = 5 / 2;
//     float sum3 = (float)5 / 2;
//     float sum4 = (float)x / y;

//     printf("%d\n", sum);    // Outputs 2
//     printf("%f\n", sum2);   // Outputs 2.000000
//     printf("%f\n", sum3);   // Outputs 2.500000
//     printf("%f\n", sum4);   // Outputs 2.500000
//     printf("%.1f\n", sum4); // Outputs 2.500000
//     printf("%f\n", a);
//     printf("%d\n", b);
//     return 0;
// }

#include <stdio.h>

int main()
{
    // Set the maximum possible score in the game to 500
    int maxScore = 500;

    // The actual score of the user
    int userScore = 423;

    /* Calculate the percantage of the user's score in relation to the maximum available score.
    Convert userScore to float to make sure that the division is accurate */
    float percentage = (float)userScore / maxScore * 100.0;

    // Print the percentage
    printf("User's percentage is %.2f\n", percentage);
    return 0;
}