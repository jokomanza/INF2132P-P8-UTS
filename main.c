#include <stdio.h>

int main() {
    printf("===================================\n");
    printf("NIM: 231110062\n");
    printf("Name: Joko Supriyanto\n");

    int group;
    float salary;

    printf("===================================\n");
    do {
        printf("Please input the salary: ");
        scanf("%f", &salary);

        if (salary <= 0) {
            printf("The salary cannot be 0 or negative, please try again\n");
        } else {
            printf("===================================\n");
            do {
                printf("Please input the group: ");
                scanf("%d", &group);

                switch (group) {
                    case 1:
                        salary = salary + ((float) salary * 5 / 100);

                        break;
                    case 2:
                        salary = salary + ((float) salary * 10 / 100);

                        break;
                    case 3:
                        salary = salary + ((float) salary * 15 / 100);

                        break;
                    default:
                        printf("Inputted group (%d) is not valid, please try again\n", group);
                }
            } while (group != 1 && group != 2 && group != 3);
        }
    } while (salary <= 0);

    printf("===================================\n");
    printf("The total salary is %.2f", salary);

    return 0;
}

