// //programme to find sum of first n natural numbers
// #include<stdio.h>
// //this is not in method 2int s = 0;
// int  printSumN(int n){
//     //Method 1 :
//     // if(n>0){
//     //     printSumN(n-1);
//     //     s = s + n;
//     // }
//     // return s;
    
//     //Methdo 2:
//     if(n==1)
//         return 1;
//     return n + printSumN(n-1);
// }
// int main(){
//     int n;
//     printf("Enter the value for which till u want to print the sum : ");
//     scanf("%d",&n);
//     int d = printSumN(n);
//     printf("The value for this first n=%d natural numbers is : %d",n,d);
//     getchar();
//     return 0;
// }

// // programme to find product of first n  natural number
// #include<stdio.h>
// // this is not in method 2int s = 1;
// int  factN(int n){
//     // if(n>0){
//     //     printSumN(n-1);
//     //     s = s * n;
//     // }
//     // return s;
    
//     //method 2:
//     if(n==1||n==0)
//         return 1;
//     return n * factN(n-1);
// }
// int main(){
//     int n;
//     printf("Enter the value for which till u want to print the sum : ");
//     scanf("%d",&n);
//     int d = factN(n);
//     printf("The value for this first n=%d natural numbers is : %d",n,d);
//     getchar();
//     return 0;
// }



// // programme to find first n even natural number
// #include<stdio.h>
// // int s = 0; //this is not included in method 2
// int  printSumN(int n){
//     //Method 1 :
//     // if(n>0){
//     //     printSumN(n-1);
//     //     s = s + 2*n;
//     // }
//     // return s;

//     //Method 2:
//      if(n==1){
//         return 2;
//      }
//      return 2*n + printSumN(n-1);
// }
// int main(){
//     int n;
//     printf("Enter the value for which till u want to print the sum : ");
//     scanf("%d",&n);
//     int d = printSumN(n);
//     printf("The value for this first n=%d natural numbers is : %d",n,d);
//     getchar();
//     return 0;
// }


// //programme to find first n odd natural numbers
// #include<stdio.h>
// // int s = 0;//this method include in method 1
// int  printSumN(int n){
//     //Method 1:
//     // if(n>0){
//     //     printSumN(n-1);
//     //     s = s + 2*n-1;
//     // }
//     // return s;
    
//     //Method 2:
//     if(n==1){
//         return 1;
//     }
//     return 2*n-1+printSumN(n-1);
// }
// int main(){
//     int n;
//     printf("Enter the value for which till u want to print the sum : ");
//     scanf("%d",&n);
//     int d = printSumN(n);
//     printf("The value for this first n=%d natural numbers is : %d",n,d);
//     getchar();
//     return 0;
// }


// //programme to find sum of first squares of first n natural numbers
// #include<stdio.h>
// //int s = 0;//this is not included in method 2
// int  printSumN(int n){
//     //Method 1:
//     // if(n>0){
//     //     printSumN(n-1);
//     //     s = s + n*n;
//     // }
//     // return s;

//     //Method 2:
//     if(n==1){
//         return 1;
//     }
//     return n*n + printSumN(n-1);
// }
// int main(){
//     int n;
//     printf("Enter the value for which till u want to print the sum : ");
//     scanf("%d",&n);
//     int d = printSumN(n);
//     printf("The value for this first n=%d natural numbers is : %d",n,d);
//     getchar();
//     return 0;
// }


//Write a recursive function to print binary equivalent of a decimal number
// #include<stdio.h>
// int sumdigitsN(int n){
//     if(n==0){
//         return 0;
//     }
//     return n%10+sumdigitsN(n/10);
// }
// int main(){
//     int n;
//     printf("Enter the value of n for which u want to count the sum of digits : ");
//     scanf("%d",&n);
//     int d = sumdigitsN(n);
//     printf("The sum of the digits for given number is : %d",d);
//     getchar();
//     return 0;
// }

// //Write a recursive function to calculate x^y
// #include<stdio.h>
// double power(double x, double y){//double because in this we can also find digit in divide
//     if(y==0)
//         return 1;
//     else if(y>0){
//         return x*power(x,y-1);
//     }
//     else{
//         return 1/x * power(x,y+1);
//     }

// }
// int main(){
//     int x,y;
//     printf("Enter the value of x for which u perform operation and y for how many times : ");
//     scanf("%d %d",&x,&y);
//     double m = power(x,y);
//     printf("%d power %d is : %.3lf",x,y,m);
//     getchar();
//     return 0;
// }