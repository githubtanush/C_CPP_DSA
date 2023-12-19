//1.Solve the swapping problem by refrence variable
// #include<iostream>
// using namespace std;
// void swap(int &x,int &y){
//     int t = x;
//     x = y;
//     y = t;
// }
// int main(){
//     int a,b;
//     cout<<"Enter the variable you want to swap by refrence variable: ";
//     cin>>a>>b;
//     cout<<"\nBefore swapping : "<< "a = "<<a<<" b = "<< b;
//     swap(a,b);
//     cout<<"\nAfter swapping : "<< "a = "<<a<<" b = "<< b;
//     return 0;
// }




//default argument able to add 2 or 3 numbers
// #include<iostream>
// using namespace std;
// int sum(int x,int y, int z=0){
//     return x + y + z;
// }
// int main(){
//     cout<<"Enter 2 numbers for which u find sum : ";
//     int a,b;
//     cin>>a>>b;
//     cout<<"\nSum of 2 numbers is : "<<sum(a,b)<<endl;
//     cout<<"Enter 3 numbers for which u find sum : ";
//     int c;
//     cin>>a>>b>>c;
//     cout<<"\nSum of 3 numbers is : "<<sum(a,b,c)<<endl;
//     return 0;
// }


// //define overloaded function to calculate area of circle , rectangle and triangle
// #include<iostream>
// #include<math.h>
// using namespace std;
// int area(int a,int b){
//     return a * b;
// }
// float area(int r){
//     return 3.14*r*r;
// }
// float area(int a,int b,int c){
//     float s = (a + b + c)/2.0;
//     float ar=sqrt(s * (s - a) * (s - b) * (s - c));
//     return ar;
// }
// int main(){
//     int a,b;
//     cout<<"Enter the two numbers for which u find area of rectangle : ";
//     cin>>a>>b;
//     cout<<"\n Area of rectangle for this two numbers is : "<<area(a,b)<<endl;
//     int r;
//     cout<<"Enter the radius for which u find area of circle : ";
//     cin>>r;
//     cout<<"\nArea of circle for this radius is : "<<area(r)<<endl;
//     int h,m;
//     cout<<"Enter the base and height for which base and height u find area of triangle : ";
//     cin>>h>>m;
//     cout<<"\nArea of triangle for this base and height is : "<<area(h,m)<<endl;
//     return 0;
// }