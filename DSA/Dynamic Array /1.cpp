// #include<iostream>
// using namespace std;
// class DynArray{
//     private:
//         int capacity;
//         int lastIndex;
//         int *ptr;
//     protected:
//          void doubleArray();
//          void halfArray();
//     public:
//         DynArray(int);
//         int getCapacity();
//         bool isEmpty();
//         bool isFull();
//         void append(int);
//         void insert(int,int);
//         void deleteArray(int);

// };
// DynArray::DynArray(int size){
//     if(size>0){
//     capacity = size;
//     lastIndex = -1;
//     ptr = new int[capacity];
//     }
//     else{
//         ptr =  NULL;
//     }
// }
// void DynArray::doubleArray(){
//     int *temp;
//     temp = new int[capacity*2];
//     for(int i = 0; i <= lastIndex;i++){
//         temp[i]=ptr[i];
//     }
//     delete []ptr;
//     ptr = temp;
//     //temp ko null likhna ki jrurt nhi kyuki vo sma variable hai vo function khatam hone se ho hi jayga
//     // or delete []temp to bhut bri  glti hai kyuki phir hm array delete kr denge
//     capacity = capacity *2;
// }
// void DynArray::halfArray(){
//    int *temp;
//     temp = new int[capacity/2];
//     for(int i = 0; i <= lastIndex ; i++){
//         temp[i] = ptr[i];
//     }
//     delete []ptr;
//     ptr = temp;
//     capacity = capacity/2;
// }
// int DynArray::getCapacity(){
//         return capacity;
// }
// bool DynArray::isEmpty(){
//     return lastIndex==-1;
// }
// bool DynArray::isFull(){
//     return lastIndex == capacity-1;
// }
// void DynArray::append(int data){
//    if(isFull()){
//     doubleArray();
//    }
//    lastIndex++;
//    ptr[lastIndex]=data;
// }
// void DynArray::insert(int index,int data){
//     if(index<0 || index>lastIndex+1){
//         cout<<"\nInvalid Index or empty index";
//     }
//     else{
//         if(isFull()){
//             doubleArray();
//         }
//         for(int i =0 ; i <= lastIndex;i++){
//             ptr[i+1] = ptr[i];
//         }
//         ptr[index] = data;
//         lastIndex++;
//     }
// }
// void DynArray::deleteArray(int index){
//     if(index<0 || index>lastIndex){
//         cout<<"\nInvalid Index or empty array";
//     }
//     else{
//         for(int i = 0; i <lastIndex;i++){
//             ptr[i] = ptr[i + 1];
//         }
//         lastIndex--;
//         if(lastIndex + 1 <= capacity/2){
//             halfArray();
//         }
//     }
// }
// int main(){
//     DynArray d(8);
//     return 0;
// }

#include<iostream>
using namespace std;
class DynArray{
    private:
        int capacity;
        int lastindex;
        int *ptr;
    
    protected:
        void doubleArray();
        void halfArray();

    public:
        DynArray(int);
        DynArray(DynArray &);
        DynArray& operator=(DynArray &);
        bool isFull();
        void append(int);
        void insert(int,int);
        void deleteArray(int);
        bool isEmpty();
        void editElement(int,int);
        int getElement(int);
        int count();
        ~DynArray();
        int find(int);
        int getCapacity();
        void show();

};
DynArray::DynArray(int size){
    if(size>0){
    capacity = size;
    lastindex = -1;
    ptr = new int[capacity];
    }
    else{
        ptr = NULL;
    }
}
DynArray::DynArray(DynArray &d){
    capacity = d.capacity;
    lastindex = d.lastindex;
    ptr =  new int[capacity];
    for(int i = 0; i <= lastindex; i++){
        ptr[i]=d.ptr[i];
    }
}
DynArray& DynArray::operator=(DynArray &d){
    if(this != &d){
        if(ptr != NULL)
            delete[] ptr;
        capacity = d.capacity;
        lastindex = d.lastindex;
        ptr = new int[capacity];
        for(int i = 0; i <= lastindex;i++){
            ptr[i] = d.ptr[i];
        }
    }
    return *this;
}
void DynArray::doubleArray(){
        int *temp;
        temp = new int[capacity*2];
        for(int i = 0; i<=lastindex;i++){
            temp[i]=ptr[i];
        }
        delete []ptr;
        //not assigning null to temp and also not want to delte because temp is the sma variable
        //temp will automatically delte
        //and if u written temp with delete keyword then it is blunder
        //because it will delete the location of the temp
        ptr = temp;
        capacity = 2 * capacity;
}
void DynArray::halfArray(){
        int *temp;
        temp = new int[capacity/2];
        for(int i = 0; i<=lastindex;i++){
            temp[i]=ptr[i];
        }
        delete []ptr;
        //not assigning null to temp and also not want to delte because temp is the sma variable
        //temp will automatically delte
        //and if u written temp with delete keyword then it is blunder
        //because it will delete the location of the temp
        ptr = temp;
        capacity = capacity / 2;
}
bool DynArray::isFull(){
    return lastindex == capacity - 1;
}
void DynArray::append(int data){
    if(isFull()){
        doubleArray();
    }
    lastindex++;
    ptr[lastindex]=data;
}
void DynArray::insert(int index,int data){
    if(index<0 || index>lastindex+1){
        cout<<"\nInvalid index or empty array";
    }
    else{
        if(isFull()){
            doubleArray();
        }
        for(int i = lastindex;i>=index;i--){
                ptr[i+1] = ptr[i];
        }
        ptr[index] = data;
        lastindex++;
    }
}
void DynArray::deleteArray(int index){
        if(index < 0 || index>lastindex){
            cout<<"\nInvalid index or empty array";
        }
        else{
            for(int i=index;i<lastindex;i++){
                ptr[i] = ptr[i+1];
            }
            lastindex--;
            if(capacity>1 && lastindex+1 <= capacity/2){
                halfArray();
            }
        }
}
bool DynArray::isEmpty(){
    return lastindex==-1;
}
void DynArray::editElement(int index,int data){
    if(index<0 || index>lastindex){
        cout<<"\nInvalid index or empty array";
    }
    else{
        ptr[index]=data;
    }
}
int DynArray::getElement(int index){
    if(index<0 && index>lastindex){
        cout<<"\nInvalid index or empty array";
        throw new exception();
    }
    return ptr[index];
}
int DynArray::count(){
    return lastindex+1;
}
DynArray::~DynArray(){
    delete []ptr;
}
int DynArray::find(int data){
    for(int i = 0; i <= lastindex;i++){
        if(ptr[i]==data){
            return i;
        }
    }
    return -1;
}
int DynArray::getCapacity(){
    return capacity;
}
void DynArray::show(){
    for(int i = 0 ;i <= lastindex ;i++){
        cout<<ptr[i]<<" ";
    }
}
int main(){
    DynArray d1(7);
    d1.append(6);
    d1.append(43);
    d1.append(34);
    d1.append(32);
    d1.append(98);
    d1.append(87);
    d1.deleteArray(3);
    d1.show();
    return 0;
}