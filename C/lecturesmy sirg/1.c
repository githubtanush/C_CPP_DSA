// #include<stdio.h>
// int main(){
//     printf("\"My Sir g\"");//escape character
//     getchar();//because to show the console screen until the one character given input from keyboard
//     return 0;
// }

//write a programme which take one  character from keyboard using getch() function and display its ASCII code
// #include<stdio.h>
// int main(){
//     char c;
//     printf("Enter a character : ");
//     c = getchar();
//     printf("%d",c);
//     return 0;
// }


//calculate area of circle
// #include<stdio.h>
// int main(){
//     float r,pie=3.14;
//     float area_of_circle;
//     printf("Enter the radius for which u find area : ");
//     scanf("%f",&r);
//     area_of_circle = pie * r * r;
//     printf("area_of_circle is %.2f\n",area_of_circle);
//     getchar();//getchar likhna se na ide ki window aa jati hai jo jab tak nhi htti jab tak character enter na kre esliye voh dikh jata hai eska bina
//     // laptop jab khud ki screen mein lekar aata to vo start or end nano se nano second mein ho jata or ham dekh hi nhi pata esliye getchar very 
//     //essential for us
//     return 0;
// }

//calculate average of three numbers
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     float avg;
//     avg  = ((a + b + c )/ 3.0); //integer/integer = integer , float/integer = float , float/float = float, float,double  = real constant ,integer = integer constant
//     printf("%.2f",avg);
//     return 0;
// }

//write a programme to find the last digit of a given number
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     n = n % 10;
//     printf("%d\n",n);
//     getchar();
//     return 0;//just for informing os because os operates all the resources it is a manager
// }

//swapping values of two varaibles
//wrong approach
// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter two numbers : ");
//     scanf("%d %d",&a,&b);
//     printf("%d %d",b,a);
//     getchar();
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter two numbers : ");
//     scanf("%d %d",&a,&b);
//     printf("value for a is a = %d and b is b = %d before swapping two variables.\n",a,b);
//     //Method 1:
//     // c = a;
//     // a = b;
//     // b = c;

//     //Method 2: 
//     // a = a + b;
//     // b = a - b;
//     // a = a - b;

//     //Method 3:
//     // a = a * b;
//     // b = a / b;
//     // a = a / b;

//     //Method 4:
//     // a = a ^ b;
//     // b = a ^ b;
//     // a = a ^ b;

//     //Method 5:
//     // b = (a + b) - (a = b);

//     printf("value for a is a = %d and b is b = %d after swapping two variables.",a,b);
//     getchar();
//     return 0;
// }



//write a program to check whether the programme is positive or non - positive
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter the number : ");
//     scanf("%d",&num);
//     if(num>0){
//         printf("positive");
//     }
//     else{
//         printf("Non - positive");
//     }
//     getchar();
//     return 0;
// }

// // programme to check whether a given number is even or odd
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter a number : ");
//     scanf("%d",&num);
//     //Method 1
//     // // if(num%2==0){
//     // //     printf("Even \n");
//     // // }
//     // //if u feel it with less time u may create like that if(num%i) then if anything is return in this if then all non - zero number consider that true and zero is false then we can save the time by not applying ==0 operation
//     // else{
//     //     printf("Odd\n");
//     // }


//     //Method 2
//     // if(num%2){//it saves the time without use ==0 operation
//     //     printf("Odd\n");
//     // }
//     // else{
//     //     printf("Even\n");
//     // }


//     //Method 3 - without use modulo operator
//     //x/2*2==x
//     // if(num/2*2==num){
//     //     printf("Even\n");
//     // }
//     // else{
//     //     printf("Odd\n");
//     // }

//     //Method 4 by bitwise operator
//     // if(num&1){
//     //     printf("Odd\n");
//     // }
//     // else{
//     //     printf("Even\n");
//     // }
//     return 0;
// }



//programme to print greatest number among the three given numbers
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter three numbers : ");
//     scanf("%d %d %d",&a,&b,&c);
//     printf("%d",a>b?a>c?a:c:b>c?b:c);
//     getchar();
//     return 0;
// }

//programme to print first 10 natural numbers in reverse order
// #include<stdio.h>
// int main(){
//     int i = 1;
//     while(i <= 10){
//         printf("%d",11 - i);
//         i++;
//     }
//     getchar();
//     return 0;
// }


//first n odd natural numbers
// #include<stdio.h>
// int main(){
//     int i = 1,n;
//     printf("till how many numbers u can print the odd numbers : ");
//     scanf("%d",&n);
//     while(i<=n){
//         printf("%d ",2 * i - 1);
//         i++;
//     }
//     getchar();
//     return 0;
// }

//write a programme to print english alphabets in lower case
// #include<stdio.h>
// int main(){
//     char x;
//     for(x = 'a'; x <= 'z';x++){
//         printf("%c ",x);
//     }
//     getchar();
//     return 0;
// }


// //write a programme to calculate sum of first n natural numbers
// #include<stdio.h>
// int main(){
//     int i , s = 0,n;
//     printf("how many n natural sum you want to count : ");
//     scanf("%d",&n);
//     // for (i = 1; i <= n; i++){
//     //     s = s + i;
//     // }
//     for(i = 1, s = 0; i <= n; s=s + i, i++){
//     }
//     printf("The sum of the numbers is sum = %d",s);
//     getchar();
//     return 0;
// }


// //write a programme to print first n terms of the series
// //1 3 6 10 15 .....
// #include<stdio.h>
// int main(){
//     int i , s = 0,n;
//     printf("how many n natural sum you want to count : ");
//     scanf("%d",&n);
//     for (i = 1; i <= n; i++){
//         s = s + i;
//         printf("%d ",s);
//     }
//     printf("\nThe sum of the numbers is sum = %d\n",s);
//     getchar();
//     return 0;
// }



// //write a programme to print first n terms of the series
// // //2 5 10 17 26 37 .....
// #include<stdio.h>
// int main(){
//     int  n;
//     printf("Enter till how many numbers u want to print this type of sequence : ");
//     scanf("%d",&n);
//     for(int i = 1; i <= n; i++){
//         printf("%d ",i*i+1);
//     }
//     getchar();
//     return 0;
// }

//write a programme to find sum of first n odd natural numbers
// #include<stdio.h>
// int main(){
//     int n, s = 0;
//     scanf("%d",&n);
//     for(int i = 1; i <= n; i++){
//         //method 1:
//         // m = 2 * i - 1;
//         // s = s + m;

//         //Method 2:
//         s = s + (2 * i - 1);
//     }
//     printf("The sum of first n odd natural number is %d",s);
//     getchar();
//     return 0;
// }

//Write a programme to reverse a number
// #include<stdio.h>
// int main(){
//     int n  , x = 0, k , count = 0,lock = 1;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     while(n>0){
//         k = n % 10;
//         if(k==0 && lock){
//             count++;
//         }
//         else{
//             lock = 0;
//         }
//         x = x * 10  + k;
//         n = n / 10;
//     }
//     while(count--){
//         printf("%c",'0');
//     }
//     printf("%d",x); 
//     getchar();
//     return 0;
// }


//write a programme to check whether a number is prime or not
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int i,n,s;
//     printf("Enter a number which u want to check is it prime or not : ");
//     scanf("%d",&n);
//     s = sqrt(n);
//     for(i = 2; i <= s; i++){
//         if(n%i==0){
//             break;
//         }
//     }
//     if(i==s+1){
//         printf("Prime");
//     }
//     else{
//         printf("Not prime");
//     }
//     getchar();
//     return 0;
// }