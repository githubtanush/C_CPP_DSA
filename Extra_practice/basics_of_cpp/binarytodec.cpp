//decimal to binary 
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value in decimal number that u find in binary : ";
//     cin>>n;
//     int ans = 0,i=0;
//     while(n!=0){
//             int p = n & 1;
//             ans = (p * pow(10,i))+ans;
//             n = n >> 1 ;
//             i++;
//         }
//         cout<<endl<<"The value for this decimal number in binary is : "<<ans;
//         return 0;
// }

//binary to decimal 
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value in decimal number that u find in binary : ";
//     cin>>n;
//     int ans = 0,i=0;
//     while(n!=0){
//             int p = n % 10;
//             ans = (p * pow(2,i))+ans;
//             n = n / 10 ;
//             i++;
//         }
//         cout<<endl<<"The value for this decimal number in binary is : "<<ans;
//         return 0;
// }