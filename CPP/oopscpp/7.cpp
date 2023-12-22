//Assignment = 14
#include<iostream>
using namespace std;
class Complex{
    private:
        int a,b;
    
    public: 
        Complex(int x,int y){
            a = x;
            b = y;
        }
        void showData(){
            cout<<"a = "<<a <<" b = "<<b<<"i";
        }
        friend Complex operator+(Complex,Complex);
        friend Complex operator-(Complex,Complex);
        friend Complex operator*(Complex,Complex);
        
};
Complex operator+(Complex t1,Complex t2){
    Complex temp(0,0);
    temp.a = t1.a + t2.a;
    temp.b = t1.b + t2.b;
    return temp;
}
Complex operator-(Complex t1,Complex t2){
    Complex temp(0,0);
    temp.a = t1.a - t2.a;
    temp.b = t1.b - t2.b;
    return temp;
}
Complex operator*(Complex t1,Complex t2){
    Complex temp(0,0);
    temp.a = t1.a*t2.a - t1.b*t2.b;
    temp.b = t1.a*t2.b + t2.a*t1.b;
    return temp;
}
int main(){
    Complex c1(3,4),c2(5,7),c3(0,0),c4(0,0),c5(0,0);
    c3 = c1 + c2;
    c4 = c1 - c2;
    c5 = c1 * c2;
    cout<<endl;
    c3.showData();
    cout<<endl;
    c4.showData();
    cout<<endl;
    c5.showData();
    return 0;
}