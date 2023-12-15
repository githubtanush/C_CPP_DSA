// #include<stdio.h>

// int main(){
//     printf("hello \n Students\r children\n");
//     getchar();
//     return 0;
// }


//Convert decimal number to binary
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n;
//     printf("Enter the number for which u find binary : ");
//     scanf("%d",&n);
//     int ans = 0;
//     int i = 0;
//     while(n!=0){
//         int bit = n & 1;
//         ans = (bit * pow(10,i))+ans;
//         n = n >> 1;
//         i++;
//     }
//     printf("Answer is %d\n",ans);
//     getchar();
//     return 0;
// }


// //convert binary to decimal 
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n;
//     printf("Enter the number for which u find binary : ");
//     scanf("%d",&n);
//     int ans = 0;
//     int i = 0;
//     while(n!=0){
//         int digit = n % 10;
//         ans = ans + (digit*pow(2,i));
//         n = n/10;
//         i++;
//     }
//     printf("Answer is %d\n",ans);
//     getchar();
//     return 0;
// }


//Convert decimal to binary 
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n,ans = 0,i = 0;
//     printf("Enter the number for which u find binary : ");
//     scanf("%d",&n);
//     while(n!=0){
//     int bit = n & 1;
//     ans = (bit * pow(10,i)) + ans;
//     n = n>>1;
//     i++;
//     }
//     printf("Binary of the number is : %d\n",ans);
//     getchar();
//     return 0; 
// }

// //Convert  binary to decimal
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int ans = 0, i = 0, n;
//     printf("Enter the number for which u find decimal number : ");
//     scanf("%d",&n);
//     while(n!=0){
//         int digit = n % 10;
//         ans = (digit * pow(2,i)) + ans;
//         n = n / 10;
//         i++;
//     }
//     printf("Decimal number of this binary number is : %d",ans);
//     getchar();
//     return 0;
// }