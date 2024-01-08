#include<iostream>
using namespace std;
struct node{
    node *prev;
    int item;
    node *next;
};
class CDLL{
    private:
        node *start;
    public:
    CDLL();
    void insertAtStart(int);
    void insertAtLast(int);
    node* search(int);
    void insertAtPos(node*,int);
    void deleteFirst();
    void deleteLast();
    void deleteNode(int);
    void show();
    ~CDLL();
};
CDLL::CDLL(){
    start = NULL;
}
void CDLL::insertAtStart(int data){
    node *n;
    n = new node;
    n->item = data;
    if(start==NULL){
        n->prev = n;
        n->next = n;
        start = n;
    }
    else{
        n->prev = start->prev;
        n->next = start;
        start->prev->next = n;
        start->prev = n;
        start = n;
    }
}
void CDLL::insertAtLast(int data){
    node *n;
    n = new node;
    n->item = data;
    if(start==NULL){
        n->prev = n;
        n->next = n;
        start = n;
    }
    else{
        n->prev = start->prev;
        n->next = start;
        start->prev->next = n;
        start->prev = n;
    }
}
node* CDLL::search(int data){
    node *t;
    t = start;
    do{
        if(t->item==data)
            return t;
        t = t->next;
    }while(t!=start);
    return NULL;
}
void CDLL::insertAtPos(node* temp,int data){
    node *n;
    if(temp){
    n =new node;
    n->item = data;
    n->prev = temp;
    n->next = temp->next;
    temp->next->prev = n;
    temp->next = n;
    }
}
void CDLL::deleteFirst(){
    if(start){
        if(start->next==start){
            delete start;
            start = NULL;
        }
        else{
            node *r;
            r = start;
            start->prev->next = start->next;
            start->next->prev = start->prev;
            start = start->next;
            delete r;
        }
    }
}
void CDLL::deleteLast(){
    node *t;
    if(start){
        if(start->next==start){
            delete start;
            start = NULL;
        }
        else{
            node *t;
            t = start->prev;
            t->prev->next = start;
            start->prev = t->prev;
            delete t;
        }
    }
}
void CDLL::deleteNode(int data){
if(start){
    if(start->item==data){
        deleteFirst();
    }
    else{
        node *t;
        t = start->next;
        while(t!=start){
            if(t->item==data){
                t->next->prev = t->prev;
                t->prev->next = t->next;
                delete t;
                break;
            }
            t = t->next;
        }
    }
}
}
void CDLL::show(){
    node *t;
    t = start;
    do{
        cout<<t->item<<"->";
        t = t->next;
    }while(t!=start);
}
CDLL::~CDLL(){
    while(start)
    deleteFirst();
}
int main(){
    CDLL s;
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