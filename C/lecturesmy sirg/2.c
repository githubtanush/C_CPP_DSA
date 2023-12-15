// //Patterns problem
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i = 1; i <= n;i++){
//         for(int j = 1; j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     getchar();
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i = 1; i <= n;i++){
//         int count =1;
//         for(int j = 1; j<= 2*n-1;j++){
//             if(j>=(n+1)-i && j<=(n-1)+i){
//                 printf("%3d",count);
//                 j<n?count++:count--;
//             }
//             else{
//                 printf("   ");
//             }
//         }
//         printf("\n");
//     }
//     getchar();
//     return 0;
// } 

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number for how much big u can make : ");
//     scanf("%d",&n);
//     for(int i = 1; i<= n;i++){
//         char x='A';
//         for(int j = 1; j <= 2*n-1;j++){
//             if(j<=(n+1)-i || j>=(n-1)+i){
//                 printf("%c ",x);
//                j<n?x++:x--;
//             }
//             else{
//                 printf("  ");
//                 if(j==n){
//                 x--;
//                 }
//             }
//         }
//         printf("\n");
//     }
//     getchar();
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter month number : ");
//     scanf("%d",&n);
//     switch(n){
//         case 1:
//         case 3:
//         case 5:
//         case 7:
//         case 8:
//         case 10:
//         case 12:
//         printf("\nDays 31");
//         break;

//         case 2:
//         printf("\nDays 28");
//         break;

//         case 4:
//         case 6:
//         case 9:
//         case 11:
//         printf("\nDays 30");
//         break;

//         default:
//         printf("Invalid number");
//         break;

//     }
//     getchar();
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter month number : ");
//     scanf("%d",&n);
//     switch(n){
//         case 1||3||5||7||8||10||12://1 is the meaning that it is true then any non zero number or with any one they remains true so only 1 enter for finding day 31 by this method we can set it into only 1 case
//         printf("\nDays 31");
//         break;

//         case 2:
//         printf("\nDays 28");
//         break;

//         case 4:
//         case 6:
//         case 9:
//         case 11:
//         printf("\nDays 30");
//         break;

//         default:
//         printf("Invalid number");
//         break;

//     }
//     getchar();
//     return 0;
// }


//write an programme which take marks obtained in an examination(out of 100)from user and display appropriate grade
//90<=marks<100 - grade A
//80<=marks<90 - grade B
//70<=marks<80 - grade C
//60<=marks<70 - grade D
//50<=marks<60 - grade E
//marks<50 - grade F

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the marks obtained in an examination: ");
//     scanf("%d",&n);
//     switch(n){
//         case  90 ... 100://syntax
//         printf("GRADE A\n");
//         break;
//         case  80 ... 89://syntax
//         printf("GRADE B\n");
//         break;
//         case  70 ... 79://syntax
//         printf("GRADE C\n");
//         break;
//         case  60 ... 69://syntax
//         printf("GRADE D\n");
//         break;
//         case  50 ... 59://syntax
//         printf("GRADE E\n");
//         break;
//         default:
//         printf("GRADE F\n");
//         break;
//     }
//     getchar();
//     return 0;
// }


//calculate area of circle (TSRS)
// #include<stdio.h>
// float area(float r){
//     float area_of_circle = 3.14 * r * r;
//     return area_of_circle;
// }
// int main(){
//  float r;
//  scanf("%f",&r);
//  float f = area(r);
//  printf("area_of_circle is %.2f",f);
//  getchar();
//  return 0;
// }

//no. is even or odd return 1 no is even and 0 if no is odd
// #include<stdio.h>
// int is_even(int n){
//     //Method 1:
//     // if(n%2==0){
//     //     return 1;
//     // }
//     // else{
//     //     return 0;
//     // }


//     //Method 2
//     // if(n%2==0){
//     //     return 1;//if this return is working means that it is returning something then function will stop
//     // }
//     //     return 0;

//     //Method 3 : 
//     // return n%2==0;

//     return !(n%2);
// }
// int main(){
//     int n;
//     printf("Enter a number which u want to check that it is odd or even : ");
//     scanf("%d",&n);
//     if(is_even(n)){
//         printf("Even");
//     }
//     else{
//         printf("Odd");
//     }
//     getchar();
//     return 0;
// }


// //Factorial of a number
// //Takes something return something
// #include<stdio.h>
// int factorial(int n){
//     int fact  = 1;
//     for(int i = 1; i <=n;i++){
//         fact = fact * i;
//     }
//     return fact;
// }
// int main(){
//     int n;
//     printf("Enter a number for which u find factorial : ");
//     scanf("%d",&n);
//     int m = factorial(n);
//     printf("%d",m);
//     getchar();
//     return 0;
// }

// //write a function to find no. of possible combinations can be made out of n items are selected at a time
// //Take something return something
// #include<stdio.h>
// int factorial(int n){
//     int fact = 1;
//     while(n){
//         fact = fact *n;
//         n--;
//     }
//     return fact;
// }
// int combi(int n, int r){
//     return factorial(n)/factorial(n-r)/factorial(r);
// }
// int main(){
//  int n,r;
//  printf("Enter the number for which u find No. of combinations : ");
//  scanf("%d %d",&n,&r);
//   int m = combi(n,r);
//   printf("%d",m);
//   getchar();
//   return 0;
// }