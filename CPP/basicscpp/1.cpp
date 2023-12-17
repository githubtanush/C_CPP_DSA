// //no. is even or odd
// #include<iostream>
// using namespace std;
// int check_Even(int n){
//     if(n%2){
//         return 0;
//     }
//     return 1;
// }
// int main(){
//     int n;
//     cout<<"Enter the number you want to check that it is odd or even : ";
//     cin>>n;
//     int p = 0;
//     if(p==check_Even(n)){
//         cout<<"Given enter number is odd";
//     }
//     else{
//         cout<<"Given enter number is even";
//     }

//     return 0;
// }


// //factorial
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int fact = 1;
//     while(n){
//         fact = fact * n;
//         n--;
//     }
//     return fact;
// }
// int main(){
//     int n;
//     cout<<"Enter the number for which u find factorial : ";
//     cin>>n;
//     int p = factorial(n);
//     cout<<"The answer for given factorial number is :"<<p;
//     return 0;
// }


//Swap function
// #include<iostream>
// using namespace std;
// void swap(int *x,int *y){
//     int t = *x;
//     *x=*y;
//     *y=t;
// }
// int main(){
//     int a,b;
//     cout<<"Enter the two values for which u want to swap : ";
//     cin>>a>>b;
//     cout<<"Before Swapping : "<<a<<" "<<b;
//     swap(a,b);
//     cout<<endl<<"After Swapping : "<<a<<" "<<b;
//     return 0;
// }


// //L_C_M
// #include<iostream>
// using namespace std;
// int L_C_M(int x, int y){
//     int i;
//     for(i = x>y?x:y; i<=x*y;i++){
//         if(i%x==0 && i%y==0){
//             break;
//         }
//     }
//     return i;
// }
// int main(){
//     int a,b;
//     cout<<"Enter the two number for which in between u find L_C_M : ";
//     cin>>a>>b;
//     int p = L_C_M(a,b);
//     cout<<"The value given 2 numbers lcm is : "<<p;
//     return 0;
// }


// //prime or not 
// #include<iostream>
// using namespace std;
// int check_prime(int n){
//     for(int i = 2; i < n; i++){
//         if(n%i==0){
//             return 1;
//         }
//     }
//     return 0;
// }
// int main(){
//     int n;
//     cout<<"Enter the number n for which u want to check it is prime or not : ";
//     cin>>n;
//     int p = 1;
//     if(p==check_prime(n)){
//         cout<<"The given no. is not a prime no.";
//     }
//     else{
//         cout<<"The given no. is a prime no.";
//     }
//     return 0;
// }