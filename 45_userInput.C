// #include <stdio.h>

// int main () {
//     int a;
//     char b;
//     char name[50];
//     printf("Type a no and Char : ");
//     scanf("%d %c", &a, &b);
//     printf("Your no. and char is : %d %c\n", a, b);
//     printf("Now, Type your name : \n");
//     scanf("%s", name);
//     printf("Your name is : %s\n", name);
//     return 0;
// }

#include <stdio.h>

int main () {
    char a[50];
    printf("Type your name: \n");
    fgets(a, sizeof(a), stdin);
    printf("Your name is : %s", a);
    return 0;
}