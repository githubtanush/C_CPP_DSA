// #include<stdio.h>
// int max_of_four(int a, int b, int c,int d){
//    int max;
//    if(a>b){
//     max = a>c?a>d?a:d:c>d?c:d;
//    }
//    else{
//     max = b>c?b>d?b:d:c>d?c:d;
//    }
//    return max;
// }
// int main(){
//     int a,b,c,d;
//     scanf("%d %d %d %d",&a,&b,&c,&d);
//     int ans = max_of_four(a,b,c,d);
//     printf("%d",ans);
//     getchar();
//     return 0;
// }


// //pattern
// #include<stdio.h>
// int main(){
//     int n,k,r;
//     printf("Enter the number that how big u see pattern : ");
//     scanf("%d",&n);
//     for(int i = 1,r=0; i <= 2*n-1 ; i++){
//         i<=n?r++:r--;
//         k = n;
//         for(int j = 1; j <= 2*n-1 ;j++){
//             if(j>=r && j <= 2*n-r){
//                 printf("%3d ",k);
//             }
//             else{
//                 if(j<n){
//                     printf("%3d ",k);
//                     k--;
//                 }
//                 else{
//                     k++;
//                     printf("%3d ",k);
//                 }
//             }
//         }
//         printf("\n");
//     }
//     getchar();
//     return 0;
// }


// //prime or not tsrs
// #include<stdio.h>
// #include<math.h>
// int is_prime(int n){
//     int s = sqrt(n);
//     for(int i = 2 ; i <= s; i++){
//         if(n%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main(){
//     int n;
//     printf("Enter a number for which u check that it is prime or not : ");
//     scanf("%d",&n);
//     if(is_prime(n)){
//         printf("Prime");
//     }
//     else{
//         printf("Not prime");
//     }
//     getchar();
//     return 0;
// }

//write a programme to print all prime numbers from a to b , where a and b value will be taken has an argument
// #include<stdio.h>
// int is_prime(int n){
//     for(int i = 2 ; i < n; i++){
//         if(n%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }
// void print_prime(int a, int b){
//     int x;
//     for(x=a;x<=b;x++){
//         if(is_prime(x)){
//             printf("%d ",x);
//         }
//     }
// }
// int main(){
//     // int n;
//     // printf("Enter a number for which u check that it is prime or not : ");
//     // scanf("%d",&n);
//     print_prime(10,20);
//     getchar();
//     return 0;
// }


// //Write a programme to find first next prime number after a given number
// #include<stdio.h>
// int is_prime(int n){
//     for(int i = 2 ; i < n; i++){
//         if(n%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }
// void print_prime(int a, int b){
//     int x;
//     for(x=a;x<=b;x++){
//         if(is_prime(x)){
//             printf("%d ",x);
//         }
//     }
// }
// int next_prime(int n){
//     while(!(is_prime(++n)));
//     return n;
// }
// int main(){
//     int n;
//     printf("Enter a number for which u check that it is prime or not : ");
//     scanf("%d",&n);
//     int d = is_prime(n);
//     // printf("%d",next_prime(n));
//     getchar();
//     return 0;
// }