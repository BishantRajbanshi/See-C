// #include <stdio.h>

// struct Student {
//     char name[50];
//     int rollNumber;
//     float marks;
// };

// void readStudents(struct Student students[]) {
//     for (int i = 0; i < 10; i++) {
//         printf("Enter name, roll number, and marks of student %d:\n", i + 1);
//         scanf("%s %d %f", students[i].name, &students[i].rollNumber, &students[i].marks);
//     }
// }

// void displayStudents(struct Student students[]) {
//     printf("Student Records:\n");
//     for (int i = 0; i < 10; i++) {
//         printf("Name: %s, Roll No: %d, Marks: %.2f\n", students[i].name, students[i].rollNumber, students[i].marks);
//     }
// }

// int main() {
//     struct Student students[10];
//     readStudents(students);
//     displayStudents(students);
// }


// #include <stdio.h>
// #include <string.h>

// struct Employee {
//     char name[50];
//     char post[50];
//     float salary;
// };

// int filterHighSalary(struct Employee emp[], struct Employee highSalaryEmp[]) {
//     int count = 0;
//     for (int i = 0; i < 10; i++) {
//         if (emp[i].salary > 10000) {
//             highSalaryEmp[count++] = emp[i];
//         }
//     }
//     return count; 
// }

// int main() {
//     struct Employee employees[10];
//     struct Employee highSalaryEmployees[10];
//     int highSalaryCount;

//     printf("Enter details of 10 employees (Name, Post, Salary):\n");
//     for (int i = 0; i < 10; i++) {
//         printf("Employee %d:\n", i + 1);
//         printf("Name: ");
//         scanf("%s", employees[i].name);
//         printf("Post: ");
//         scanf("%s", employees[i].post);
//         printf("Salary: ");
//         scanf("%f", &employees[i].salary);
//     }

//     highSalaryCount = filterHighSalary(employees, highSalaryEmployees);

//     printf("\nEmployees with salary greater than 10,000:\n");
//     for (int i = 0; i < highSalaryCount; i++) {
//         printf("Name: %s, Post: %s, Salary: %.2f\n",
//                highSalaryEmployees[i].name,
//                highSalaryEmployees[i].post,
//                highSalaryEmployees[i].salary);
//     }
// }


// #include <stdio.h>

// void display(int limits[]) {
//     int lower = limits[0];
//     int upper = limits[1];
    
//     printf("Numbers between %d and %d are:\n", lower, upper);
//     for (int i = lower; i <= upper; i++) {
//         printf("%d ", i);
//     }
//     printf("\n");
// }

// int main() {
//     int limits[2]; 

//     printf("Enter the lower limit: ");
//     scanf("%d", &limits[0]);
//     printf("Enter the upper limit: ");
//     scanf("%d", &limits[1]);

//     display(limits);

// }


// #include <stdio.h>

// struct Student {
//     int rollNo;
//     float marks;
//     struct student_info {
//         char name[50];
//         int age;
//         char dob[15];
//     } info;
// };

// int main() {
//     struct Student students[3];
//     for (int i = 0; i < 3; i++) {
//         printf("Enter roll number, marks, name, age, and DOB of student %d:\n", i + 1);
//         scanf("%d %f %s %d %s", &students[i].rollNo, &students[i].marks, students[i].info.name, &students[i].info.age, students[i].info.dob);
//     }
//     for (int i = 0; i < 3; i++) {
//         printf("Roll No: %d, Marks: %.2f, Name: %s, Age: %d, DOB: %s\n", students[i].rollNo, students[i].marks, students[i].info.name, students[i].info.age, students[i].info.dob);
//     }
//     return 0;
// }


// #include <stdio.h>
// #include <string.h>

// struct Employee {
//     char name[50];
//     float salary;
//     int hoursWorked;
// };

// void updateSalary(struct Employee employees[], int n) {
//     for (int i = 0; i < n; i++) {
//         if (employees[i].hoursWorked >= 12) {
//             employees[i].salary += 150;
//         } else if (employees[i].hoursWorked == 10) {
//             employees[i].salary += 100;
//         } else if (employees[i].hoursWorked == 8) {
//             employees[i].salary += 50;
//         }
//     }
// }

// int main() {
//     struct Employee employees[5] = {
//         {"Alice", 1000, 8},
//         {"Bob", 1200, 10},
//         {"Charlie", 1100, 12},
//         {"David", 900, 8},
//         {"Eve", 950, 10}
//     };

//     updateSalary(employees, 5);

//     printf("Employee Details After Salary Update:\n");
//     for (int i = 0; i < 5; i++) {
//         printf("Name: %s, Final Salary: %.2f\n", employees[i].name, employees[i].salary);
//     }

//     return 0;
// }



// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// struct Employee {
//     char name[50];
//     float salary;
//     int hoursWorked;
// };

// void findHighestSalary(struct Employee *employees, int n) {
//     float maxSalary = employees[0].salary;
//     char highestPaidEmployee[50];
//     strcpy(highestPaidEmployee, employees[0].name);

//     for (int i = 1; i < n; i++) {
//         if (employees[i].salary > maxSalary) {
//             maxSalary = employees[i].salary;
//             strcpy(highestPaidEmployee, employees[i].name);
//         }
//     }

//     printf("Employee with the highest salary:\n");
//     printf("Name: %s, Salary: %.2f\n", highestPaidEmployee, maxSalary);
// }

// int main() {
//     int n;
//     printf("Enter the number of employees: ");
//     scanf("%d", &n);

//     struct Employee *employees = (struct Employee *)malloc(n * sizeof(struct Employee));

//     if (employees == NULL) {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }

//     printf("Enter details of %d employees (Name, Salary, Hours Worked):\n", n);
//     for (int i = 0; i < n; i++) {
//         printf("Employee %d:\n", i + 1);
//         printf("Name: ");
//         scanf("%s", employees[i].name);
//         printf("Salary: ");
//         scanf("%f", &employees[i].salary);
//         printf("Hours Worked per Day: ");
//         scanf("%d", &employees[i].hoursWorked);
//     }

//     findHighestSalary(employees, n);

//     free(employees);

//     return 0;
// }
