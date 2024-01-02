// #include<iostream>
// using namespace std;
// class Array{
//         private:
//             int capacity;
//             int lastIndex;
//             int *ptr;
        
//         public:
//             Array(int size);
//             bool empty();
//             bool isFull();
//             void append(int);
//             void show();
//             void edit(int,int);
//             void insertElement(int,int);
//             void deleteElement(int);
//             int getElement(int);
//             int count();
//             ~Array();
//             int find(int);
//             Array(Array &);
//             Array& operator=(Array &);
// };
// Array::Array(int size){
//     if(size>0){
//     capacity = size;
//     lastIndex = -1;
//     ptr = new int[capacity];
//     }
//     else{
//         ptr = NULL;
//     }
// }
// bool Array::empty(){
//     return lastIndex==-1;
// }
// bool Array::isFull(){
//     return lastIndex == capacity - 1;
// }
// void Array::append(int data){
//     if(isFull()){
//         cout<<"\nArray is Fully Filled.";
//     }
//     else{
//         lastIndex++;
//         ptr[lastIndex]=data;
//     }
// }
// void Array::show(){
//     for(int i = 0; i<=lastIndex;i++){
//         cout<<ptr[i]<<" ";
//     }
// }
// void Array::edit(int index,int data){
//     if(index<0 || index>lastIndex){
//         cout<<"\nInvalid Index.";
//     }
//     else{
//         ptr[index]=data;
//     }

// }
// void Array::insertElement(int index,int data){
//     if(index<0 || index>lastIndex + 1){
//         cout<<"\nInvalid Index";
//     }
//     else if(isFull()){
//         cout<<"\nOverflow";
//     }
//     else{
//         for(int i = lastIndex;i>=index;i--){
//             ptr[i+1]=ptr[i];
//         }
//         ptr[index]=data;
//         lastIndex++;
//     }
// }
// void Array::deleteElement(int index){
//     if(index<0 || index>lastIndex){
//             cout<<"\nInvalid Index.";
//     }
//     else{
//         for(int i = index; i <=lastIndex;i++ ){
//             ptr[i] = ptr[i + 1];
//         }
//         lastIndex--;
//     }
// }
// int Array::getElement(int index){
//     if(index<0 || index>lastIndex){
//         cout<<"\nInvalid Index or empty array.";
//         throw new exception();
//     }
//     return ptr[index];
// }
// int Array::count(){
//     return lastIndex+1;
// }
// Array::~Array(){
//     delete []ptr;
//     ptr = NULL;
// }
// int Array::find(int data){
//     for(int i = 0; i <= lastIndex;i++){
//         if(ptr[i]==data){
//             return i;
//             break;
//         }
//     }
//     return -1;
// }
// Array::Array(Array &a){
//     cout<<"Deep copy ctor called......COPY CTOR";
//     capacity = a.capacity;
//     lastIndex = a.lastIndex;
//     ptr = new int[capacity];
//     for(int i = 0; i <= lastIndex;i++){
//         ptr[i]=a.ptr[i];
//     }
// }//Copy ctor jab call ho rah to object create ho rah hai matlab new array bn rah hai 
// //lekin jab assignment operator chl rah hai toh object pehle se created hai to ho skta hai na ki 
// //eska pointer kisi ko point kar rah ho to pehle pointer ko null krenge hmm thik hai to jo 
// //line to jo dono if vali condition hai vo lgana ki jrurt hi nhi hai copy ctor vala mein
// Array& Array::operator=(Array &a){
//     //return type array vala hmna refrence kyu kiya hai meini object kyu nhi return kiya refrence kyu return kiyan hai
//     //because of infinite call because agr hm array ka object return krenge to object ki ek or copy bnegi abhi yaah nya object create
//     //nhi hoga
//     cout<<"ASSIGNMENT OPERATOR CALLED..."<<endl;
//         if(this != &a){
//             if(ptr!=NULL)
//                 delete []ptr;
//         capacity = a.capacity;
//         lastIndex = a.lastIndex;
//         ptr = new int[capacity];
//         for(int i = 0; i<=lastIndex;i++){
//             ptr[i] = a.ptr[i];
//         }
//         }
//         return *this;
// }
// int main(){
//     Array a(7),a2(7);
//     a.append(4);
//     a.append(43);
//     a.append(32);
//     a.append(98);
//     a.append(18);
//     a.append(54);
//     cout<<a.find(18)<<endl;
//     a.deleteElement(4);
//     cout<<a.count()<<endl;
//     bool m = a.empty();
//     bool n = a.isFull();
//     Array a1=a;
//     cout<<endl;
//     a.show();
//     cout<<endl;
//     a1.show();
//     a2 = a;
//     cout<<endl;
//     a2.show();
//     cout<<endl;
//     cout<<m<<endl<<n<<endl;
//     return 0;
// }





#include<iostream>
using namespace std;
class Array{
    private:
        int capacity;
        int *ptr;
        int lastIndex;

    public:
    Array(int);
    Array(Array &);
    bool isEmpty();
    bool isFull();
    void append(int);
    void insert(int,int);
    void deleteElement(int);
    void editElement(int,int);
    int getElement(int);
    int getcount();
    int findElement(int);
    ~Array();
    Array& operator=(Array &);
    void show();
};
Array::Array(int size){
    if(size>0){
    capacity = size;
    lastIndex = -1;
    ptr = new int[capacity];
    }
    else{
        capacity = 0;
        lastIndex= -1;
        ptr=nullptr;
    }
}
bool Array::isEmpty(){
    return lastIndex==-1;
}
bool Array::isFull(){
    return lastIndex==capacity-1;
}
void Array::append(int data){
    if(isFull()){
        cout<<"Array is fully filled."<<endl;
    }
    else{
        lastIndex++;
        ptr[lastIndex]=data;
    }
}
void Array::show(){
    for(int i = 0; i<=lastIndex;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
}
void Array::insert(int index,int data){
    if(index<0 || index>lastIndex+1){
        cout<<"\nInvalid index you can enter."<<endl;
    }
    else if(isFull()){
        cout<<"\nOverflow";
    }
    else{
        for(int i = lastIndex; i>=index;i--){
            ptr[i+1]=ptr[i];
        }
        ptr[index]=data;
        lastIndex++;
    }
}
void Array::deleteElement(int index){
    if(index<0 || index>lastIndex){
        cout<<"\nInvalid Index."<<endl;
    }
    else{
        for(int i = index;i<lastIndex;i++){
            ptr[i]=ptr[i+1];
        }
        lastIndex--;
    }
}
void Array::editElement(int index,int data){
    if(index<0 || index>lastIndex){
        cout<<"\nInvalid Index."<<endl;
    }
    else{
        ptr[index]=data;
    }
}
int Array::getElement(int index){
    if(index<0 || index>lastIndex){
        cout<<"\nInvalid Index"<<endl;
        throw new exception();
    }
    else{
        return ptr[index];
    }
}
int Array::getcount(){
    return lastIndex+1;
}
int Array::findElement(int data){
    for(int i = 0; i<=lastIndex;i++){
        if(ptr[i]==data){
            return i;
        }
    }
    return -1;
}
Array::Array(Array &a){
    cout<<"Copy Ctor Called... DEEP COPY"<<endl;
    capacity = a.capacity;
    lastIndex = a.lastIndex;
    ptr = new int[capacity];
    for(int i = 0; i<=lastIndex; i++){
        ptr[i]=a.ptr[i];
    }
}
Array::~Array(){
    delete []ptr;
}
Array& Array::operator=(Array &a){
    cout<<"Copy Assignment Operator called..... DEEP COPY"<<endl;
    if(this!=&a){
        if(ptr!=NULL)
            delete []ptr;
        capacity = a.capacity;
        lastIndex=a.lastIndex;
        ptr = new int[capacity];
        for(int i = 0; i<=lastIndex;i++){
            ptr[i]=a.ptr[i];
        }
    }
    return *this;
}
int main(){
 Array a(8),a1 = a;
 Array a2(7);
    a.append(5);
    a.append(7);
    a.append(3);
    a.append(83);
    a.append(30);
    a.insert(2,5);
    a.insert(6,8);
    a2=a;
    a.deleteElement(2);
    a.editElement(2,8);
    a.show();
    a1.show();
    a2.show();
    int s = a.findElement(83);
    cout<<"The element is found at the index : "<<s<<endl;
    int q = a.getcount();
    cout<<"Total Elements in the array is : "<<q<<endl;
    int p = a.getElement(3);
    cout<<"The Element which is at index 3 is : "<<p<<endl;
bool m = a.isEmpty();
    if(m==0){
        cout<<"Array is not empty."<<endl;
    }
    else{
        cout<<"Array is empty."<<endl;
    }
bool n = a.isFull();
    if(n){
        cout<<"Array is fully filled."<<endl;
    }
    else{
        cout<<"Array is not fully filled."<<endl;
    }
return 0;
}