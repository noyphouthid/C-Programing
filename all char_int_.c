#include <stdio.h>
char name[30];
char surname[50];
char gender[50];
char address[50];
int age;
int tell;

//create by Noy
//hditxs 25a

void main()
{
    system("color f0");
    while (1)
    {
        printf("enter you name:");
        scanf("%s", &name);
        printf("Enter your surname:");
        scanf("%s", &surname);
        printf("Enter your age  :");
        scanf("%d", &age);
        printf("Male or fremale:");
        scanf("%s", &gender);
        printf("Enter your address:");
        scanf("%s", &address);
        printf("Enter your tell:");
        scanf("%d", &tell);

        printf("===============================================\n");
        printf(" name               = %s %s\n", name, surname);
        printf(" age                = %d\n", age);
        printf(" Male or Fremale    = %s\n", gender);
        printf(" address            = %s\n", address);
        printf(" tell               = %d\n", tell);
        printf("===============================================\n");
    }
}
