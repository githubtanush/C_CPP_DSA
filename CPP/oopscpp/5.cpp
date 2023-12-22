//Assignment - 12
// //operator overloading
// #include<iostream>
// using namespace std;
// class Complex{
//     private:
//         int a,b;
//     public:
//     Complex(){
//         cout<<"default ctor called..."<<endl;
//         a = 0;
//         b = 0;
//     }
//     Complex(int x,int y){
//         cout<<"Two argument ctor called..."<<endl;
//         a = x;
//         b = y;
//     }
//     Complex(int x){
//         cout<<"One argument ctor called..."<<endl;
//         a = x;
//         b = 0;
//     }
//     void showData(){
//         cout<<" a = "<<a<<" b = "<<b<<"i"<<endl;
//     }
//     Complex operator+(Complex C){
//         Complex temp;
//         temp.a = a + C.a;
//         temp.b = b + C.b;
//         return temp;
//     }
//     Complex operator*(Complex C){
//         Complex temp;
//         temp.a = a * C.a - b * C.b;
//         temp.b = a * C.b + b * C.a;
//         return temp;
//     }
//     Complex operator-(Complex C){
//         Complex temp;
//         if(a>C.a){
//             temp.a = a - C.a;
//         }
//         else{
//             temp.a = C.a - a;
//         }
//         if(b>C.b){
//             temp.b = b - C.b;
//         }
//         else{
//             temp.b = C.b - b;
//         }
//         return temp;
//     }
//     bool operator==(Complex C){
//         if(a == C.a && b == C.b){
//             return true;
//         }
//         return false;
//     }

// };
// int main(){
//     Complex c1(3,4),c2(5),c3,c4,c5,c6(5,5),c7(5,5);
//     // c1 = c1.operator+(c2);
//     c3 = c1 + c2;
//     c4 = c1 * c2;
//     c5 = c1 - c2;
//     bool c8 = c6==c7;
//     c1.showData();
//     c2.showData();
//     c3.showData();
//     c4.showData();
//     c5.showData();
//    cout<<c8;
//     return 0;
// }


// //Matrix Class
// #include<iostream>
// using namespace std;
// class Matrix{
//     private:
//         int A[3][3];
    
//     public:
//     void input_Array(){
//         cout<<"Enter 9 elements for this 3 * 3 matrix : ";
//         for(int i = 0; i < 3; i++){
//             for(int j = 0; j < 3; j++){
//                 cin>>A[i][j];
//             }
//         }
//     }
//      void output_Array(){
//         for(int i = 0; i < 3; i++){
//             for(int j = 0; j < 3; j++){
//                 cout<<A[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }
//     Matrix operator+(Matrix M){
//         Matrix temp;
//         for(int i = 0; i < 3; i++){
//             for(int j = 0; j < 3; j++){
//                 temp.A[i][j]=A[i][j]+M.A[i][j];
//             }
//             cout<<endl;
//         }
//             return temp;
//     }
//     Matrix operator-(Matrix M){
//         Matrix temp;
//         for(int i = 0; i < 3; i++){
//             for(int j = 0; j < 3; j++){
//                 temp.A[i][j]=A[i][j]-M.A[i][j];
//             }
//             cout<<endl;
//         }
//             return temp;
//     }

//     Matrix operator*(Matrix M){
//         Matrix temp;
//         int k,sum;
//         for(int i = 0; i < 3; i++){
//             for(int j = 0; j < 3; j++){
//                 for(k =0,sum = 0; k<3;k++){
//                 sum = sum + (A[i][k]*M.A[k][j]);
//                 }
//                 temp.A[i][j]=sum;
//             }
//             cout<<endl;
//         }
//             return temp;
//     }

    
// };
// int main(){
//     Matrix m1,m2,m3,m4,m5;
//     m1.input_Array();
//     m2.input_Array();
//     cout<<"You enter the first matrix input value like this : "<<endl;
//     m1.output_Array();
//     cout<<"You enter the Second matrix input value like this : "<<endl;
//     m2.output_Array();
//     m3 = m1 + m2;
//     m3.output_Array();
//     m4 = m3 - m1;
//     m4.output_Array();
//     m5 = m1 * m2;
//     m5.output_Array();
//     return 0;
// }
// // 1 2 3 4 5 6 7 8 9 
// 1 4 7 2 5 8 3 6 9 



//Class time
#include<iostream>
using namespace std;
class Time{
    private:
        int hr,min,sec;

    public:
    Time(){

    }
        Time(int x,int y ,int z){
            hr = x;
            min = y;
            sec = z;
            min = min + sec/60;
            sec = sec%60;
            hr = hr + min/60;
            min = min %60;
        }
       bool operator>(Time T){
            if(hr>T.hr){
                return true;
            }
            else if(hr<T.hr){
                return false;
            }
            else if(min>T.min){
                return true;
            }
            else if(min<T.min){
                return false;
            }
            else if(sec>T.sec){
                return true;
            }
            else{
                return false;
            }

        }
        Time operator++(int){//post
            Time temp = *this;
            sec++;
            min = min + sec/60;
            sec = sec % 60;
            hr = hr + min/60;
            min = min % 60;
            return temp;
        }
        Time operator++(){//pre
           sec++;
            min = min + sec/60;
            sec = sec % 60;
            hr = hr + min/60;
            min = min % 60;
            return *this;
        }
        void showTime(){
            cout<<hr<<"hr "<<min<<"min "<<sec<<"sec "<<endl;
        }
        Time operator+(Time t){
            Time temp;
            temp.hr = hr + t.hr;
            temp.min = min + t.min;
            temp.sec = sec + t.sec;
            temp.min = temp.min + temp.sec/60;
            temp.sec = temp.sec % 60;
            temp.hr = temp.hr + temp.min/60;
            temp.min = temp.min % 60;
            return temp;
        }
};
int main(){
    Time t1(3,45,87),t2(7,34,98),t4;
    bool t3 = t1>t2;
    cout<<t3<<endl;
    t1.showTime();
    t2.showTime();
    t1++;
    t1.showTime();
    t4 = t1 + t2;
    t4.showTime();

    return 0;
}