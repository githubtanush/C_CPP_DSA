// //Inheritance
// #include<iostream>
// #include<string.h>
// using namespace std;
// class person{
//     private:
//         char name[20];
//         int age;
    
//     protected:
//         void setName(char n[]){
//             strcpy(name,n);
//         }
//         void setage(int a){
//             age = a;
//         }
//         public:
//             char* getname(){
//                 return name;
//             }
//             int getAge(){
//                 return age;
//             }

// };
// class Employee:public person{
//     private:
//         float salary;
//     protected:
//         void setSalary(float s ){
//             salary = s;
//         }
//     public:
//         float getSalary(){return salary;}
// };
// // //Version 1
// // void setEmployee(Employee &e, char n[],int a, float s){
// //  e.getAge();//access only public member of the class 
// //  //so not possible 
// //  //why ?? because user 1 can access only public member of the class
// // }

// //Version 2
// class UpdateEmployee:public Employee{
//         //now in this you can access also protected members and variables
//         public:
//             void setEmployee(char n[],int a , float s){
//                 //name cannot access here because name is the private member of person class.
//                 // strcpy(name,n);
//                 setName(n);
//                 setage(a);
//                 setSalary(s);
//             }
//             void showEmployee(){
//                 cout<<getname()<<" "<<getAge()<<" "<<getSalary();
//             }
// };
// int main(){
//     UpdateEmployee emp;
//     char s[]="Amit";
//     emp.setEmployee(s,29,4000);
//     emp.showEmployee();
//     cout<<endl;
//     return 0;
// }