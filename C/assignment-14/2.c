// //Factorial of a number
// #include<stdio.h>
// int factorial(int n){
//     int fact = 1;
//     while(n>0){
//         fact = fact * n;
//         n--;
//     }
//     return fact;
// }
// int main(){
//     int n;
//     printf("Enter the value for n for which u find factorial : ");
//     scanf("%d",&n);
//     int fact  = factorial(n);
//     printf("The answer for this value factorial is %d",fact);
//     getchar();
//     return 0;
// }





// // //Factorial of a number and use this also to find number of combinations one can make n items and selected r at a time
// #include<stdio.h>
// int factorial(int n){
//     int fact = 1;
//     while(n>0){
//         fact = fact * n;
//         n--;
//     }
//     return fact;
// }
// int combi(int n,int r){
//     return factorial(n)/factorial(r)/factorial(n-r);
// }
// int main(){
//     int n,r;
//     printf("Enter the value for n that how many things actually have: ");
//     scanf("%d",&n);
//     printf("Enter the value for r that how many u selected at a time: ");
//     scanf("%d",&r);
//     int combination  = combi(n,r);
//     printf("The answer for this value factorial is %d",combination);
//     getchar();
//     return 0;
// }



// //Factorial of a number and use this also to find number of arrangements one can make n items and selected r at a time
// #include<stdio.h>
// int factorial(int n){
//     int fact = 1;
//     while(n>0){
//         fact = fact * n;
//         n--;
//     }
//     return fact;
// }
// int combi(int n,int r){
//     return factorial(n)/factorial(n-r);
// }
// int main(){
//     int n,r;
//     printf("Enter the value for n that how many things actually have: ");
//     scanf("%d",&n);
//     printf("Enter the value for r that how many u selected at a time: ");
//     scanf("%d",&r);
//     int combination  = combi(n,r);
//     printf("The answer for this value factorial is %d",combination);
//     getchar();
//     return 0;
// }


// //L_C_M of two numbers
// #include<stdio.h>
// int L_C_M(int a,int b){
//     int L_C_M;
//     for(L_C_M=a>b?a:b;L_C_M<=a*b;L_C_M++){
//         if(L_C_M%a==0 && L_C_M%b==0){
//             break;
//         }
//     }
//     return L_C_M;
// }
// int main(){
//     int a,b;
//     printf("Enter the value for first number for which u find L_C_M : ");
//     scanf("%d",&a);
//     printf("Enter the value for second nubmer for which u find L_C_M : ");
//     scanf("%d",&b);
//     int d = L_C_M(a,b);
//     printf("The L_C_M for following two numbers is : %d",d);
//     getchar();
//     return 0;
// }


// //H_C_F of two numbers
// #include<stdio.h>
// int HighestCommonFactorGCD(int a,int b){
//     while(a!=b){
//     if(a>b){
//         a = a - b;
//     }
//     else{
//         b = b - a;
//     }
//     }
//     return a;
// }
// int main(){
//     int a,b;
//     printf("Enter the value for first number for which u find H_C_F : ");
//     scanf("%d",&a);
//     printf("Enter the value for second nubmer for which u find H_C_F : ");
//     scanf("%d",&b);
//     int d = HighestCommonFactorGCD(a,b);
//     printf("The H_C_F for following two numbers is : %d",d);
//     getchar();
//     return 0;
// }
