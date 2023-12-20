// #include<iostream>
// using namespace std;
// class Complex{
//     int a,b;
//     public:
//     void setvalue(int x,int y){
//         a = x;
//         b = y;
//     }
//     void showData(){
//         cout<<"x = "<<a<<"\ny = "<<b<<"i";
//     }
// };
// int main(){
//     Complex c1,c2;
//     c1.setvalue(3,8);
//     c1.showData();
//     return 0;
// }


// #include<iostream>
// using namespace std;
// 2 Time class 
// class Time{
//     int a,b,c;
//     public:
//     void settime(int x, int y , int z){
//         a = x;
//         b = y; 
//         c = z;
//     }
//     void showTime(){
//         cout<<a<<" hr "<<b<<" min "<<c<<" sec";
//     }
// };

// //3.Date class
// class Date{
//     int a,b,c;
//     public:
//     void setDate(int x,int y , int z){
//         a = x;
//         b = y;
//         c = z;
//     }
//     void showDate(){
//         cout<<"d="<<a<<" m="<<b<<" y="<<c;
//     }
// };
// int main(){

//     //2 Time
//     // Time t1,t2;
//     // t1.settime(3,45,20);
//     // t1.showTime();

//     //3 Date
//     Date d1,d2;
//     d1.setDate(31,12,2022);
//     d1.showDate();
//     return 0;
// }


// //4 31-12-2022 31-dec-2022
// #include<iostream>
// using namespace std;
// class Date{
//     int a,b,c;
//     public:
//     void setDate(int x,int y , int z){
//         a = x;
//         b = y;
//         c = z;
//     }
//     char* getMonthName(){
//         switch(b){
//             case 1:
//                 return "Jan";
//                 break;
//             case 2:
//                 return "Feb";
//                 break;
//             case 3:
//                 return "Mar";
//                 break;
//             case 4:
//                 return "Apr";
//                 break;
//             case 5:
//                 return "May";
//                 break;
//             case 6:
//                 return "Jun";
//                 break;
//             case 7:
//                 return "Jul";
//                 break;
//             case 8:
//                return "Aug";
//                break;
//             case 9:
//                 return "Sep";
//                 break;
//             case 10:
//                 return "Oct";
//                 break;
//             case 11:
//                 return "Nov";
//                 break;
//             case 12:
//                 return "Dec";
//                 break;
//             default:
//                 cout<<"you enter an Invalid number";
//         }

//     }
//     void showDate(int format = 2){
//         if(format == 1)
//         cout<<a<<"-"<<b<<"-"<<c;
//         else
//             cout<<a<<"-"<<getMonthName()<<"-"<<c;
//     }
// };
// int main(){
//     Date d1,d2;
//     d1.setDate(31,12,2022);
//     d1.showDate();
//     return 0;
// }


#include<iostream>
using namespace std;
class Circle{
    int r;

    public:
        void setradius(int a){
        r = a;
        }
        void getradius(){
            cout<<"Value of radius is : "<<r<<endl;
        }
        void area(){
            float s =  3.14 * r * r;
            cout<<"Area for circle is : "<<s<<endl;
        }
        void circumference(){
            float p =  2 * 3.14 * r ;
            cout<<"Circumference of circle is : "<<p<<endl;
        }
    
};
int main(){
    Circle m;
    m.setradius(5);
    m.getradius();
    m.area();
    m.circumference();
    return 0;
}
