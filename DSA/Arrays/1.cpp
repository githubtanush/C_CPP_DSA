#include<iostream>
using namespace std;
class Array{
    private:
        int capacity;
        int last_index;
        int *ptr;
    
    public:
    //functions bda hai complicated hai loop use ho rah hai variable hai to membership label lga kar bahar bnao yeh 
    //better esliye hai kyuki hme inline nhi bnana functions ko or class mein by default inline bnta hai  
    Array(int);
    bool isEmpty();
    void append(int);
    bool isFull();
    void insert(int,int);
    void editElement(int,int);
    void del(int);
    int getItem(int);
    int count();
     ~Array();
    int find(int);
};
Array::Array(int size){
        if(size>0){
        capacity = size;
        //Capacity aayga na ptr mein toh chay size brabar hi hai lekin dynamic array to capacity se hi bn rah hai na 
        ptr = new int[capacity];
        last_index = -1;
        }
        else{
            ptr=NULL;
        }
     }
bool Array::isEmpty(){
    return last_index==-1;
}
bool Array::isFull(){
    return last_index==capacity;
}
void Array::append(int data){
    if(isFull()){
        cout<<"\nOverflow";
    }
    else{
        last_index++;
        ptr[last_index]=data;
    }
}
void Array::insert(int index, int data){
    if(index<0 || index>last_index+1){
        cout<<"\nInvalid Index";
    }
    else if(isFull()){
        cout<<"\nOverflow";
    }
    else{
        for(int i = last_index;i>=index; i--){
            ptr[i+1]=ptr[i];
        }
        ptr[index]=data;
        last_index++;
    }
}
void Array::editElement(int index, int data){
    if(index<0 || index>last_index){
        cout<<"\nInvalid Index or Empty Index";
    }
    else{
        ptr[index]=data;
    }
}
void Array::del(int index){
    if(index<0 || index>last_index){
        cout<<"\nInvalid index or empty array";
    }
    else{
        for(int i = index; i < last_index; i++ ){
            ptr[i]=ptr[i+1];
            last_index--;
        }
    }
}
int Array::getItem(int index){
        if(index<0 || index>last_index){
            cout<<"\n Invalid index or empty array";
            //So when we use the exception handling then it becomes the good version of the code;
            throw new exception();
            //we don't write try catch in this get item prefer this because that is user's decision that what they 
            //want to print
            //if these condition is false return not working compiler thinks in early binding so also 
            //return something after the int block
        }

        //do robust programming because we can train for all the situations
        //Java is mainly develop for robust programming that's why software are good when enable in java
        //but in cpp they introduce the concept of exception handling
        return ptr[index];
        //error to nhi aaygi par return chlna to pkka ho gya na //means this is wrong.
        //in future this line is become the bug return vali
}
int Array::count(){
    return last_index+1;
}
Array::~Array(){
    delete []ptr;
}
int Array::find(int data){
    int i;
    for(int i = 0; i < last_index;i++){
        if(ptr[i]==data){
            return i;
        }
    }
    return -1;
}    

int main(){
    Array a1(8);
    a1.insert(2,5);
    return 0;
}