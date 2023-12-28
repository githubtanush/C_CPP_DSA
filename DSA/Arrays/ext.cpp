#include<iostream>
using namespace std;
class Array{
        private:
            int capacity;
            int lastIndex;
            int *ptr;
        
        public:
            Array(int size);
            bool empty();
            bool isFull();
            void append(int);
            void show();
            void edit(int,int);
            void insertElement(int,int);
            void deleteElement(int);
            int getElement(int);
            int count();
            ~Array();
            int find(int);
            Array(Array &);
            Array& operator=(Array &);
};
Array::Array(int size){
    if(size>0){
    capacity = size;
    lastIndex = -1;
    ptr = new int[capacity];
    }
    else{
        ptr = NULL;
    }
}
bool Array::empty(){
    return lastIndex==-1;
}
bool Array::isFull(){
    return lastIndex == capacity - 1;
}
void Array::append(int data){
    if(isFull()){
        cout<<"\nArray is Fully Filled.";
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
}
void Array::edit(int index,int data){
    if(index<0 || index>lastIndex){
        cout<<"\nInvalid Index.";
    }
    else{
        ptr[index]=data;
    }

}
void Array::insertElement(int index,int data){
    if(index<0 || index>lastIndex + 1){
        cout<<"\nInvalid Index";
    }
    else if(isFull()){
        cout<<"\nOverflow";
    }
    else{
        for(int i = lastIndex;i>=index;i--){
            ptr[i+1]=ptr[i];
        }
        ptr[index]=data;
        lastIndex++;
    }
}
void Array::deleteElement(int index){
    if(index<0 || index>lastIndex){
            cout<<"\nInvalid Index.";
    }
    else{
        for(int i = index; i <=lastIndex;i++ ){
            ptr[i] = ptr[i + 1];
        }
        lastIndex--;
    }
}
int Array::getElement(int index){
    if(index<0 || index>lastIndex){
        cout<<"\nInvalid Index or empty array.";
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
            break;
        }
    }
    return -1;
}
Array::Array(Array &a){
    cout<<"Deep copy ctor called......";
    capacity = a.capacity;
    lastIndex = a.lastIndex;
    ptr = new int[capacity];
    for(int i = 0; i <= lastIndex;i++){
        ptr[i]=a.ptr[i];
    }
}//Copy ctor jab call ho rah to object create ho rah hai matlab new array bn rah hai 
//lekin jab assignment operator chl rah hai toh object pehle se created hai to ho skta hai na ki 
//eska pointer kisi ko point kar rah ho to pehle pointer ko null krenge hmm thik hai to jo 
//line to jo dono if vali condition hai vo lgana ki jrurt hi nhi hai copy ctor vala mein
Array& Array::operator=(Array &a){
    //return type array vala hmna refrence kyu kiya hai meini object kyu nhi return kiya refrence kyu return kiyan hai
    //because of infinite call because agr hm array ka object return krenge to object ki ek or copy bnegi abhi yaah nya object create
    //nhi hoga
        if(this != &a){
            if(ptr!=NULL)
                delete []ptr;
        capacity = a.capacity;
        lastIndex = a.lastIndex;
        ptr = new int[capacity];
        for(int i = 0; i<=lastIndex;i++){
            ptr[i] = a.ptr[i];
        }
        }
        return *this;
}
int main(){
    Array a(7),a2(7);
    a.append(4);
    a.append(43);
    a.append(32);
    a.append(98);
    a.append(18);
    a.append(54);
    cout<<a.find(18)<<endl;
    a.deleteElement(4);
    cout<<a.count()<<endl;
    bool m = a.empty();
    bool n = a.isFull();
    Array a1=a;
    cout<<endl;
    a.show();
    cout<<endl;
    a1.show();
    a2 = a;
    cout<<endl;
    a1.show();
    cout<<endl;
    cout<<m<<endl<<n<<endl;
    return 0;
}