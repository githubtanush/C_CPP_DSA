// //area of circle
// #include<stdio.h>
// float area_of_circle(int r){
//     return 3.14*r*r;
// }
// int main(){
//     int r;
//     printf("Enter the value of radius for which u find the area_of_circle : ");
//     scanf("%d",&r);
//     float f = area_of_circle(r);
//     printf("The area of circle is : %.2f",f);
//     getchar();
//     return 0;
// }


// //Simple interest
// #include<stdio.h>
// float simple_interest(int p, int r, int t){
//     return p*r*t/100.0;
// }
// int main(){
//     int p,r,t;
//     printf("Enter the principal amount for simple_interest : ");
//     scanf("%d",&p);
//     printf("Enter the radius for simple_interest : ");
//     scanf("%d",&r);
//     printf("Enter the time for simple_interest : ");
//     scanf("%d",&t);
//     float q = simple_interest(p,r,t);
//     printf("The value for the following simple_interest is : %.2f",q);
//     getchar();
//     return 0;
// }


// //function to check given number is even or odd
// #include<stdio.h>
// int Check_even(int n){
//     if(n%2)
//         return 1;
//     return 0;
// }
// int main(){
//     int n;
//     printf("Enter the value for n which u want to check that it is odd or even : ");
//     scanf("%d",&n);
//     int p = Check_even(n);
//     if(p==0){
//         printf("Even");
//     }
//     else{
//         printf("Odd");
//     }
//     getchar();
//     return 0;
// }


// //TSRN
// //print first n natural numbers
// #include<stdio.h>
// void printN(int n){
//     if(n>0){
//     printN(n-1);
//     printf(" %d",n);
//     }
// }
// int main(){
//     int n;
//     printf("Enter the value that how many natural numbers you want to print : ");
//     scanf("%d",&n);
//     printN(n);
//     getchar();
//     return 0;
// }


// //print first n odd natural number
// #include<stdio.h>
// void printOddN(int n){
//     if(n>0){
//         printOddN(n-1);
//         printf(" %d",2*n-1);
//     }
// }
// int main(){
//     int n;
//     printf("Enter the value for n that how much first odd numbers u want to print : ");
//     scanf("%d",&n);
//     printOddN(n);
//     getchar();
//     return 0;
// }