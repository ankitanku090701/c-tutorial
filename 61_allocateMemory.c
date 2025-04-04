// #include <stdio.h>

// int main()
// {
//     int students[20];
//     printf("%lu\n", sizeof(students)); // 80 bytes
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *students;
    int numStudents = 10;
    students = calloc(numStudents, sizeof(*students));
    printf("%lu\n", numStudents * sizeof(*students));
    return 0;
}