#include<stdio.h>
#include<math.h>

// void midpoint(int x1, int y1, int x2, int y2) {
//     int xmid = (x1 + x2) / 2; 
//     int ymid = (y1 + y2) / 2;
//     printf("Midpoint is: (%d, %d)\n", xmid, ymid);
// }

// int main() {
//     int x1, y1, x2, y2;

//     printf("Enter the coordinates of the first point (x1, y1): ");
//     scanf("%d %d", &x1, &y1);
//     printf("Enter the coordinates of the second point (x2, y2): ");
//     scanf("%d %d", &x2, &y2);

//     midpoint(x1, y1, x2, y2);
//     return 0;
// }


// int greater(int num1, int num2) {
//     if (num1 < num2) {
//         return num2;
//     } else {
//         return num1;
//     }
// }

// int main() {
//     int great = greater(5, 2);
//     printf("The greater number is: %d\n", great);
//     return 0;
// }


// void triangular(int n){
//     for (int i = 1; i <= n; i++) {
//         int num = (i * (i + 1)) / 2;
   
//      printf("%d ", num);
//     }
//     printf("\n");
// }
// double velocityCalc(double v, double u, double a, double t){
//     if (isnan(v))
//     {
//         return u + a * t;

//     }else if (isnan(u))
//     {
//         return  a * t - v;

//     }else if (isnan(a))
//     {
//         return (v - u) / t;

//     }else{

//         return (v - u) / a;

//     }
// }

// int main(){
//      triangular(4);
// }


double velocityCalc(double v, double u, double a, double t) {
  if (isnan(v)) {
      v = u + a * t;
      printf("The final velocity is %.2lf\n", v);
  } 
  else if (isnan(u)) {
      u = v - a * t;
      printf("The initial velocity is %.2lf\n", u);
  } 
  else if (isnan(a)) {
      a = (v - u) / t;
      printf("The acceleration is %.2lf\n", a);
  } 
  else {
      t = (v - u) / a;
      printf("The time that has elapsed is %.2lf hours.\n", t);
  }
  return 0;
}

int main() {
    velocityCalc(NAN, 20, 30, 4); 
    velocityCalc(30, NAN, 30, 3);  
    velocityCalc(90, 20, NAN, 2);  
    velocityCalc(40, 20, 30, NAN); 

    return 0;
}


// #include <stdio.h>

// void equations(double a, double b, double c, double d, double e, double f) {
//     double x, y;
//     double det = a * e - b * d;
//     if (det == 0) {
//         printf("The equations have no solutions\n");
//         return;
//     }
//     x = (c * e - b * f) / det;
//     y = (a * f - c * d) / det;
//     printf("The solution is: x = %.2f, y = %.2f\n", x, y);
// }

// int main() {
//     equations(2, 3, 13, 4, -1, 5);
//     return 0;
// }



