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

#include <stdio.h>
#include <stdlib.h>

int main(){
  int c;

  FILE *file1 = fopen("employee.txt", "r");
  FILE *file2 = fopen("newemployee.txt", "w");

  while ((c = fgetc(file1))!= EOF)
  {
    fputc(c, file2);
  }
  
}
