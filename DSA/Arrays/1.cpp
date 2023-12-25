//Array 
#include<iostream>
using namespace std;
class Array{
    private:
        int capacity;
        int *ptr;
        int lastIndex;
    
    public:
        Array();
        Array(int size);
        bool isEmpty();
        bool isFull();
        void append(int);
        void insert(int,int);
        void editElement(int,int);
        void del(int);
        int getElement(int);
        void show();
        int count();
        ~Array();
        int find(int);
        Array(Array &);
        Array& operator=(Array &);
};
Array::Array(){
    capacity=0;
    lastIndex=-1;
    ptr = new int[capacity];
}
Array::Array(int size){
    if(size>0){
    capacity = size;
    lastIndex = -1;
    ptr = new int[capacity];
    }
    else   
        ptr=NULL;
}
bool Array::isEmpty(){
    return lastIndex==-1;
}
bool Array::isFull(){
    return lastIndex==capacity-1;
}
void Array::append(int data){
    if(isFull()){
        cout<<"\nOverflow";
    }
    else{
        lastIndex++;
        ptr[lastIndex]=data;
    }
}
void Array::insert(int index,int data){
    if(index<0 || index>lastIndex+1){
        cout<<"\nInvalid position";
    }
    else if(isFull()){
        cout<<"\nOverflow";
    }
    else{
        for(int i = lastIndex; i>=index;i-- ){
            ptr[i+1]=ptr[i];
        }
        ptr[index]=data;
        lastIndex++;
    }
}
void Array::editElement(int index,int data){
    if(index<0 || index>lastIndex){
        cout<<"\nInvalid Index or empty array";
    }
    else{
        ptr[index]=data;
    }
}
void Array::del(int index){
    if(index<0 || index>lastIndex){
        cout<<"\nInvalid Index or empty array";
    }
    else{
        for(int i = index;i<lastIndex;i++){
            ptr[i]=ptr[i+1];
        }
        lastIndex--;
    }
}
void Array::show(){
    for(int i = 0; i <=lastIndex;i++)
        cout<<i<<" "<<ptr[i]<<endl;
}
int Array::getElement(int index){
    if(index<0 || index>lastIndex){
        cout<<"\nInvalid Index or empty array";
        throw new exception();
    }
    return ptr[index];

}
int Array::count(){
    return lastIndex+1;
}
Array::~Array(){
    delete []ptr;
    ptr = NULL;
}
int Array::find(int data){
    for(int i = 0; i <= lastIndex;i++){
        if(ptr[i]==data){
            return i;
        }
    }
    return -1;
}
Array::Array(Array &arr){//deep copy very important
    cout<<"Copy ctor called.... deep copy";
    capacity = arr.capacity;
    lastIndex = arr.lastIndex;
    ptr = new int[capacity];
    for(int i = 0 ; i <= lastIndex;i++){
            ptr[i]=arr.ptr[i];
    }
}
Array& Array::operator=(Array &arr){//why return type is refrence why does not return object why return refrence?????
// return hone ke liye object ki ek or copy bnegi then it says infinite calls but dure to this refrence object does not occur infinite call
//So return with refrence
    if(this != &arr){
        if(ptr!=NULL)
        delete []ptr;
    capacity = arr.capacity;
    lastIndex = arr.lastIndex;
    ptr = new int[capacity];
    for(int i = 0 ; i <= lastIndex;i++){
            ptr[i]=arr.ptr[i];
    }
    }
    return *this;
}
int main(){
    Array a1(8);
    a1.append(4);
    a1.append(3);
    a1.append(2);
    a1.append(8);
    a1.append(9);
    a1.append(6);
    a1.append(5);
    a1.append(7);
    bool p = a1.isEmpty();
    cout<<p<<endl;
    a1.editElement(2,4);
    a1.show();
    int m = a1.getElement(5);
    cout<<endl<<m;
    Array a2 = a1;
    a2.show();
    Array a3;
    a3 = a1;
    cout<<endl;
    a3.show();
    a1 = a1;
    cout<<endl;
    a1.show();
    return 0;
}