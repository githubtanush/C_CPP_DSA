//Stack with array
#include<iostream>
using namespace std;
class Stack{
    private:
        int capacity;
        int top;
        int *ptr;
    
    public:
        Stack(int);
        void push(int);
        bool isFull();
        bool isEmpty();
        int peek();
        int pop();
        int getSize();
        ~Stack();
        void reverse();
        Stack& operator=(Stack &);
        Stack(Stack &);
};
Stack::Stack(int cap){
    if(cap<0)
        cap = -cap;
    if(cap==0)
        cap = 4;
    capacity = cap;
    top = -1;
    ptr = new int[cap];
}
bool Stack::isFull(){
    return top==capacity-1;
}
bool Stack::isEmpty(){
    return top==-1;
}
int Stack::peek(){
    try{
        if(top==-1)
            throw 1;
        return top[ptr];
    }
    catch(int e){
        cout<<"Empty Stack"<<endl;
        return 0;
    }
}
void Stack::push(int data){
    if(isFull()){
        cout<<"\nStack Overflow"<<endl;
    }
    else{
        top++;
        ptr[top] = data;
    }
}
int Stack::pop(){
    try{
        if(top==-1)
            throw 1;
        int x = ptr[top];
        top--;
        return x;
    }
    catch(int e){
        cout<<"Empty Stack";
        return 0;
    }
}
int Stack::getSize(){
    return top+1;
}
Stack::~Stack(){
    delete []ptr;
}
void Stack::reverse(){
    int t;
    for(int i = 0; i<(top+1)/2;i++){
        t = ptr[i];
        ptr[i] = ptr[top-i];
        ptr[top-i] = t;
    }
}
void reverseStack(Stack &s){
    Stack* tempStack = new Stack(s.getSize());
    while(!s.isEmpty()){
        tempStack->push(s.pop());
    }
    s = *tempStack;
}
Stack& Stack::operator=(Stack &s){
        if(this!=&s){
            capacity = s.capacity;
            top = s.top;
            if(ptr!=NULL){
                delete []ptr;
            }
            ptr = new int[capacity];
            for(int i = 0; i<=top;i++){
                ptr[i]=s.ptr[i];
            }
        }
    return *this;
}
Stack::Stack(Stack &s){
    capacity = s.capacity;
    top = s.top;
    ptr = new int[capacity];
    for(int i = 0; i<=top;i++){
        ptr[i] = s.ptr[i];
    }
}
int main(){
    Stack s(8);
    s.push(78);
    s.push(98);
    s.push(72);
    s.push(32);
    s.push(87);
    s.peek();
    bool g = s.isFull();
    cout<<g<<endl;
    bool h = s.isEmpty();
    cout<<h<<endl;
    while(!s.isEmpty()){
        cout<<s.pop()<<" ";
    }

    reverseStack(s);
    cout<<endl;

    while(!s.isEmpty()){
        cout<<s.pop()<<" ";
    }
    return 0;
}
