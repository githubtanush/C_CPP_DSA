// // make the last digit zero
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number for which last digit u want to make zero : ");
//     scanf("%d",&n);
//     n = n / 10;
//     n = n * 10;
//     printf("The work is done last digit is become zero of your given number : %d",n);
//     getchar();
//     return 0;
// }


// //make the last digit with input user digit
// #include<stdio.h>
// int main(){
//     int n,digit;
//     printf("Enter the number for which last digit u want to make zero : ");
//     scanf("%d",&n);
//     printf("Enter a digit which u want to append at last : ");
//     scanf("%d",&digit);
//     n = n / 10;
//     n = (n * 10) + digit;
//     printf("The work is done last digit is become zero of your given number : %d",n);
//     getchar();
//     return 0;
// }



// //INR USD problem 
// #include<stdio.h>
// int main(){
//     float USD,INR;
//     printf("Enter the value in INR that how many u want to convert to USD : ");
//     scanf("%f",&INR);
//     USD = 76.23;
//     USD = INR/USD;
//     printf("The value for INR in USD is : %.2f",USD);
//     getchar();
//     return 0;
// }


// //Write a programme to take 3 digit number 
// #include<stdio.h>
// #include<math.h>
// int rotation(int number){
//     int length = log10(number) + 1;
//     int a = number % 10;
//     int b = number / 10;
//     int c;
//     for(int i = 0; i<length;i++){
//     c = a * pow(10,i) + b;    
//     }
//     return c;
// }
// int main(){
//     int n;
//     printf("Enter the value of a number : ");
//     scanf("%d",&n);
//     int m = rotation(n);
//     printf("Number after 1 rotation is : %d",m);
//     getchar();
//     return 0;
// }