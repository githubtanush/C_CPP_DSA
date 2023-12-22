//Assignment - 11
// //define class student and write a programme to enter details of student using ctor
// //in this you know about how to take input in a ctor
// #include<iostream>
// using namespace std;
// class Student{
//     private:
//         int roll_no;
//         char name[20];
    
//     public:
//         Student(){
//             cout<<"Enter your Roll_Number : ";
//             cin>>roll_no;
//             cout<<"Enter your name : ";
//             cin.ignore();//to remove all the previous garbage stuff
//             cin.getline(name,20);
//         }
    
// };
// int main(){
//     Student s1;
//     return 0;
// }


//Date with the use of initializers
// #include<iostream>
// using namespace std;
// class Date{
//     private:
//         int d,m,y;

//     public:
//         Date(): d(1),m(1),y(2000) {};
//         Date(int d,int m, int y): d(d),m(m),y(y) {};
    
//         void showDate(){
//             cout<<"Date : "<<d<<" Month : "<<m<<" Year : "<<y;
//         }
// };
// int main(){
//     Date d1(28,9,2003);
//     d1.showDate();
//     return 0;
// }



//Room class
// #include<iostream>
// using namespace std;
// class Room{
//     private:
//         int room_no;
//         int room_type;
//         bool is_AC;
//         double price;
    
//     public:
//         Room(): room_no(0),room_type(0),is_AC(false),price(0) {};
//         Room(int x,int y,bool z, double c): room_no(x),room_type(y),is_AC(z),price(c) {};

//     void showRoom(){
//         cout<<"room_no is : "<<room_no<<" room_type is : "<<room_type<<" AC is : "<<is_AC<<" price is : "<<price<<endl;
//     }

// };
// int main(){
//     Room r1(4,3,true,32.23);
//     r1.showRoom();
//     return 0;
// }



// //Radius class
// #include<iostream>
// using namespace std;
// class Circle{
//     private:
//     int radius;

//     public:
//     Circle(){
//         radius = 1;
//     }
//     Circle(int r){
//         radius = r;
//     }
//     void showCircle(){
//         cout<<"Radius is : "<<radius;
//     }

// };
// int main(){
//     Circle c1(8);
//     c1.showCircle();
//     return 0;
// }


// //class number pointer vali class aa gyi dosto
// #include<iostream>
// using namespace std;
// class Numbers{
//     private:
//     int size;
//     int *arr;

//     public:
//     Numbers(){
//         size = 0;
//         *arr = 0;
//     }
//     Numbers(int n){
//         size = n;
//         arr = new int[size]; 
//     }
//     ~Numbers(){
//         delete []arr;
//     }
//     Numbers(Numbers &n){
//         size = n.size;
//         arr=new int[size];
//         for(int i = 0; i < size;i++){
//             arr[i]=n.arr[i];
//         }
//     }
//     void showData(){
//     cout<<"Size is : "<<size;
// }

// };
// int main(){
//     Numbers n1(8);
//     Numbers n2 = n1;
//     n1.showData();
//     cout<<endl;
//     n2.showData();
//     return 0;
// }