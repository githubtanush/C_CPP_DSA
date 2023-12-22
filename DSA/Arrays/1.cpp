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
            int *ptr = new int[size];
        }
        bool empty(){
            
        }
        ~Array(){
            delete []ptr;
            ptr = NULL;
        }
};
int main(){
    Array a(8);
    return 0;
}