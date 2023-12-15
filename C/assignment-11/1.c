// //Sum of first n natural numbers
// #include<stdio.h>
// int main(){
//     int n,s = 0;
//     printf("enter the number till how many number u find the sum  : ");
//     scanf("%d",&n);
//     for(int i = 1; i <= n; i++){
//         s = s + i;
//     }
//     printf("Sum of first n natural numbers is : %d",s);
//     getchar();
//     return 0;
// }

// //Sum of first n even natural numbers
// #include<stdio.h>
// int main(){
//     int n,s = 0;
//     printf("enter the number till how many number u find the even number sum  : ");
//     scanf("%d",&n);
//     for(int i = 1; i <= n; i++){
//         s = s + 2*i;
//     }
//     printf("Sum of first n natural numbers is : %d",s);
//     getchar();
//     return 0;
// }


// //Sum of first n odd natural numbers
// #include<stdio.h>
// int main(){
//     int n,s = 0;
//     printf("enter the number till how many number u find the odd number sum  : ");
//     scanf("%d",&n);
//     for(int i = 1; i <= n; i++){
//         s = s + 2*i-1;
//     }
//     printf("Sum of first n natural numbers is : %d",s);
//     getchar();
//     return 0;
// }


// //Sum of squares of first n natural numbers
// #include<stdio.h>
// int main(){
//     int n,s = 0;
//     printf("enter the number till how many number u find the sum of square : ");
//     scanf("%d",&n);
//     for(int i = 1; i <= n; i++){
//         s = s + i*i;
//     }
//     printf("Sum of first n natural numbers is : %d",s);
//     getchar();
//     return 0;
// }

// //Sum of cubes of first n natural numbers
// #include<stdio.h>
// int main(){
//     int n,s = 0;
//     printf("enter the number till how many number u find the sum of cubes  : ");
//     scanf("%d",&n);
//     for(int i = 1; i <= n; i++){
//         s = s + i*i*i;
//     }
//     printf("Sum of first n natural numbers is : %d",s);
//     getchar();
//     return 0;
// }

//factorial of a number
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number for which u find factorial : ");
//     scanf("%d",&n);
//     int fact=1;
//     while(n!=0){
//         fact = fact * n;
//         n--;
//     }
//     printf("Value for the given factorial is : %d",fact);
//     getchar();
//     return 0;
// }

//Count digits of a given number
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n;
//     printf("Enter the number in which u can find the digit count : ");
//     scanf("%d",&n);
//     // //Method 1:
//     // int length = log10(n)+1;
//     // //Method 2 : 
//     int length;
//     while(n!=0){
//         n = n/ 10;
//         if(n==0){
//             break;
//         }
//         length++;
//     }
//     printf("The digit in this number is : %d",length);
//     getchar();
//     return 0;
// }

