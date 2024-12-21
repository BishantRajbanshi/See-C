// #include <stdio.h>

// struct Address {
//     char province[20],district[20],city[20];
//     int ward;
// };

// struct Students {
//     int rollno;
//     char name[20];
//     struct Address address; 
// };

// int main() {
//     struct Students s1;

    // printf("Enter roll number: ");
    // scanf("%d", &s1.rollno);

    // printf("Enter name: ");
    // scanf("%s", s1.name);

//     printf("Enter province: ");
//     scanf("%s", s1.address.province);

//     printf("Enter district: ");
//     scanf("%s", s1.address.district);

//     printf("Enter city: ");
//     scanf("%s", s1.address.city);

//     printf("Enter ward number: ");
//     scanf("%d", &s1.address.ward);

//     printf(
//         "Student Details:\n"
//         "Roll Number: %d\n"
//         "Name: %s\n"
//         "Address: %s, %s, %s, Ward %d\n",
//         s1.rollno, 
//         s1.name, 
//         s1.address.province, 
//         s1.address.district, 
//         s1.address.city, 
//         s1.address.ward
//     );
// }


// #include <stdio.h>

// struct Students
// {
//     char name[20];
//     int rollnum;
//     float marks;
// };

// void takeData(s[i]){
//     printf("Enter roll number: ");
//     scanf("%d", &s[i].rollnum);

//     printf("Enter name: ");
//     scanf("%s", &s[i].name);
// }

// int main(){
//   for (int i = 1; i <= 10; i++)
//   {
//   struct Students s[i];
//   takeData(i);
//   }
  
// }



#include <stdio.h>

struct Students {
    char name[20];
    int rollnum;
    float marks;
};

void takeData(struct Students s[], int i) {
    printf("Enter roll number for student %d: ", i);
    scanf("%d", &s[i].rollnum);

    printf("Enter name for student %d: ", i);
    scanf("%s", s[i].name);

    printf("Enter marks for student %d: ", i);
    scanf("%f", &s[i].marks);
}

void displayData(struct Students s[], int count) {
    printf("\nStudent Details:\n");
    for (int i = 0; i < count; i++) {
        printf("Student %d - Roll Number: %d, Name: %s, Marks: %.2f\n",
               i + 1, s[i].rollnum, s[i].name, s[i].marks);
    }
}

int main() {
    struct Students s[10]; 
    for (int i = 1; i <= 10; i++) {
        takeData(s, i);
    }
    displayData(s, 10);
}
