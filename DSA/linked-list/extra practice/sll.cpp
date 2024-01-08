#include<iostream>
using namespace std;
struct node{
    int item;
    node *next;
};
class SLL{
    private:
        node *start;
    public:
        SLL();
        void insertAtStart(int);
        void insertAtLast(int);
        node* search(int);
        void insertAtPos(node*,int);
        void deleteFirst();
        void deleteLast();
        void deleteNode(int);
        void show();
        ~SLL();
};
SLL::SLL(){
    start = NULL;
}
void SLL::insertAtStart(int data){
    node *n = new node;
    n->item = data;
    n->next = start;
    start = n;
}
void SLL::insertAtLast(int data){
    node *n,*t;
    n = new node;
    n->item = data;
    n->next = NULL;
    if(start==NULL){
        start = n;
    }
    else{
        t = start;
        while(t->next!=NULL){
            t = t->next;
        }
        t->next = n;
    }
}
node* SLL::search(int data){
    node *t;
    t = start;
    while(t!=NULL){
        if(t->item==data)
            return t;
        t = t->next;
    }
    return NULL;
}
void SLL::insertAtPos(node* temp,int data){
    node *n;
    if(temp){
    n =new node;
    n->item = data;
    n->next = temp->next;
    temp->next = n;
    }
}
void SLL::deleteFirst(){
    node *t;
    if(start){
        t = start;
        start = start->next;
        delete t;
    }
}
void SLL::deleteLast(){
    if(start){
             node *t;
        if(start->next==NULL){
            delete start;
            start=NULL;
        }
        else{
            t = start;
            while(t->next->next!=NULL){
                t = t->next;
            }
             delete t->next;
            t->next = NULL;
        }
    }
}
void SLL::deleteNode(int data){
    node *t,*temp;
    if(start){
        t = start;
        if(t->item==data){
            start = start->next;
            delete t;
        }
        else{
            while(t->next!=NULL){
                if(t->next->item==data){
                    temp = t->next;
                    t->next = temp->next;
                    delete temp;
                    break;
                }
                t = t->next;
            }
        }
    }
}
void SLL::show(){
    node *t;
    t = start;
    while(t!=NULL){
        cout<<t->item<<"->";
        t = t->next;
    }
}
SLL::~SLL(){
    while(start)
        deleteFirst();
}
int main(){
    SLL s;
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