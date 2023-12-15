// //Convert decimal to binary 
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n, i = 0, ans = 0;
//     printf("Enter the number for which u find binary : ");
//     scanf("%d",&n);
//     while(n!=0){
//         int bit = n & 1;
//         ans = bit * pow(10,i) + ans;
//         n = n>>1;
//         i++;
//     }
//     printf("The answer for the given decimal number in binary is : %d",ans);
//     getchar();
//     return 0;
// }



// //Convert binary to decimal
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n, i = 0, ans = 0;
//     printf("Enter the number for which u find decimal : ");
//     scanf("%d",&n);
//     while(n!=0){
//         int digit = n % 10;
//         ans = digit * pow(2,i) + ans;
//         n = n/10;
//         i++;
//     }
//     printf("The answer for the given binary number in decimal is : %d",ans);
//     getchar();
//     return 0;
// }