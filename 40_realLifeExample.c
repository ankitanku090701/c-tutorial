// #include <stdio.h>

// int main()
// {
//     // An array storing different ages
//     int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

//     float avg, sum = 0;
//     int i;

//     // Get the length of the array
//     int length = sizeof(ages) / sizeof(ages[0]);

//     // Loop through the elements of the array
//     for (i = 0; i < length; i++)
//     {
//         sum += ages[i];
//     }

//     // Calculate the average by dividing the sum by the length
//     avg = sum / length;

//     // Print the average
//     printf("The average age is: %.2f\n", avg);
//     return 0;
// }

#include <stdio.h>

int main()
{
    // An array storing different ages
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

    int i;

    // Get the length of the array
    int length = sizeof(ages) / sizeof(ages[0]);

    // Create a variable and assign the first array element of ages to it
    int lowestAge = ages[0];

    // Loop through the elements of the ages array to find the lowest age
    for (i = 0; i < length; i++)
    {
        if (lowestAge > ages[i])
        {
            lowestAge = ages[i];
        }
    }

    printf("%d\n", lowestAge);
    return 0;
}