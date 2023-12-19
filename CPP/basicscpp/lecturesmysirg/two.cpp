// encapsulation mein structure or class kisi ka bhi use krr skte hai but class ko jada oops oriented maana jata hai kyuki structure c mein bhi tha
//structure ko hmna cpp mein bhi chlna ko allow kiya taaki hm c  vala sb kuch use kr ske cpp mein that is called backward compatibility
//backward compatability in which lower version has also allowed to work
//esliye class ko jada recommend kiya jaata hai kyuki structure c mein bhi tha so c is most oops oriented
#include<iostream>
using namespace std;
class Complex{
    private:
    int a,b;

    public:
    void setValue(int x,int y){
        a=x;
        b=y;
    }
    // void showData(){
    //     cout<<a<<" "<<b<<"i"<<endl;
    // }
    void showData();
};
void Complex::showData(){//This is a way to define a function outside the class as a member function
        cout<<a<<" "<<b<<"i"<<endl;
    }
int main(){
    Complex a,b;
    a.setValue(3,4);
    a.showData();
    return 0;
}