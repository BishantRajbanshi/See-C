// #include <stdio.h>
// #include <stdlib.h>

// struct Employee {
//     char empName[50];
//     int age;
//     float salary;
// };

// int main() {
//     struct Employee employees[5];
//     FILE *file = fopen("employee.txt", "w");

//     for (int i = 0; i < 2; i++) {
//         printf("Enter details for employee %d:\n", i + 1);
//         printf("Name: ");
//         scanf(" %s", employees[i].empName);
//         printf("Age: ");
//         scanf("%d", &employees[i].age);
//         printf("Salary: ");
//         scanf("%f", &employees[i].salary);

//         fprintf(file, "Employee %d:\n", i + 1);
//         fprintf(file, "Name: %s\n", employees[i].empName);
//         fprintf(file, "Age: %d\n", employees[i].age);
//         fprintf(file, "Salary: %.2f\n\n", employees[i].salary);
//     }
//     fclose(file); 
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//   int c;

//   FILE *file1 = fopen("employee.txt", "r");
//   FILE *file2 = fopen("newemployee.txt", "w");

//   while ((c = fgetc(file1))!= EOF)
//   {
//     fputc(c, file2);
//   }
  
// }


// #include <stdio.h>
// #include <stdlib.h>

// struct Employee {
//     char name[50];
//     float salary;
// };

// int main(){
//     struct Employee emp;
//     FILE *file = fopen("newemployee.txt", "a");

//     printf("Enter Employee Name: ");
//     scanf("%s", &emp.name);
//     printf("Enter Employee Salary: ");
//     scanf("%f", &emp.salary);

//     fprintf(file, "%s, %.2f\n", emp.name, emp.salary);
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main() {
//     int number;
//     char choice[5];

//     FILE *oddFile = fopen("odd.txt", "w");
//     FILE *evenFile = fopen("even.txt", "w");

//     while (1) {
//         printf("Enter an integer: ");
//         scanf("%d", &number);

//         if (number % 2 == 0) {
//             fprintf(evenFile, "%d\n", number);
//         } else {
//             fprintf(oddFile, "%d\n", number);
//         }

//         printf("Do you want to enter another number? (yes/no): ");
//         scanf("%s", choice);

//         if (strcmp(choice, "no") == 0) {
//             break;
//         }
//     }
//     printf("DOne\n");
//     fclose(oddFile);
//     fclose(evenFile);
// }
