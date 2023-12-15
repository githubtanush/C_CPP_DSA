// // programme to check that it is upper case alphabet or lower case alphabet or a special character
// #include<stdio.h>
// int main(){
//     char a;
//     printf("Enter a character for which u find that it is upper case alphabet or lower case alphabet or a special character : ");
//     scanf("%c",&a);
//     if(a>='A' && a<='Z'){
//         printf("Uppercase");
//     }
//     else if(a>='a' && a<='z'){
//         printf("lowercase");
//     }
//     else{
//         printf("special character");
//     }
//     getchar();
//     return 0;
// }

// // programme to check triangle is valid or not 
// #include<stdio.h>
// int main(){
//     int side1,side2,side3;
//     printf("Enter the value for side 1 , side 2 and side 3 : ");
//     scanf("%d %d %d",&side1,&side2,&side3);
//     if((side1+side2>side3) && (side2+side3>side1) && (side3 + side1 > side2)){
//         printf("Triangle is valid ");
//     }
//     else{
//         printf("Not valid ");
//     }
//     getchar();
//     return 0;
// }

// //enter month number and find days in that month
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the month number for which u find no. of days : ");
//     scanf("%d",&n);
//     if(n==1||n==3||n==5||n==7||n==8||n==10||n==12){
//         printf("No. of Days is 31\n");
//     }
//     else if(n==2){
//         printf("No. of Days is 28\n");
//     }
//     else{
//         printf("No. of Days is 30\n");
//     }
//     getchar();
//     return 0;
// }

// //write a programme to find nature of roots
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter the coeff. for the quadratic equation : ");
//     scanf("%d %d %d",&a,&b,&c);
//     int D = (b * b) - (4 * a * c);
//     if(D>0){
//         printf("Real and distinct roots\n");
//     }
//     else if(D==0){
//         printf("Real and equal roots\n");
//     }
//     else{
//         printf("Roots are imaginary or we can also say that in the form of iota or say that complex roots");
//     }
//     getchar();
//     return 0;
// }

