// //class cuboid make and access all by instance member variable 
// //mainly this is ctor
// #include<iostream>
// using namespace std;
// class Cuboid{
//     private:
//         int length,breadth,height;

//     public:
//     Cuboid(){
//         length = 0; 
//         breadth = 0; 
//         height = 0;
//     }
//     void setData(int x,int y, int z){
//         length=x;
//         breadth=y;
//         height=z;
//     }
//     void showData(){
//         cout<<"Length of the cuboid is : "<<length<<endl;
//         cout<<"Breadth of the cuboid is : "<<breadth<<endl;
//         cout<<"Height of the cuboid is : "<<height<<endl;
//     }
    
// };
// int main(){
//     Cuboid c1;
//     c1.showData();
//     return 0;
// }


// //ctor 2
// #include<iostream>
// #include<string.h>
// using namespace std;
// class Customer{
//     private:
//         int cust_id,email,mobile;
//         string name;
//
//     public:
//     Customer(){
//         cust_id = 0; 
//         email = 0; 
//         mobile = 0;
//         name = '\0';
//     }
//     Customer(int x,int y, int z,string n){
//         cust_id=x;
//         email=y;
//         mobile=z;
//         name = n;
//     }
//     void setData(int x,int y, int z,string n){
//         cust_id=x;
//         email=y;
//         mobile=z;
//         name = n;
//     }
//     void showData(){
//         cout<<cust_id<<" "<<email<<" "<<mobile<<" "<<name;
//     }

// mehod 2
    // private:
    //     int cust_id;
    //     char name[20];
    //     char email[40];
    //     char mobile[10];
    
    // public:
    //     Customer(){
    //         cust_id = 0;
    //         strcpy(name,"Anonymous");
    //         strcpy(email,"xyz@gmail.com");
    //         strcpy(mobile,"0000000000");
    //     }
    //     Customer(int x,char n[],char e[],char m[]){
    //         cust_id = x;
    //         strcpy(name,n);
    //         strcpy(email,e);
    //         strcpy(mobile,m);
    //     }
    
// };
// int main(){
//     Customer c1(32,342,342,"Tanush");
//     c1.showData();
//     return 0;
// }


//Time class 
//class cuboid make and access all by instance member variable 
// //mainly this is ctor
// #include<iostream>
// using namespace std;
// class Time{
//     private:
//         int hr,min,sec;

//     public:
//     Time(){
//         hr = 0; 
//         min = 0; 
//         sec = 0;
//     }
    
//     Time(int x,int y, int z){
//         hr=x;
//         min=y;
//         sec=z;
//         normalize();
//     }
    
//     void normalize(){
//         min += sec/60;
//         sec = sec%60;
//         hr += min/60;
//         min = min%60;
//     }
//     void showData(){
//         cout<<hr<<"hr"<<" "<<min<<"min"<<" "<<sec<<"sec"<<endl;
//     }
    
// };
// int main(){
//     Time t1(3,65,80);
//     t1.showData();
//     return 0;
// }



// // mainly this is ctor
// #include<iostream>
// #include<string.h>
// using namespace std;
// class Book{
//     private:
//         bool Booked;
//         string title;
//         int price;
    
//     public:
//     Book(){
//         Booked = true; 
//         title = '\0'; 
//         price = 0;
//     }
    
//     Book(int x,string y, int z){
//         Booked=x;
//         title=y;
//         price=z;
        
//     }
    
//     void showData(){
//         cout<<Booked<<" ";
//         cout<<title<<" ";
//         cout<<price<<endl;
//     }
    
// };
// int main(){
//     Book b1(false,"Tanush",343);
//     b1.showData();
//     return 0;
// }


// //Complex class
// #include<iostream>
// using namespace std;
// class Complex{
//     private:
//         int a,b;
    
//     public:
//     Complex(int x,int y){
//         a = x;
//         b = y;
//     }

//     void showData(){
//         cout<<"a = "<<a<<" "<<" b = "<<b<<"i"<<endl;
//     }
// };
// int main(){
//     //When default ctor is not there then written like this;
//     Complex c1[5]={Complex(1,2),Complex(3,4),Complex(5,6),Complex(7,8),Complex(9,10)};
//     for(int i = 0 ; i < 5;i++){
//     c1[i].showData();
//     }
//     return 0;
// }