// #include <stdio.h>

// struct employee {
//     char empName[20];
//     int age;
//     float salary;
// };

// int main() {
//     struct employee emp[3];
//     FILE *file = fopen("employee.txt", "w");

//     for (int i = 0; i < 3; i++) {
//         printf("Employee %d:\n", i + 1);
//         printf("Name: ");
//         scanf("%s", emp[i].empName);
//         printf("Age: ");
//         scanf("%d", &emp[i].age);
//         printf("Salary: ");
//         scanf("%f", &emp[i].salary);

//         fprintf(file, "%s %d %.2f\n", emp[i].empName, emp[i].age, emp[i].salary);
//     }
//     fclose(file);
// }


// #include <stdio.h>

// int main() {
//     char empName[50];
//     int age;
//     float salary;
//     FILE *file = fopen("employee.txt", "r");

//     printf("Employee details:\n");
//     while (fscanf(file, "%s %d %f", empName, &age, &salary) != EOF) {
//         printf("Name: %s, Age: %d, Salary: %.2f\n", empName, age, salary);
//     }

//     fclose(file);
// }


// #include <stdio.h>

// struct employee {
//     char empName[50];
//     int age;
//     float salary;
// };

// int main() {
//     struct employee emp;
//     FILE *file = fopen("employee.txt", "a");

//     printf("Enter details of the new employee:\n");
//     printf("Name: ");
//     scanf("%s", emp.empName);
//     printf("Age: ");
//     scanf("%d", &emp.age);
//     printf("Salary: ");
//     scanf("%f", &emp.salary);

//     fprintf(file, "%s %d %.2f\n", emp.empName, emp.age, emp.salary);

//     fclose(file);
// }

// #include <stdio.h>
// #include <string.h>

// int main() {
//     int num;
//     char choice[5];
//     FILE *oddFile = fopen("odd.txt", "w");
//     FILE *evenFile = fopen("even.txt", "w");

//     do {
//         printf("Enter an integer: ");
//         scanf("%d", &num);
//         if (num % 2 == 0) {
//             fprintf(evenFile, "%d\n", num);
//         } else {
//             fprintf(oddFile, "%d\n", num);
//         }

//         printf("Do you want to continue? (yes/no): ");
//         scanf("%s", choice);
//     } while (strcmp(choice, "no") != 0);

//     fclose(oddFile);
//     fclose(evenFile);
// }

// #include <stdio.h>

// int main() {
//     char line[100];
//     FILE *oddFile = fopen("odd.txt", "r");
//     FILE *evenFile = fopen("even.txt", "r");
//     FILE *numbersFile = fopen("numbers.txt", "w");

//     while (fgets(line, sizeof(line), oddFile)) {
//         fputs(line, numbersFile);
//     }

//     while (fgets(line, sizeof(line), evenFile)) {
//         fputs(line, numbersFile);
//     }

//     fclose(oddFile);
//     fclose(evenFile);
//     fclose(numbersFile);
//     printf("Content copied to numbers.txt successfully.\n");
// }

// #include <stdio.h>
// #include <string.h>

// int main() {
//     int num, sum = 0;
//     char choice[5];
//     FILE *sumFile = fopen("sum.txt", "a");

//     do {
//         printf("Enter an integer: ");
//         scanf("%d", &num);
//         sum += num;

//         printf("Do you want to continue? (yes/no): ");
//         scanf("%s", choice);
//     } while (strcmp(choice, "no") != 0);

//     fprintf(sumFile, "Sum: %d\n", sum);

//     fclose(sumFile);
// }
