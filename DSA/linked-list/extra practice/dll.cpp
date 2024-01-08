#include<iostream>
using namespace std;
struct node{
    node *prev;
    int item;
    node *next;
};
class DLL{
    private:
        node *start;
    public:
    DLL();
    void insertAtStart(int);
    void insertAtLast(int);
    node* search(int);
    void insertAtPos(node*,int);
    void deleteFirst();
    void deleteLast();
    void deleteNode(int);
    void show();
    ~DLL();
};
DLL::DLL(){
    start = NULL;
}
void DLL::insertAtStart(int data){
    node *n = new node;
    n->item = data;
    n->next = start;
    n->prev = NULL;
    if(start)
        start->prev = n;
    start = n;
}
void DLL::insertAtLast(int data){
    node *n; 
    n = new node;
    n->item = data;
    n->next = NULL;
    if(start==NULL){
        n->prev = NULL;
        start = n;
    }
    else{
        node *t;
        t = start;
        while(t->next!=NULL){
            t = t->next;
        }
        n->prev = t;
        t->next = n;
    }
}
node* DLL::search(int data){
    node *t;
    t = start;
    while(t!=NULL){
        if(t->item==data)
            return t;
        t = t->next;
    }
    return NULL;
}
void DLL::insertAtPos(node* temp,int data){
    node *n;
    if(temp){
    n =new node;
    n->item = data;
    n->next = temp->next;
    n->prev = temp;
    if(temp->next!=NULL)
        temp->next->prev = n;
    temp->next = n;
    }
}
void DLL::deleteFirst(){
    node *t;
    if(start){
        if(start->next==NULL){
            delete start;
            start = NULL;
        }
        
        else{
        t = start;
        start->next->prev = NULL;
        start = start->next;
        delete t;
        }
    }
}
void DLL::deleteLast(){
    node *t;
    if(start){
             node *t;
        if(start->next==NULL){
            delete start;
            start=NULL;
        }
        else{
            t = start;
            while(t->next!=NULL){
                t = t->next;
            }
            t->prev->next = NULL;
            delete t;
        }
    }
}
void DLL::deleteNode(int data){
        node *t;
        t = start;
        while(t){
            if(t->item==data){
                if(t->next!=NULL)
                    t->next->prev = t->prev;
                if(t->prev!=NULL)
                    t->prev->next = t->next;
                if(t->prev == NULL)
                    start = t->next;
                delete t;
                break;
            }
            t = t->next;
        }
}
void DLL::show(){
    node *t;
    t = start;
    while(t!=NULL){
        cout<<t->item<<"->";
        t = t->next;
    }
}
DLL::~DLL(){
    while(start)
        deleteFirst();
}
int main(){
    DLL s;
    s.insertAtStart(34);
    s.insertAtStart(23);
    s.insertAtStart(87);
    s.insertAtStart(26);
    s.insertAtLast(31);
    s.insertAtLast(65);
    s.insertAtLast(90);
    s.insertAtLast(33);
    node* f = s.search(23);
    cout<<f<<"              ";
    s.insertAtPos(f,78);
    s.deleteFirst();
    s.deleteLast();
    s.deleteNode(34);
    s.show();
    return 0;
}