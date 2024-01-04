#include<iostream>
using namespace std;
struct node{
    int item;
    node* prev;
    node* next;
};
class DLL{
    private:
        node* start;
    public:
        DLL();
        void insertAtStart(int);
        void insertAtLast(int);
        node* search(int);
        void insertAtSpecific(node*,int);
        void deleteFirst();
        void deleteLast();
        void deleteSpecific(int data);
        void show();
        ~DLL();
};
DLL::DLL(){
    start=NULL;
}
void DLL::insertAtStart(int data){
    node *n;
    n = new node;
    n->prev = NULL;
    n->item = data;
    n->next = start;
    if(start)
        start->prev = n;
    start  = n;
}
void DLL::insertAtLast(int data){
    node *n,*t;
        n = new node;
        n->item = data;
        n->next = NULL;
        if(start == NULL){
            n->prev = NULL;
            start = n;
        }
        else{
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
void DLL::insertAtSpecific(node* temp,int data){
    node *n,*t;
    n = new node;
    n->prev = temp;
    n->item = data;
    n->next = temp->next;
    if(temp->next!=NULL)
        temp->next->prev = n;
    temp->next = n;
}
void DLL::show(){
    node *t;
    t = start;
    while(t!=NULL){
        cout<<"<-"<<t->item<<"->";
        t = t->next;
    }
}
void DLL::deleteFirst(){
    node *t;
    t = start;
    if(start){
        if(start->next==NULL){
            delete start;
            start = NULL;
        }
        else{
            start->next->prev = NULL;
            start = start->next;
            delete t;
        }
    }
}
void DLL::deleteLast(){
    node *t;
    if(start){
        if(start->next==NULL){
            delete start;
            start = NULL;
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
void DLL::deleteSpecific(int data){
    node *t;
    t = start;
    while(t){
        if(t->item==data)
        {
            if(t->next != NULL)
                t->next->prev = t->prev;
                
            if(t->prev != NULL)
                t->prev->next = t->next;
                
            if(t->prev == NULL)
                start = t->next;

            delete t;
            break;
        }
        t = t->next;
    }
}
DLL::~DLL(){
    while(start)
        deleteFirst();
}
int main(){
    DLL d;
    d.insertAtStart(8);
    d.insertAtStart(87);
    d.insertAtStart(34);
    d.insertAtLast(67);
    d.insertAtLast(32);
    node *d1 = d.search(34);
    cout<<d1<<"         ";
    d.deleteFirst();
    d.deleteLast();
    d.deleteSpecific(8);
    d.show();
    return 0;
}