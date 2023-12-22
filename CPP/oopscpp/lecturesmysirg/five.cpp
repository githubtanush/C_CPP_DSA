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

//         //operator + as a member we want to become as a friend
//         // Complex operator+(Complex C){//yeh function hi hai technically bss use operator ka kiya hai
//         //     Complex temp;
//         //     temp.a = a + C.a;
//         //     temp.b = b + C.b;
//         //     return temp;
//         // }

//         // Complex operator-(){
//         //     Complex temp;
//         //     temp.a = -a;
//         //     temp.b = -b;
//         //     return temp;
//         // }

//         //koi bhi operator agar hm as a friend declare krta hai to hm jitne arguments de rah hai usse exactly ek argument 
//         //jada pass krna pdega kyuki caller object bhi as a argument pass hota hai
//     friend Complex operator+(Complex X,Complex Y);//two argument pass because we declare as a friend so their is no caller object
//     //so explicitely we define both the objects
//     friend Complex operator-(Complex X);
//     Complex operator+(int k){
//         Complex temp;
//         temp.a = a + k;
//         temp.b = b;
//         return temp;
//     }
//     friend Complex operator+(int k, Complex C);
//     friend ostream& operator<<(ostream &,Complex C);
//     friend istream& operator>>(istream &,Complex &C);
// };
// istream& operator>>(istream &din, Complex &C){
//     din>>C.a>>C.b;
//     return din;
// }
// ostream& operator<<(ostream &dout, Complex C){
//     dout<<"\na = "<<C.a<<" b = "<<C.b<<"i"<<endl;
//     return dout;
// }
// Complex operator+(int k,Complex C){
//     Complex temp;
//     temp.a = C.a + k;
//     temp.b = C.b;
//     return temp;
// }
// Complex operator-(Complex X){
//             Complex temp;
//             temp.a = -X.a;
//             temp.b = -X.b;
//             return temp;
//         }
// Complex operator+(Complex X,Complex Y){//yeh function hi hai technically bss use operator ka kiya hai
//             Complex temp;
//             temp.a = X.a + Y.a;
//             temp.b = X.b + Y.b;
//             return temp;
//         }
// int main(){
//     Complex c1(5,4),c2(7),c4,c5,c7,c8;
//     Complex c3 = c1;
//     // c3 = c1 + 5; //operator overloading operating define more than one 
//     // c3 = 5 + c1;//not find result because left operand is always caller object and then they always take 5 as caller object
//     //so again define the class or ham esko member function nhi bna skta kyuki left mein to 5 hai 
//     //so it is the usage of friend and also we say that we doing abstraction
//     Complex c6;
//     c6=c1;
//     c1.showData();
//     c2.showData();
//     c3.showData();
//     c3 = 5 + c1;
//     c3.showData();
//     c4.showData();
//     //c1 ne operator plus ko call kiya or c2 usme as an argument pass hua
//     // c5 = c1.operator+(c2);//Now call like this bss operator keyword and operator ka sign bnana

//     // c5 = c1 + c2;//you also call like this because operator ka 2 ways hota hai yeh 1st class mein bhi discuss hua tha
//     //with dot or without dot 
//     c5 = c1 + c2;
//     // operator+(Complex c1,Complex c2);
//     c7 = -c1;
//     c7.showData();
//     c5.showData();

//     cin>>c8;
//     cout<<c8;
//     return 0;
// }



// #include<iostream>
// using namespace std;
// class Complex{
//     private:
//         int a,b;
//     public:
//         void setData(int a,int b){
//             this->a = a;
//             this->b = b;
//         }
//         void ShowData(){
//             cout<<"a = "<<a<<" b = "<<b<<endl;
//         }
//         Complex SumGreater(Complex C){
//             if((a + b)>C.a+C.b){
//                 //hme c1 return krna hai because hma as a object pass krna hai 
//                 //or isme hmm this ka use nhi krenge kyuki this se to member function call hota hai na
//                 //to socho ki hmm object ko kaise pass kre
//                 return (*this);
//             }
//             else{
//                 return C;
//             }
//         }
// };
// int main(){
//     Complex c1,c2,c3;
//     c1.setData(3,9);
//     c2.setData(2,3);
//     c3 = c1.SumGreater(c2);
//     c3.ShowData();

//     c1.ShowData();
//     return 0;
// }



//Memory leak - assume one situation that you go for a trip and at that you store your bag in one cabin 
//and they give you token of that locker now u can access that locker only by this token then suppose if u lost that token
//then u can access that locker?
//Simply answer is no so that is a dangerous situation where u can access your locker and also the shopkeeper locker 
//is not free for storing another bag or luggage so at that shopkeeper has lost there one memory space so it is 
//called memory leak


//Null pointer - easily you think that you close your eyes and then u think that you does not see anything
//but you can see your internal layer of your eyes so easily you can relate it 
//when we assigining any pointer to 0 so it means that this is not access any location but reality is that they access nothing

//dangling pointer -  if we make one pointer p which is assigning one block address and if we write delete p then it free the memory location
//of p but that not means that this is free the pointer value still the address has store in it it means that dangling pointer is that pointer
//which points the valid location  but now its location(memory) is free(luggage is taken from locker) but pointer still points that location
//is called dangling pointer.
//it is like that  in your home there is T.v and now t.v has been stolen so what are you doing with remote if T.v has stolen

//wild pointer/generic pointer/uniinitialized pointer -  unknown type ke block ka address kisi bhi type(primitive) 
//ka address rkh skta (like int,float,structure,char ) it means that it is point any unknown location
//means we say that garbage value 



//wild pointer mein garbage value ke karan vo initialize ho rah hai 
//or dangling pointer yeh hai ki pehla tha kisi important location ka result ab vo location free ho chuki hai
//esliye best practice yeh maani jaati hai ki jeisi hi location free hoti hai sath mein hi pointer ko null mark krdo
//like this delete p; p=NULL;