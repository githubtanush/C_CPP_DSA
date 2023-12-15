// //A number is prime or not 
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n,i;
//     printf("Enter a nubmer for which u check it is prime or not : ");
//     scanf("%d",&n);
//     int s = sqrt(n);
//     for(i = 2; i<=s;i++){
//         if(n%i==0){
//             break;
//         }
//     }
//     if(i==s+1){
//             printf("Prime\n");
//         }
//         else{
//             printf("Not Prime\n");
//         }
//     getchar();
//     return 0;
// }


// //Write a programme to find the reverse of a number 
// #include<stdio.h>
// int main(){
//     int n,ans = 0, lock=1 , count = 0,k;
//     printf("Enter the number for which u find reverse : ");
//     scanf("%d",&n);
//     while(n!=0){
//         k = n % 10;
//         if(k==0 && lock){
//             count++;
//         }
//         else{
//             lock = 0;
//         }
//         ans = ans * 10 + k;
//         n = n/10;
//     }
//     printf("The reverse of a given number is : ");
//     while(count--){
//         printf("%c",'0');
//     }
//     printf("%d",ans);
//     getchar();
//     return 0;
// }


// //LCM of two numbers
// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter both two numbers for which u find L.C.M : ");
//     scanf("%d %d",&a,&b);
//     int L_C_M;
//     for(L_C_M=a>b?a:b; L_C_M<=a*b; L_C_M++){
//         if(L_C_M%a==0 && L_C_M%b==0){
//             printf("%d",L_C_M);
//             break;
//         }
//     }
//     getchar();
//     return 0;
// }