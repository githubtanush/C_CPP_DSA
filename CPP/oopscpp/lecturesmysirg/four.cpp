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





//Initializer list - ctor has initialize by both ways simply ctor or initializer list
// but this has one advantage that if u written like this a(a),b(b),c(c) then this thing u also written with initializer list
// but agrr yhi ham ctor ka andar kara to voh assignment ka dono taraf local treat krega to hma pata hi nhi ki kab assign hoga
//Initializer list resolve name  conflict issue
// if there is some class a and in this class there has const member variable without not use of initializer list you will not use the 
//const member variable 
// #include<iostream>
// using namespace std;
// class Complex{
//     private:
//         int a,b;
//         // int &y;
//         const int k;

//     public:
//     //Default ctor
//         Complex():k(5),a(0),b(0){};
//     //Parametrized ctor
//         // Complex(int x,int y){
//         //     cout<<"Two argument ctor called...."<<endl;
//         //     a = x;
//         //     b = y;
//         // }

//     //By initializer list
//      Complex(int a,int b): a(a),b(b) 
//      { };
//     // Parametrized ctor of 1 argument
//         Complex(int x){
//             cout<<"One argument ctor called...."<<endl;
//             a = x;
//             b = 0;
//         }
    
//     //Copy ctor
//     Complex(Complex &C){
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
//     Complex c1(5,4),c2(7),c4,c5;
//     Complex c3 = c1;
//     c1.showData();
//     c2.showData();
//     c3.showData();
//     c4.showData();
//     c5.showData();
//     return 0;
// }







// //Operator Overloading
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

//     Complex(Complex &C){
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
        
//         // C language mein yhi hai ki hm digit , alphabet ya underscore se hi rkh skte hai 
//         // but in cpp there is new rule that if we use operator symbol as new name then only add operator keyword before this keyword
//         // then u can use it 

//         Complex operator+(Complex C){//yeh function hi hai technically bss use operator ka kiya hai
//             Complex temp;
//             temp.a = a + C.a;
//             temp.b = b + C.b;
//             return temp;
//         }

//         Complex operator-(){
//             Complex temp;
//             temp.a = -a;
//             temp.b = -b;
//             return temp;
//         }

// };
// int main(){
//     Complex c1(5,4),c2(7),c4,c5,c7;
//     Complex c3 = c1;
//     Complex c6;
//     c6=c1;
//     c1.showData();
//     c2.showData();
//     c3.showData();
//     c4.showData();
//     //c1 ne operator plus ko call kiya or c2 usme as an argument pass hua
//     // c5 = c1.operator+(c2);//Now call like this bss operator keyword and operator ka sign bnana

//     c5 = c1 + c2;//you also call like this because operator ka 2 ways hota hai yeh 1st class mein bhi discuss hua tha
//     //with dot or without dot 
//     c7 = -c1;
//     c7.showData();
//     c5.showData();
//     return 0;
// }





// //Friend function 
// //if u become a non - member function to friend of the class function then u declare it in the class with friend keyword but 
// //define it outside and without membership label
// //but remember that friend function can be a member of other class
// //and also friend function written in private ,public and protected but this is not affected because it is define outside the class

// #include<iostream>
// using namespace std;
// class Item{
//     private:
//         int a,b;
//     public:
//         void setData(int x,int y){
//             a = x;
//             b = y;
//         }
//         void showData(){
//             cout<<"a = "<<a<<" b = "<<b<<endl;
//         }
//         // void f1();//give error because it treat member function which u forgot to declare
//         // so define like this
//         friend void f1(Item);
// };
// // void Item::f1(){
// //Don't call like this
// // }

// void f1( Item i){//thing is that this friend function also access the private member of the class
//     cout<<i.a<<" "<<i.b<<endl;//object . access
// }
// int  main(){
//     Item i1;
//     i1.setData(3,4);
//     // i1.f1();//not declare like that because it is not the member function
//     f1(i1);
//     return 0;
// }


