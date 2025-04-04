// #include <stdio.h>
// #include <string.h>

// struct details
// {
//     int class;
//     char section;
//     char z[50];
// };

// int main()
// {
//     struct details s1;
//     struct details s2;
//     struct details s3 = {5, 'B', "Hello World"};
//     struct details s4;

//     s4 = s3;
//     s1.class = 12;
//     s2.class = 10;
//     s1.section = 'A';
//     s2.section = 'C';
//     s4.class = 7;
//     strcpy(s1.z, "Hello, Ankit");

//     printf("Class of S1: %d\n", s1.class);
//     printf("Class of S1: %c\n", s1.section);

//     printf("Class of S2: %d\n", s2.class);
//     printf("Class of S2: %c\n", s2.section);

//     printf("String is: %s\n", s1.z);

//     printf("%d, %c, %s\n", s3.class, s3.section, s3.z);
//     printf("%d, %c, %s\n", s4.class, s4.section, s4.z);
//     return 0;
// }

#include <stdio.h>
#include <string.h>

struct Car
{
    char brand[50];
    char model[50];
    int year;
};

int main()
{
    struct Car car1 = {"BMW", "X5", 1999};
    struct Car car2 = {"Ford", "Mustang", 1969};
    struct Car car3 = {"Toyota", "Corolla", 2011};

    printf("%s %s %d\n", car1.brand, car1.model, car1.year);
    printf("%s %s %d\n", car2.brand, car2.model, car2.year);
    printf("%s %s %d\n", car3.brand, car3.model, car3.year);
    return 0;
}