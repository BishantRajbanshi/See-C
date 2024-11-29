#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

// int main() {
//     int i,sum=0;

//     for (i = 1; i <= 10; i++) { 
//         sum += i;
//     }
//     printf("The sum of numbers from 1 to 10 is: %d", sum); 
// }


// int main(){
//   int fact=1,i,a;

//   printf("Enter the number you want factorial of :");
//   scanf("%d",&a);

//   for (int i = a; i > 0; i--)
//   {
//     fact *= i;
//   }
//   printf("The factorial of %d is: %d",a,fact);
// }


// int main(){
//   int i,num,n;

//   printf("Enter the number req: ");
//   scanf("%d",&n);

//   for (int i = 0; i < n; i++)
//   {
//     num = (i*(i+1))/2;
//     printf("%d ",num);
//   }
// }

//test

// int main() {
//     char ch;
//     int key;

//     while (1)
//     {
//     printf("Enter a single charcter: ");
//     scanf("%c", &ch);
//       if (key = ' ')
//       {
//         break;
//       }
      
//     }

//     if (ch >= 'A' && ch <= 'Z')
//  {
//         printf("character in lowercase: %c\n", tolower(ch));
//     } else {
//         printf("character in Upperacase: %c\n", toupper(ch));
//     }
// }


// int main(){

//   char ch;
//   int key;

//   printf("Enter the charcter :");
//   scanf("%d",&ch);

//   if (ch> )
//   {
//     /* code */
//   }
  
// }


// int main() {
//     int i, j;
//     int character = 65;

//     for (i = 1; i <= 5; i++) {
//         for (j = 1; j <= i; j++) {
//             printf("%c ", character);
//         }
//         printf("\n");
//         character += 1;
//     }
// }



// int main() {
//   char word;

//   while (word!=10)
//   {
  
//     printf("Enter a character: ");
//     char converted;

//     scanf(" %c", &word);

//     if (word >= 'A' && word <= 'Z') {
//         converted = word + 32;
//         printf("Converted char: %c\n", converted);
//     } else if (word >= 'a' && word <= 'z') {
//         converted = word - 32;
//         printf("character in Upperacase: %c\n", converted);
//     } else if(word == ' '){
//         printf("Progarm exited");
//         break;
//     }
// }
// }




// int main() {
//     char ch;
//     printf("Enter characters (press Enter to stop):\n");
    
//     while(1) {
//         scanf("%c", &ch);
        
//         if(ch == 10 || ch == '\n') {
//             break;
//         }
        
//         if(ch >= 'A' && ch <= 'Z') {
//             ch = ch + 32;
//             printf("Converting to lowercase: %c\n", ch);
//         }
//         else if(ch >= 'a' && ch <= 'z') {
//             ch = ch - 32;
//             printf("Converting to uppercase: %c\n", ch);
//         }
//         else {
//             printf("The character is: %c\n", ch);
//         }
//     }
// }


// int main() {
//     char ch;

//     while (1) {
//         printf("Enter a character: ");
//         scanf("%c", &ch);
//         getchar();

//         if (ch == 10 || ch == 13) 
//         { 
//             exit(0);
//         }

//         if (ch >= 'A' && ch <= 'Z') {
//             ch = ch + ('a' - 'A'); 
//         }

//         printf("Character in lowercase: %c\n", ch);
//     }
// }
