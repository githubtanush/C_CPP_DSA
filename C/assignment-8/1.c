//Check whether a given no. is divisible by 3 and 2
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number for which u check that it is divisible by 3 and 2 : ");
//     scanf("%d",&n);
//     if(n%3==0 && n%2==0){
//         printf("Divisible");
//     }
//     else{
//         printf("Not divisible");
//     }
//     getchar();
//     return 0;  
// }

// //check whether a given number is divisible by 7 or 3
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number for which u check that it is divisible by 3 or 7 : ");
//     scanf("%d",&n);
//     if(n%3==0 || n%7==0){
//         printf("Divisible");
//     }
//     else{
//         printf("Not divisible");
//     }
//     getchar();
//     return 0;  
// }

// //check positive negative or zero
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number for which u check it is positive, negative or zero  : ");
//     scanf("%d",&n);
//     if(n>0){
//         printf("Positive");
//     }
//     else if(n==0){
//         printf("Zero");
//     }
//     else{
//         printf("Negative");
//     }
//     getchar();
//     return 0;
// }

// //leap year or not
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter any year for which u check that it is leap year or not : ");
//     scanf("%d",&n);
//     if((n%4==0 && n%100!=0) || (n%400==0)){
//         printf("leap year.");
//     }
//     else{
//         printf("Not a leap year");
//     }
//     getchar();
//     return 0;
// }

// //greatest 
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter the value for three numbers which inbetween u can check which is greater or not : ");
//     scanf("%d %d %d",&a,&b,&c);
//     if(a>b){
//         if(a>c){
//             printf("%d",a);
//         }
//         else{
//             printf("%d",c);
//         }
//     }
//     else{
//         if(b>c)
//         printf("%d",b);
//         else
//         printf("%d",c);
//     }
//     getchar();
//     return 0;
// }