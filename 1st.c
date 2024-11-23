#include<stdio.h>

// int main(){
//   int a,b,sum;

//   printf("Enter the value of a and b : ");
//   scanf("%d%d",&a,&b);

//   printf("Hello world");
//   sum = a+b;

//   printf("The sum of %d and %d is : %d",a,b,sum);
//   return 0;
// }


// int main(){
//   int p,t;
//   float r,i;

//   printf("Enter the value of p, t and r : ");
//   scanf("%d%d%f",&p,&t,&r);

//   i = (p*t*r)/100;
//   printf("The simple interest is : %f",i);
// }


//   int main() {
//     float c, f;
//     int ch;

//     printf("Enter 1 for Celsius to Fahrenheit or 2 for Fahrenheit to Celsius: ");
//     scanf("%d", &ch);

//     if (ch == 1) {
//         printf("Enter the temperature in Celsius: ");
//         scanf("%f", &c);
//         f = c * 9 / 5 + 32;
//         printf("%.2f Celsius is %.2f Fahrenheit.\n", c, f);
//     } else if (ch == 2) {
//         printf("Enter the temperature in Fahrenheit: ");
//         scanf("%f", &f);
//         c = (f - 32) * 5 / 9;
//         printf("%.2f Fahrenheit is %.2f Celsius.\n", f, c);
//     } else {
//         printf("Invalid choice. Please enter 1 or 2.\n");
//     }

//     return 0;
// }


// int main(){
//   int a;

//   printf("Enter the number: ");
//   scanf("%d",&a);

//   if (a % 2 == 0)
//   {
//     printf("Its even number");
//   }
//   else{
//     printf("Its Odd number");
//   }
//   return 0;
// }


// int main(){
//   int a,b,c;

//   printf("Enter the value of 3 numbers : ");
//   scanf("%d%d%d",&a,&b,&c);

//   if (a>b && a>c)
//   {
//     printf("%d is the greatest number",a);
//   } else if (b>c && b>a){
//     printf("%d is the greatest number",b);
//   } else{
//     printf("%d is the greatest number",c);
//   }
// }

// int main(){
//   int i;

//   printf("Even numbers from 1 to 100 are :");
//   for (int i = 0; i <= 100; i++)
//   {
//     if(i % 2 == 0){
//       printf("%d \n",i);
//     }
//   }
// }

// int main(){
//   int i,j;

//   for (int i = 0; i <= 5; i++)
//   {
//     for (int j = 0; j < i; j++)
//     {
//       printf("%d",i);
//     }
//     printf("\n");
//   }
// }


// int main(){
//   int i,m;

//   printf("Enter the number of which you want multiplication table of: ");
//   scanf("%d",&m);

//   for (int i = 0; i <= 10; i++)
//   {
//     printf("%d * %d = %d \n",m,i,m*i);
//   }
// }
