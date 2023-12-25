#include<iostream>
using namespace std;
class Array{
    private:
        int capacity;
        int last_index;
        int *ptr;
    
    public:
     Array(int size){
        capacity = size;
        ptr = new int[size];
        last_index = size-1;
     }
     void insert_element(){
        for(int i = 0; i < last_index; i++){
            cin>>ptr[i];
            
        }
     }
     void showelement(){
        for(int i = 0; i < last_index; i++){
            cout<<ptr[i]<<" ";
        }
     }
     bool empty(){
        if(last_index!=0){
            return false;
        }
        else{
            return true;
        }
     }
     ~Array(){
        delete []ptr;
        ptr = NULL;
     }
};
int main(){
    Array a(8);
    a.insert_element();
    a.showelement();
    bool p = a.empty();
    cout<<endl;
    cout<<p;
    return 0;
}