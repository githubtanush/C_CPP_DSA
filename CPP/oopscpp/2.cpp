// #include<iostream>
// using namespace std;
// class Complex {
//     int a,b;
//     public:
//         void setData(int x,int y){
//             a = x;
//             b = y; 
//         }
//         void showData(){
//             cout<<"a = "<<a<<" b = "<<b<<"i";
//         }
//         Complex add(Complex C){
//             Complex temp;
//             temp.a = a + C.a;
//             temp.b = b + C.b;
//             return temp;
//         }
//         Complex sub(Complex C){
//             Complex temp;
//             if(a>C.a)
//                 temp.a = a - C.a;
//             else
//                 temp.a = C.a - a;
//             if(b>C.b)
//                 temp.b = b - C.b;
//             else
//                 temp.b = C.b - b;
//             return temp;
//         }
//         Complex mul(Complex C){
//             Complex temp;
//             temp.a = a * C.a - b * C.b;
//             temp.b = a * C.b + b * C.a;
//             return temp;
//         }
// };
// int main(){
//     Complex c1,c2,c3,c4,c5;
//     c1.setData(3,4);
//     c2.setData(8,9);
//     c1.showData();

//     cout<<endl;
//     c2.showData();

//     c3 = c1.add(c2);
//     cout<<endl;
//     c3.showData();

//     c4 = c1.sub(c2);
//     cout<<endl;
//     c4.showData();

//     c5 = c1.mul(c2);
//     cout<<endl;
//     c5.showData();

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Time{
//     int h,m,s;
//     public:
//         void settime(int x,int y,int z){
//             h = x;
//             m = y;
//             s = z;
//         }
//         void showtime(){
//             cout<<h<<" hr "<<m<<" min "<<s<<" sec";
//         }
//         void normalize(){
//             m+=s/60;
//             s%=60;
//             h+=m/60;
//             m%=60;
//         }
//         Time add(Time T){
//             Time temp;
//             temp.h = h + T.h;
//             temp.m = m + T.m;
//             temp.s = s + T.s;
//             temp.normalize();
//             return temp;
//         }
//         bool is_greater(Time t){
//             if(h>t.h)
//                 return true;
//             else if(t.h>h)
//                 return false;
//             else if(m>t.m)
//                 return true;
//             else if(m<t.m)
//                 return false;
//             else if(s>t.s)
//                 return true;
//             else
//                 return false;
//         }


// };
// int main(){
//     Time t1,t2,t3;
//     t1.settime(3,60,60);
//     t2.settime(4,89,90);
//     t1.showtime();
//     cout<<endl;
//     t2.showtime();
//     t3 = t1.add(t2);
//     cout<<endl;
//     t3.showtime();
//     cout<<endl;
//     t1.normalize();
//     t1.showtime();
//     bool t4 = t1.is_greater(t2);
//     cout<<endl<<t4;
//     // t3 = t1.add(t2);
//     // cout<<endl;
//     // t3.showtime();
//     return 0;
// }



