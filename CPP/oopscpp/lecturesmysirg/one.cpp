// #include<iostream>
// using namespace std;
// int add(int,int,int=0);//Default argument helps us to that we donot create another function and function treat 1 less argument case automatically.and one more thing is that when we written =0 in 2nd int then it means we set second argument default value is zero and it has also one restriction if i was marking 0 default value as y then z must be zero socho ek daaga mein moti piro rah hai pehla hai phir dusra nhi hai phir sida tisra hai asa ho skta hai kya kehna ka matlab yeh hai jaah hmna default bna diyan to uske baad valo ko bhi default bnana compulsory hai
// int main(){
//     int a,b;
//     cout<<"Enter two numbers : ";
//     cin>>a>>b;
//     cout<<"\nSum is : "<<add(a,b);
//     int c;
//     cout<<"\nEnter three numbers : ";
//     cin>>a>>b>>c;   
//     cout<<"\nSum is : "<<add(a,b,c);
//     // f1(a,b);//call by value | c language
//     // f1(&a,&b);//Call by refrence | c language
//     cout<<endl;
//     return 0;
// }
// int add(int x,int y,int z){
//     return x+y+z;
// }

// // void f1(int x,int y){//Ordinary variable
// // }
// // void f1(int *x,int *y){//pointer variable 
// // }


// #include<iostream>
// using namespace std;
// int add(int , int );
// int add(int &, int & ,int &);
// int main(){
//     int a,b;
//     cout<<"Enter two numbers : ";
//     cin>>a>>b;
//     cout<<"Sum is : "<<add(a,b);
//     int c;
//     cout<<"Enter three numbers : ";
//     cin>>a>>b>>c;
//     cout<<"Sum is ; "<<add(a,b,c);
//     return 0;
// }
// int add(int x,int y){
//     return x + y;
// }
// int add(int &x,int &y,int &z){
//     return x + y + z;
// }



// //polymorphism is a very good process when big project is played c is a syntax based language on the other hand cpp is more about the conceptual things
// #include<iostream>
// using namespace std;
// int area(int , int );
// float area(int &);
// int main(){
//     int a,b;
//     cout<<"Enter two numbers for which u find area_of_rect: ";
//     cin>>a>>b;
//     cout<<"Area is : "<<area(a,b);
//     int c;
//     cout<<"Enter the raius for which u want area_of_circle : ";
//     cin>>a;
//     cout<<"Area is ; "<<area(a);
//     return 0;
// }
// int area(int x,int y){
//     return x * y;
// }
// float area(int &x){
//     return 3.14*x*x;
// }


// //structure revision
// #include<iostream>
// using namespace std;
// struct Book{
//     int book_id;
//     char title[20];
//     int price ;
// };
// struct Book inputBook(){
//     struct Book b;
//     cout<<"Enter bookid , title and price : ";
//     cin>>b.book_id;
//     cin.ignore();//same work which is do fflash in gets function this is used to clean the buffer
//     cin.getline(b.title,20);
//     cin>>b.price;
//     return b;
// }
// void display(struct Book b){
//     cout<<b.book_id<<"  "<<b.title<<"  "<<b.price;
// }
// int main(){
//  struct Book b1={1,"Java",50},b2;
//     b2 = inputBook();
//     display(b2);
//     return 0;
// }


//cpp structure
//1 remove struct keyword from declaration not defination
// #include<iostream>
// using namespace std;

// //this is encapsulation wrapping all function and variable in single struct 
// //now also we remove the headache of declaration of functions because functions can itself declare in class 
// //structure must be define before the int main section because without declare 1st structure you have faced many difficult in access member function ,variables
// //means when u assign values in b1 then it gives error that where are u define that in b1 we write 3 variables so structure must be define before int main function
// struct Book{
//     int book_id;
//     char title[20];
//     float price ;

//     void inputBook(){
//         //member function caller object ke members ko directly access kr skta hai 
//     // Book b;//b2 book directly access member variable so we don't need b in this; 
//     cout<<"Enter bookid , title and price : ";
//     // cin>>b.book_id;//now this is member function so we don't need b.book_id
//     // so we simply written like this
//     cin>>book_id;
//     cin.ignore();//same work which is do fflash in gets function this is used to clean the buffer
//     cin.getline(title,20);
//     cin>>price;
// }

//     void display(){
//     cout<<endl;
//     cout<<book_id<<"  "<<title<<"  "<<price;
// }
// };
// int main(){
//     Book b1={1,"Java",450.0f},b2;
//     // b2 = inputBook();//now this is wrong because input book is the member function of the class not this is seperate function
//     b2.inputBook();//now input book is work for b2 means input book write data in b2 so return type is void
//     //b2 is caller object b2 call because b2 has same type as that of member variable;//member function special characteristics
//     b1.display();//caller object
//    b2.display();
//     return 0;
// }





// #include<iostream>
// using namespace std;
// //Encapsulation you done by two methods structure and class but recommended u use class but capability wise both are same but in cpp all members must be private by default not public
// class Book{
//     private:
//     int book_id;
//     char title[20];
//     float price ;

//     public:
//     void inputBook(){
//     cout<<"Enter bookid , title and price : ";
//     cin>>book_id;
//     if(book_id<0)
//     book_id=-book_id;
//     cin.ignore();
//     cin.getline(title,20);
//     cin>>price;
//     }

//     void display(){
//     cout<<endl;
//     cout<<book_id<<"  "<<title<<"  "<<price;
//     }
// };
// int main(){
//     // Book b1={1,"Java",450.0f},b2;
//     Book b1,b2;//this is called data hiding 
//     //there is a data corrupt if we use method then there is no chance to corrupt the data
//     // b2.book_id=-3;//when we make private then it can easily handle it for the concept for make data secure we make variables private but publically we can use methods 
//     //so cpp language has written one very awesome language that u can input any time in using methods not variables so we define the properties. so that we avoid the corruption of data
//     //We introduce Data Hiding : public , private and protected  u easily think that if u say book_id can't be negative then in your method u handle this case but if they directly access this then this is the issue so as a security purpose cpp has provide 3 access specifiers in cpp language called access specifiers used for data hiding public,private and protected and they can applied only and only in members of the structure
//     b1.inputBook();
//     b2.inputBook();
//     b1.display();
//     b2.display();//kisi ko bhi pata lag rah hai ki input book kaise chl rah hai display kaise chl rah hai nhi na to yeh hota hai abstraction. or yeh to achi baat hai main vala ko input book or display function kaise kaam kr rah hai yeh janna hi kyu hai khud ka knowledge bnana ke liye thori use salary mil rhi hai jitna use jan na hai vo jankar aaga bda bass unnecessary details usko jan ni kyu hai esa hi kehta hai abstraction or yhi eski need hai jeise real life example car ka jo gear vala dnda hai tumhe gear dalna hai na bss yeh to tumhara liye important hai yeh thori tumhara liye important hai ki usko kaise bnaya
//     return 0;
// }
// //Data hiding and abstraction are two different things data hiding is restricting accessibility aap us member ko access hi nhi kar pa rah ho or abstraction yeh hai ki aap us member ko access krne se nhi rok rah ho aap bss chupa rah ho ki yeh kaaam kaise kr rah that is abstraction.
//abstraction one meaning is also that you hiding details . it is a concept