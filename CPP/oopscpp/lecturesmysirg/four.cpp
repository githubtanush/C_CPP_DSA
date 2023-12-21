//compiler made ctor of two types default ctor and copy ctor
//when there is at least ctor in class but there is we not made copy ctor then compiler does not made default ctor but it is made copy  ctor
//if u made copy ctor also explicitely then compiler don't make copy ctor by itself

//Why we made copy ctor in class


// //Copy ctor
// //Constructor Overloading
// #include<iostream>
// using namespace std;
// class Complex{
//     private:
//         int a,b;

//     public:
//     //Default ctor
//         Complex(){
//             cout<<"Zero argument ctor called...."<<endl;
//             a = 0; 
//             b = 0;
//         }
//     //Parametrized ctor
//         Complex(int x,int y){
//             cout<<"Two argument ctor called...."<<endl;
//             a = x;
//             b = y;
//         }
//     // Parametrized ctor of 1 argument
//         Complex(int x){
//             cout<<"One argument ctor called...."<<endl;
//             a = x;
//             b = 0;
//         }

//     //Copy ctor 
//     // Complex(Complex C){//this show error because at that place they do infinite recursion because object bnta hai to ctor call hota hai 
//     // or C bhi to object hai matlab ctor call hoga or phir us c ka bhi ctor call ho rah //C formal argument mein bn rah hai to pehla 
//     //thori call hoga never ending recursion is start
//     Complex(Complex &C){//So we always made refrence at ctor becuase then at that time not object is call it refers c2 so no error
//         cout<<"Copy ctor called...."<<endl;
//         a = C.a;
//         b = C.b;
//     }
//         void setData(int x,int y){
//             a = x;
//             b = y;
//         }
//         void showData(){
//             cout<<"a = "<<a<<" b = "<<b<<"i"<<endl;
//         }
//         Complex add(Complex C){
//             Complex temp;
//             temp.a = a + C.a;
//             temp.b = b + C.b;
//             return temp;
//         }

// };
// int main(){
//     // Complex c1,c2,c3;//if we declare like this it gives error because we describe parametrized ctor not default ctor
//     //So display like this 
//     //agar hmna class mein explicitily ek bhi ctor bna diya to ctor default ctor nhi bnayega
//     Complex c1(5,4),c2(7),c4,c5;
//     // jab c3 bna rah ho or usi class ke kisi object se use initialize kr rah ho tbhi copy ctor call ho rah but agar 
//     //pehla c3 bna liya or phir usko initialize krna gay tab copy ctor nhi assignment operator call hota hai 
//     //line 51 mein copy ctor chl rah hai ; or line 53 mein default ctor call hoga
//     Complex c3 = c1;//default implicit copy ctor called yeh to jab tak tum copy ctor nhi bnata tab tak bnta hi rhega
//     Complex c6;
//     c6=c1;
//     c1.showData();
//     c2.showData();
//     c3.showData();
//     c4.showData();
//     c5 = c1.add(c2);
//     c5.showData();
//     return 0;
// }