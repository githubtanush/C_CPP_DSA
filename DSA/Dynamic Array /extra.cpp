// #include<iostream>
// using namespace std;
// class DynArray{
//         private:
//             int capacity;
//             int lastIndex;
//             int *ptr;
        
//         protected:
//             void doubleArray();
//             void halfArray();

//         public:
//             DynArray(int);
//             int getCapacity();
//             bool isEmpty();
//             bool isFull();
//             int getElement(int);
//             int getCount();
//             ~DynArray();
//             int find(int);
//             DynArray(DynArray &);
//             DynArray& operator=(DynArray &);
//             void append(int);
//             void insert(int,int);
//             void edit(int,int);
//             void deleteElement(int);
//             void show();

// };
// DynArray::DynArray(int size){
//     if(size>0){
//     capacity = size;
//     lastIndex = -1;
//     ptr = new int[capacity];
//     }
//     else{
//         ptr = NULL;
//     }
// }
// int DynArray::getCapacity(){
//     return capacity;
// }
// bool DynArray::isEmpty(){
//     return lastIndex==-1;
// }
// bool DynArray::isFull(){
//     return lastIndex==capacity-1;
// }
// int DynArray::getElement(int index){
//     if(index<0 || index>lastIndex){
//         cout<<"\nInvalid Index or empty array.";
//         throw new exception();
//     }
//     return ptr[index];
// }
// int DynArray::getCount(){
//     return lastIndex+1;
// }
// DynArray::~DynArray(){
//     delete []ptr;
// }
// int DynArray::find(int data){
//     for(int i = 0; i <= lastIndex;i++){
//         if(ptr[i]==data){
//             return i;
//         }
//     }
//     return -1;
// }
// DynArray::DynArray(DynArray &a){
//     capacity = a.capacity;
//     lastIndex = a.lastIndex;
//     ptr = new int[capacity];
//     for(int i = 0; i<=lastIndex;i++){
//         ptr[i]=a.ptr[i];
//     }
// }
// DynArray& DynArray::operator=(DynArray &a){
//         if(this != &a){
//             if(ptr!=NULL)
//                 delete []ptr;
//             capacity = a.capacity;
//             lastIndex = a.lastIndex;
//             ptr = new int[capacity];
//             for(int i = 0; i <= lastIndex;i++){
//                 ptr[i]=a.ptr[i];
//             }
//         }
//         return *this;
// }
// void DynArray::doubleArray(){
//         int *temp;
//         temp = new int[capacity*2];
//         for(int i = 0; i<=lastIndex;i++){
//             temp[i] = ptr[i];
//         }
//         delete []ptr;
//         ptr = temp ;
//         capacity = capacity*2;
// }
// void DynArray::halfArray(){
//         int *temp;
//         temp = new int[capacity/2];
//         for(int i  = 0; i<= lastIndex;i++){
//             temp[i] = ptr[i];
//         }
//         delete []ptr;
//         ptr = temp;
//         capacity = capacity/2;
// }
// void DynArray::show(){
//     for(int i = 0; i <= lastIndex ; i++){
//         cout<<ptr[i]<<" ";
//     }
// }
// void DynArray::append(int data){
//     if(isFull()){
//         doubleArray();
//     }
//         lastIndex++;
//         ptr[lastIndex]=data;
// }
// void DynArray::insert(int index,int data){
//     if(index<0 || index>lastIndex+1){
//         cout<<"Invalid Index or empty array.";
//     }
//     else{
//         if(isFull()){
//             doubleArray();
//         }
//         for(int i = lastIndex; i >= index;i--){
//             ptr[i+1] = ptr[i];
//         }
//         ptr[index] = data;
//         lastIndex++;
//     }

// }
// void DynArray::deleteElement(int index){
//     if(index< 0 || index>lastIndex){
//         cout<<"Invalid Index or empty Array";
//     }
//     else{
//         for(int i = index;i<=lastIndex;i++){
//             ptr[i]=ptr[i+1];
//         }
//         lastIndex--;
//         if(capacity>1 && lastIndex + 1 <= capacity/2){
//             halfArray();
//         }
//     }
// }
// void DynArray::edit(int index,int data){
//     if(index<0 || index>lastIndex){
//         cout<<"Invalid index or empty array."<<endl;
//     }
//     else{
//         ptr[index]=data;
//     }
// }
// int main(){
//     return 0;
// }


#include<iostream>
using namespace std;
class DynArray{
    private:
        int capacity;
        int lastIndex;
        int *ptr;
    
    protected:
        void doubleArray();
        void halfArray();
    public:
        DynArray(int);
        bool isEmpty();
        bool isFull();
        int getCapacity();
        int find(int);
        ~DynArray();
        int getcount();
        int getElement(int);
        void show();
        void append(int);
        void edit(int,int);
        void insert(int,int);
        void deleteElement(int);
        DynArray(DynArray &);
        DynArray& operator=(DynArray &);
};
DynArray::DynArray(int size){
    if(size>0){
    capacity=size;
    lastIndex = -1;
    ptr = new int[capacity];
    }
    else{
        ptr = NULL;
    }
}
bool DynArray::isEmpty(){
    return lastIndex == -1;
}
bool DynArray::isFull(){
    return lastIndex == capacity - 1;
}
int DynArray::getCapacity(){
    return capacity;
}
int DynArray::find(int data){
    for(int i = 0; i<=lastIndex; i++){
        if(ptr[i]==data){
            return i;
        }
    }
    return -1;
}
DynArray::~DynArray(){
    delete []ptr;
}
int DynArray::getcount(){
    return lastIndex+1;
}
int DynArray::getElement(int index){
    if(index<0 || index>lastIndex){
        cout<<"\nInvalid Index"<<endl;
        throw new exception;
    }
    return ptr[index];
}
void DynArray::doubleArray(){
    int *temp;
    temp = new int[capacity * 2];
    for(int i = 0; i<= lastIndex;i++){
        temp[i]=ptr[i];
    }
    delete []ptr;
    ptr = temp;
    capacity = capacity*2;
}
void DynArray::halfArray(){
    int *temp;
    temp = new int[capacity/2];
    for(int i = 0; i<=lastIndex;i++){
        temp[i]=ptr[i];
    }
    delete []ptr;
    ptr = temp;
    capacity = capacity/2;
}
void DynArray::show(){
    for(int i = 0; i<=lastIndex;i++){
        cout<<ptr[i]<<" ";
    }
}
void DynArray::append(int data){
    if(isFull())
        doubleArray();
    lastIndex++;
    ptr[lastIndex]=data;
}
void DynArray::edit(int index,int data){
    if(index<0 || index>lastIndex){
        cout<<"\nInvalid Index"<<endl;
    }
    else{
        ptr[index]=data;
    }
}
void DynArray::insert(int index,int data){
    if(index<0 || index>lastIndex+1){
        cout<<"\nInvalid Index"<<endl;
    }
    else
    { 
    if(isFull())
        doubleArray();
    else{
     for(int i = lastIndex; i>=index;i--){
        ptr[i+1]=ptr[i];
     }
     ptr[index]=data;
     lastIndex++;
    }
    }
}
void DynArray::deleteElement(int index){
    if(index<0 || index>lastIndex){
        cout<<"\nInvalid index ."<<endl;
    }
    else{
        for(int i = index; i<=lastIndex;i++){
            ptr[i]=ptr[i+1];
        }
        lastIndex--;
        if(capacity>1 && lastIndex+1<=capacity/2){
            halfArray();
        }
    }
}
DynArray::DynArray(DynArray &a){
    capacity = a.capacity;
    lastIndex = a.lastIndex;
    ptr = new int[capacity];
    for(int i = 0; i<= lastIndex;i++){
        ptr[i] = a.ptr[i];
    }
}
DynArray& DynArray::operator=(DynArray &a){
    if(this != &a){
        if(ptr!=NULL)
            delete []ptr;
    capacity = a.capacity;
    lastIndex = a.lastIndex;
    ptr = new int[capacity];
    for(int i = 0; i<=lastIndex;i++){
        ptr[i]= a.ptr[i];
    }
    }
    return *this;
}
int main(){
    return 0;
}