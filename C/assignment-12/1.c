// //HCF of two numbers or gcd
// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter the two numbers for which u find HCF : ");
//     scanf("%d %d",&a,&b);
//     int H_C_F;
//     //by eucledian algorithm
//     while(a!=b){
//         if(a>b){
//             a = a-b;
//         }
//         else{
//             b = b - a;
//         }
//     }
//     H_C_F = b;
//     printf("The H.C.F for this two numbers is %d",H_C_F);
//     getchar();
//     return 0;
// }


// //fibonnaci series
// #include<stdio.h>
// int main(){
//     int n, n1 = 0 , n2 = 1,n3;
//     printf("Enter the number till how many number you want to print the fibonnaci series : ");
//     scanf("%d",&n);
//     for(int i = 0; i <= n;i++){   
//            if(i==0){
//             printf("%d",n1);
//             continue;
//             }
//             if(i==1){
//             printf("%d",n2);
//             continue;
//         }
//         n3 = n1 + n2;
//         n1 = n2;
//         n2 = n3;
//     }
//     printf("The fibonnaci value for this %d is %d",n,n3);
//     getchar();
//     return 0;
// }