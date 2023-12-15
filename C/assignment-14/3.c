// #include<stdio.h>
// int Check_prime(int n){
//     for(int i = 2; i < n;i++){
//         if(n%i==0){
//             return 1;
//         }
//     }
//     return 0;
// }
// void print_prime(int a,int b){
//     for(int i = a; i <= b;i++){
//         if(!(Check_prime(i))){
//             printf("%d",i);
//         }
//     }
// }
// int next_prime(int n){
//     while(Check_prime(++n));
//     return n;
// }
// int main(){
//     int n;
//     printf("Enter the number for which u want to check that it is prime or not : ");
//     scanf("%d",&n);
//     // int a,b;
//     // printf("Enter the two number for which u want to find in between which is prime number : ");
//     // scanf("%d %d",&a,&b);
//     // print_prime(a,b);
//     int e = next_prime(n);
//     printf("The next prime after given prime number is : %d",e);
//     int d = Check_prime(n);
//     if(d==0){
//         printf("The given number is a prime number.\n");
//     }
//     else{
//          printf("The given number is not a prime number.\n");
//     }
//     getchar();
//     return 0;
// }