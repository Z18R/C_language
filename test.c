// #include <stdio.h>

// int main(){

//   int myNum = 25;
//   printf("%d", myNum);
//   return 0;
// }


// #include <stdio.h>
// int main(){

// int myNum = 5;
// int myNum1 = 7;
// printf("My favorite number is: %d%d", myNum,myNum1);
// }

// #include <stdio.h>

// int main() {
//   int x = 5;
//   int y = 6;
//   int sum = x + y;
//   printf("%d", sum);
//   return 0;
// }


// int main() {
//   char Firstname = 'J';
//   char lastName = 'a';
//   printf("%c %c", Firstname, lastName);
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   int x,y,z;
//   x = 10;
//   y = 20;
//   z = 30;
//   x= ++y+z;
//   printf("x: %d\n", x);
//   printf("y: %d\n", y);
//   printf("z: %d\n",(z++));
//   return 0;
// }


// Create a string
// char firstName[30];

// // Ask the user to input some text
// printf("Enter your first name: \n");

// // Get and save the text
// scanf("%s", firstName);

// // Output the text
// printf("Hello %s.", firstName);

// }
// int x,y;
// x = 10;
// y = 20;

// x = y;
// y = x;
// printf("x: %d\n" ,x);
// printf("y: %d" ,y);

// double x = 10, y = 20, temp ;

// temp = x;

// x = y;

// y = temp;

// printf("\nAfter swapping, first number: ", x);
// printf("\nAfter swapping, wnd number: ", y);
// return 0;
// }


// #include<stdio.h>
// int main() {
//   double first, second, temp;
//   printf("Enter first number: ");
//   scanf("%lf", &first);
//   printf("Enter second number: ");
//   scanf("%lf", &second);

//   // value of first is assigned to temp
//   temp = first;

//   // value of second is assigned to first
//   first = second;

//   // value of temp (initial value of first) is assigned to second
//   second = temp;

//   // %.2lf displays number up to 2 decimal points
//   printf("\nAfter swapping, first number = %.2lf\n", first);
//   printf("After swapping, second number = %.2lf", second);
//   return 0;
// }

// #include<stdio.h>
// int main(void) {
//   int x,y;
//   x = 10;
//   y = 20;

//   x = x-y;
//   y = x+y;
//   x = y-x;
  
//   printf("x: %d\n" ,x);
//   printf("y: %d" ,y);
  
//   }

#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}
