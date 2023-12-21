// #include<iostream>
// using namespace std;
// class Item{
//     private:
//         int a , b;
//         static int k;
//     public:
//         void getid(int x,int y){
//             a = x;
//             b = y;
//         }
//         static void set_k(int z){
//             k = z;
//         }
//         void showid(){
//             cout<<a<<" "<<b;
//         }
//         static void get_k(){
//             cout<<k<<endl;
//         }
// };
// int Item::k;
// int main(){
//     Item i1,i2;
//     i1.getid(3,4);
//     Item::set_k(7);
//     Item::get_k();
//     i1.showid();
//     return 0;
// }




// #include<iostream>
// using namespace std;
// class Complex{
//     int a,b;
//     public:
//     void setdata(int x,int y){
//         a = x;
//         b = y;
//     }
//     void showData(){
//         cout<<"x = "<<a<<"\ny = "<<b<<"i";
//     }
//     Complex add(Complex C){
//         Complex temp; 
//         temp.a = a+C.a;//a jo plus ho rah hai voh complex class ka caller object ka a hai 
//         temp.b = b+C.b;//same b ka liye jo a ka liye kaha hai 
//          return temp;
//     }
// };
// int main(){
//     Complex c1,c2,c3;
//     c1.setdata(3,4);//explain this line
//     //c1 caller object hai jisne apne setdata member function ko call kiya hai or usme 3,4 ko as a argument pass kiya hai then as take something 
//     //nature programme it is copy in x and y and assign these value in the instance variable
//     c1.showData();
//     cout<<endl;
//     c2.setdata(8,9);
//     c2.showData();
//     // c3 = c1  + c2;error  because plus operator cannot add non - primitive data types
//     // c3.a = c1.a + c2.a; this is also wrong because you think how can u access the private members outside the body
//     c3 = c1.add(c2);
//     cout<<endl;
//     c3.showData();
//     return 0;
// }



// #include<iostream>
// using namespace std;
// class Complex{
//     private:
//     int a,b;

//     public:
//     Complex(){
//        a = 0;
//        b = 0;
//     }
//     void setValue(int x,int y){
//         a=x;
//         b=y;
//     }
//     void showData(){
//         cout<<a<<" "<<b<<"i"<<endl;
//     }
// };
// int main(){
//     Complex a,b;
//     a.setValue(3,4);
//     a.showData();
//     return 0;
// }



// //Constructor
// #include<iostream>
// using namespace std;
// class Complex{
//     private:
//         int a,b;

//     public:
//     //Default ctor
//         Complex(){
//             a = 0;
//             b = 0;
//         }
//         void setData(int x,int y){
//             a = x;
//             b = y;
//         }
//         void showData(){
//             cout<<"a = "<<a<<" b = "<<b<<"i"<<endl;
//         }

// };
// int main(){
//     Complex c1,c2,c3;
//     c1.showData();
//     c2.showData();
//     c3.showData();
//     return 0;
// }


// // parametrized Constructor
// #include<iostream>
// using namespace std;
// class Complex{
//     private:
//         int a,b;

//     public:
//     //Parametrized ctor
//         Complex(int x,int y){
//             a = x;
//             b = y;
//         }
//         void setData(int x,int y){
//             a = x;
//             b = y;
//         }
//         void showData(){
//             cout<<"a = "<<a<<" b = "<<b<<"i"<<endl;
//         }

// };
// int main(){
//     // Complex c1,c2,c3;//if we declare like this it gives error because we describe parametrized ctor not default ctor
//     //So display like this
//     Complex c1(5,4),c2(7,9),c3(2,7);
//     c1.showData();
//     c2.showData();
//     c3.showData();
//     return 0;
// }



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
//     Complex c1(5,4),c2(7,9),c3(2),c4,c5;
//     c1.showData();
//     c2.showData();
//     c3.showData();
//     c4.showData();
//     c5 = c1.add(c2);
//     c5.showData();
//     return 0;
// }


