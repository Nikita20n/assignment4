#include <stdio.h>

struct Employee {
    int empno;
    char empname[50];
    char empadd[100];
    int empage;
};

int main() {
    struct Employee employees[5];

    // Input employee information
    for (int i = 0; i < 5; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        
        printf("Employee Number: ");
        scanf("%d", &employees[i].empno);
        
        printf("Employee Name: ");
        scanf("%s", employees[i].empname);
        
        printf("Employee Address: ");
        scanf("%s", employees[i].empadd);
        
        printf("Employee Age: ");
        scanf("%d", &employees[i].empage);
        
        printf("\n");
    }

    // Display employee information
    printf("Employee Information:\n");
    for (int i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Employee Number: %d\n", employees[i].empno);
        printf("Employee Name: %s\n", employees[i].empname);
        printf("Employee Address: %s\n", employees[i].empadd);
        printf("Employee Age: %d\n", employees[i].empage);
        printf("\n");
    }

    return 0;
}

