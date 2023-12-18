// #include<iostream>
// using namespace std;
// int check_prime(int n){
//      for(int i = 2; i<n;i++){
//             if(n%i==0)
//             return 0;
//         }
//         return 1;
// }
// void print_prime(int a,int b){
//     int x;
//     for(x = a<b?a:b; x<(a>b?a:b);x++){
//         if(check_prime(x)){
//             cout<<x<<" ";
//         }
//     }
// }
// int main(){
//     int a,b;
//     cout<<"Enter the two numbers which in between u find the prime numbers : ";
//     cin>>a>>b;
//     print_prime(a,b);
//     return 0;
// }


//highest value digit in a given number
// #include<iostream>
// using namespace std;
// int highest_digit (int n){
//     int max_digit= n%10;
//     n = n / 10;
//     while(n>0){
//         if(max_digit<n%10){
//           max_digit=n%10;
//         }
//         n=n/10;
//     }
//     return max_digit;
// }
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number which u want to check highest digit : ";
//     cin>>n;
//     int m = highest_digit(n);
//     cout<<m;
//     return 0;
// }


// // to find the highest digit  in a given number
// #include<iostream>
// using namespace std;
// int highest_digit(int n){
//     int max_digit = n % 10;
//     n = n /10;
//     while(n>0){
//     if(max_digit < n%10){
//         max_digit=n%10;
//     }
//     n = n / 10;
//     }
//     return max_digit;
// }
// int main(){
//     int n;
//     cout<<"Enter the number in which u find the highest value digit : ";
//     cin>>n;
//     cout<<highest_digit(n);
//     return 0;
// }



// //x raised to the power y
// #include<iostream>
// #include<iomanip>
// using namespace std;
// int x_y(int x,int y){
//     int p;
//     if(y>0){
//     p = pow(x,y);
//     }
//     else if(y==0){
//         p=1;
//     }
//     else{
//     p = pow(1/(double)x,(double)y);
//     }
//     return p;

// }
// int main(){
//     int x,y;
//     cout<<"Enter the value for x it means that number which power you check : ";
//     cin>>x;
//     cout<<"Enter the power for that number you want to check : ";
//     cin>>y;
//     cout<<"The answer is : "<<x_y(x,y);
//     return 0;
// }


// //pascal triangle
// #include<iostream>
// using namespace std;
// int fact(int n){
//     int fact = 1;
//     while(n){
//         fact = fact * n;
//         n--;
//     }
//     return fact;
// }
// int combi(int n,int r){
//     return fact(n)/fact(r)/fact(n-r);
// }
// void print_pascal_triangle(int n){
//     for(int i = 1; i<=n; i++){
//          int r = 0;
//          int flag = 1;
//         for(int j = 1; j<=2*n-1;j++){
//         if(j>=(n+1)-i && j<=(n-1)+i){
//             if(flag){
//             cout<<combi(i-1,r++);
//             }
//             else{
//                 cout<<" ";
//             }
//             flag = 1 - flag;
//         }
//         else{
//         cout<<" ";
//         }
//     }
//     cout<<endl;
// }
// }
// int main(){
//     int n;
//     cout<<"Enter the number which u find the pascal triangle : ";
//     cin>>n;
//     print_pascal_triangle(n);
//     return 0;
// }

// //fibonnaci series
// #include<iostream>
// using namespace std;
// int fibonnaci(int n){
//     int n1 = -1, n2 = 1, n3=0,i;
//     for(int i = 0; n3 <= n;i++){   
        
//         n3 = n1 + n2;
//         if(n==n3)
//             return 1;
//         n1 = n2;
//         n2 = n3;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cout<<"Enter the number till u want to print the fibonnaci series : ";
//     cin>>n;
//     if(fibonnaci(n)==0){
//         cout<<"Given number is not in the fibonnaci series";
//     }
//     else{
//         cout<<"Given number is in the fibonnaci series";
//     }
//     return 0;
// }
