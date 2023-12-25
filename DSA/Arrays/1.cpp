//Array 
#include<iostream>
using namespace std;
class Array{
    private:
        int capacity;
        int *ptr;
        int lastIndex;
    
    public:
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
};
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
    return 0;
}