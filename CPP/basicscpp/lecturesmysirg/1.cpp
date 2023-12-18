// #include<iostream>
// using namespace std;
// int add(int,int,int=0);//Default argument helps us to that we donot create another function and function treat 1 less argument case automatically.and one more thing is that when we written =0 in 2nd int then it means we set second argument default value is zero and it has also one restriction if i was marking 0 default value as y then z must be zero socho ek daaga mein moti piro rah hai pehla hai phir dusra nhi hai phir sida tisra hai asa ho skta hai kya kehna ka matlab yeh hai jaah hmna default bna diyan to uske baad valo ko bhi default bnana compulsory hai
// int main(){
//     int a,b;
//     cout<<"Enter two numbers : ";
//     cin>>a>>b;
//     cout<<"\nSum is : "<<add(a,b);
//     int c;
//     cout<<"\nEnter three numbers : ";
//     cin>>a>>b>>c;   
//     cout<<"\nSum is : "<<add(a,b,c);
//     // f1(a,b);//call by value | c language
//     // f1(&a,&b);//Call by refrence | c language
//     cout<<endl;
//     return 0;
// }
// int add(int x,int y,int z){
//     return x+y+z;
// }

// // void f1(int x,int y){//Ordinary variable
// // }
// // void f1(int *x,int *y){//pointer variable 
// // }


// #include<iostream>
// using namespace std;
// int add(int , int );
// int add(int &, int & ,int &);
// int main(){
//     int a,b;
//     cout<<"Enter two numbers : ";
//     cin>>a>>b;
//     cout<<"Sum is : "<<add(a,b);
//     int c;
//     cout<<"Enter three numbers : ";
//     cin>>a>>b>>c;
//     cout<<"Sum is ; "<<add(a,b,c);
//     return 0;
// }
// int add(int x,int y){
//     return x + y;
// }
// int add(int &x,int &y,int &z){
//     return x + y + z;
// }



//polymorphism is a very good process when big project is played c is a syntax based language on the other hand cpp is more about the conceptual things
#include<iostream>
using namespace std;
int area(int , int );
float area(int &);
int main(){
    int a,b;
    cout<<"Enter two numbers for which u find area_of_rect: ";
    cin>>a>>b;
    cout<<"Area is : "<<area(a,b);
    int c;
    cout<<"Enter the raius for which u want area_of_circle : ";
    cin>>a;
    cout<<"Area is ; "<<area(a);
    return 0;
}
int area(int x,int y){
    return x * y;
}
float area(int &x){
    return 3.14*x*x;
}