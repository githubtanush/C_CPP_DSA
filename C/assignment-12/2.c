// // programme to print half triangle
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number n for how much big u want to print : ");
//     scanf("%d",&n);
//     for(int i = 1; i<=n;i++){
//         for(int j = 1; j <= n; j++){
//             if(j>=(n+1)-i && j<=n){
//                 printf("* ");
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     getchar();
//     return 0;
// }


// // programme to print triangle
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number n for how much big u want to print : ");
//     scanf("%d",&n);
//     for(int i = 1; i<=n;i++){
//         for(int j = 1; j <= 2*n-1; j++){
//             if(j>=(n+1)-i && j<=(n-1)+i){
//                 printf("* ");
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     getchar();
//     return 0;
// }

// //programme to print fibonnaci pattern
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number n for how much big u want to print : ");
//     scanf("%d",&n);
//     for(int i = 1; i<=n;i++){
//         int k = 1;
//         for(int j = 1; j <= 2*n-1; j++){
//             if(j>=(n+1)-i && j<=(n-1)+i){
//                 printf("%d ",k);
//                 j<n?k++:k--;
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     getchar();
//     return 0;
// }


// //programme of half left triangle
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number n for how much big u want to print : ");
//     scanf("%d",&n);
//     for(int i = 1; i<=n;i++){
//         char c = 'A';
//         for(int j = 1; j <= n; j++){
//             if(j>=1&& j<=(n+1)-i){
//                 printf("%c ",c);
//                 c++;
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     getchar();
//     return 0;
// }


// //programme to print ulta triangle ABC vala
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number n for how much big u want to print : ");
//     scanf("%d",&n);
//     for(int i = 1; i<=n;i++){
//         char m = 'A';
//         for(int j = 1; j <= 2*n-1; j++){
//             if(j>=i && j<=2*n-i){
//                 printf("%c ",m);
//                 j<n?m++:m--;
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     getchar();
//     return 0;
// }




// //programme to print ulta triangle 101 vala///////////////////////////////
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number n for how much big u want to print : ");
//     scanf("%d",&n);
//     for(int i = 1; i<=n;i++){
//         int m = 0;
//         int p = 1;
//         for(int j = 1; j <= 2*n-1; j++){
//             if(j>=i+1 && j<=2*n-1-i){
//                 printf("%d ",m);
//             }
//             else{
//                 if(j==i && j==2*n-1-i)
//                     printf("  ");
//                 else
//                 printf("%d ",p);
//             }
//         }
//         printf("\n");
//     }
//     getchar();
//     return 0;
// }


// //programme half left triangle vala
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number n for how much big u want to print : ");
//     scanf("%d",&n);
//     for(int i = 1; i<=n;i++){
//         int m = (n+1)-i;
//         for(int j = 1; j <= n; j++){
//             if(j>=1&& j<=(n+1)-i){
//                 printf("%d ",m);
//                 m--;
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     getchar();
//     return 0;
// }


// //programme two in one triangle
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value for n for that how much big u want to print : ");
//     scanf("%d",&n);
//     for(int i = 1; i<=n;i++){
//         int r;
//         i<=(n+1)/2?(r=i):(r=n+1-i);
//         for(int j = 1; j<=n;j++){
//             if(j>=(n+1)/2+1-r && j<=(n+1)/2-1+r){
//                 printf("* ");
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     getchar();
//     return 0;
// }