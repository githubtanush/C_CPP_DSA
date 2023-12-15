//by using size of operator find the size of different type of variables
// #include<stdio.h>
// int main(){
//     int a;
//     float b;
//     char c;
//     double d;
//     int m = sizeof(a);
//     int n = sizeof(b);
//     int o = sizeof(c);
//     int p = sizeof(d);
//     printf("%d\n",m);
//     printf("%d\n",n);
//     printf("%d\n",o);
//     printf("%d\n",p);
//     getchar();
//     return 0;
// }


// //last digit of a given number
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number for which u find last digit : ");
//     scanf("%d",&n);
//     int a = n % 10;
//     printf("The last digit of a given number is %d",a);
//     getchar();
//     return 0;
// }


// //first digit of a given three digit number
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number for which u find first digit : ");
//     scanf("%d",&n);
//     int a ;
//     while(1){
//             n = n / 10;
//             if(n==0){
//                 break;
//             }
//           a = n;
//     }
//     printf("\nThe first digit of a given three digit number is : %d",a);
//     getchar();
//     return 0;
// }

//middle digit of a given three digit number
// #include<stdio.h>
// #include<stdlib.h>
// #include<math.h>
// int find_middle_digit(int num){
//     int number = abs(num);
//     int length = log10(number) + 1;//new way to find length 
//     if(length % 2 == 0){
//         // printf("The number is even there is no middle value for it.");
//         return -1;
//     }
//     else{
//         int middleIndex = length/2;
//         int i ; 
//         for(int i = 0; i < middleIndex;i++){
//             number = number / 10;
//         }
//         return number % 10;
//     }
// }
// int main(){
//     int num;
//     printf("Enter the number for which u find middle digit : ");
//     scanf("%d",&num);
//     int m = find_middle_digit(num);
//     if(m != -1){
//     printf("The value for the middle digit is : %d",m);
//     }
//     getchar();
//     return 0;
// }


// //swap variable with using third variable
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter the value for a and b : ");
//     scanf("%d",&a);
//     scanf("%d",&b);
//     printf("Before swapping : \n");
//     printf("Value of a is : %d\n",a);
//     printf("Value of b is : %d\n",b);
//     c = a;
//     a = b;
//     b = c;
//     printf("After swapping : \nValue of a is : %d\nValue of b is : %d\n",a,b);
//     getchar();
//     return 0;
// }


// //swap variable without using third variable
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter the value for a and b : ");
//     scanf("%d",&a);
//     scanf("%d",&b);
//     printf("Before swapping : \n");
//     printf("Value of a is : %d\n",a);
//     printf("Value of b is : %d\n",b);
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     printf("After swapping : \nValue of a is : %d\nValue of b is : %d\n",a,b);
//     getchar();
//     return 0;
// }