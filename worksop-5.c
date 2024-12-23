#include <stdio.h>
#include <stdlib.h>

// typedef struct{
//   float real;
//   float imag;
// }complex;

// complex add(complex n1 , complex n2){
//   complex temp;
//   temp.real = n1.real + n2.real;
//   temp.imag = n1.imag + n2.imag;
// }

// int main(){
//   complex n1,n2,result;

//   printf("For 1st complex number \n");
//   printf("Enter the real and imaginary parts: ");
//   scanf("%f %f",&n1.real,&n1.imag);
//   printf("For 2nd complex number \n");
//   printf("Enter the real and imaginary parts: ");
//   scanf("%f %f",&n2.real,&n2.imag);

//   result = add(n1,n2);
//   printf("Sum = %.1f + %.1fi", result.real,result.imag);
//   return 0;
// }

// #include <stdio.h>

// typedef struct student {
//     char name[20];
//     int rollnum;
//     float marks;
// } Student;

// void enterDetails(Student students[]) {
//     for (int i = 0; i < 10; i++) {
//         printf("Enter details for student %d:\n", i + 1);
//         printf("Name: ");
//         scanf(" %s", students[i].name);
//         printf("Roll Number: ");
//         scanf("%d", &students[i].rollnum);
//         printf("Marks: ");
//         scanf("%f", &students[i].marks);
//     }
// }

// void printDetails(Student students[]) {
//     printf("\nStudent Details:\n");
//     for (int i = 0; i < 10; i++) {
//         printf("Student %d:\n", i + 1);
//         printf("Name: %s\n", students[i].name);
//         printf("Roll Number: %d\n", students[i].rollnum);
//         printf("Marks: %.2f\n", students[i].marks);
//     }
// }

// int main() {
//     Student students[10];
//     enterDetails(students);
//     printDetails(students);
//     return 0;
// }


// #include <stdio.h>

// struct employees
// {
//     char name[20];
//     char post[20];
//     int salary;
// };

// struct employees enterData(struct employees i)
// {   
//     printf("\nEnter details for Employee \n");
//     printf("Name: ");
//     scanf("%s", i.name);
//     printf("Enter post: ");
//     scanf("%s", i.post);
//     printf("Enter salary: ");
//     scanf("%d", &i.salary);
//     return i;
// }

// int main()
// {
//     struct employees empl[10];
//     for (int i = 0; i < 3; i++)
//     {
//         empl[i] = enterData(empl[10]);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         if (empl[i].salary > 10000)
//         {
//             printf("Name: %s\n", empl[i].name);
//             printf("Post: %s\n", empl[i].post);
//             printf("Salary: %d\n", empl[i].salary);
//             printf("\n");
//         }
//     }
// }


// #include <stdio.h>

// void display(int limits[]) {
//     int lower = limits[0];
//     int upper = limits[1];

//     printf("Numbers between %d and %d are:\n", lower, upper);
//     for (int i = lower + 1; i < upper; i++) {
//         printf("%d ", i);
//     }
//     printf("\n");
// }

// int main() {
//     int lower, upper;
//     int limits[2]; 

//     printf("Enter the lower limit: ");
//     scanf("%d", &lower);

//     printf("Enter the upper limit: ");
//     scanf("%d", &upper);

//     if (lower >= upper) {
//         printf("Invalid range! Lower limit should be less than upper limit.\n");
//         return 1;
//     }

//     limits[0] = lower;
//     limits[1] = upper;

//     display(limits);

//     return 0;
// }



// struct Employee
// {
//     char name[30];
//     float salary;
//     int hoursWorked;
// };

// void printHighestSalary(struct Employee *emp, int n)
// {
//     int maxIndex = 0;
//     for (int i = 1; i < n; i++)
//     {
//         if (emp[i].salary > emp[maxIndex].salary)
//         {
//             maxIndex = i;
//         }
//     }
//     printf("\nEmployee with the highest salary:\n");
//     printf("Name: %s\n", emp[maxIndex].name);
//     printf("Salary: $%.2f\n", emp[maxIndex].salary);
// }

// int main()
// {
//     int n;
//     printf("Enter the number of employees: ");
//     scanf("%d", &n);
//     struct Employee *employees = (struct Employee *)malloc(n * sizeof(struct Employee));
//     for (int i = 0; i < n; i++)
//     {
//         printf("\nEnter details for Employee %d:\n", i + 1);
//         printf("Name: ");
//         scanf("%s", employees[i].name);
//         printf("Salary: ");
//         scanf("%f", &employees[i].salary);
//         printf("Hours worked per day: ");
//         scanf("%d", &employees[i].hoursWorked);
//     }
//     printHighestSalary(employees, n);
//     free(employees);

//     return 0;
// }

