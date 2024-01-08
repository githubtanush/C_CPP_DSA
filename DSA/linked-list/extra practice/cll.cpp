#include<iostream>
using namespace std;
struct node{
    int item;
    node *next;
};
class CLL{
    private:
        node *last;
    public:
    CLL();
    void insertAtStart(int);
    void insertAtLast(int);
    node* search(int);
    void insertAtPos(node*,int);
    void deleteFirst();
    void deleteLast();
    void deleteNode(int);
    void show();
    ~CLL();
};
CLL::CLL(){
    last = NULL;
}
void CLL::insertAtStart(int data){
    node *n;
    n = new node;
    n->item = data;
    if(last==NULL){
        n->next = n;
        last = n;
    }
    else{
    n->next = last->next;
    last->next  = n;
    }
}
void CLL::insertAtLast(int data){
    node *n;
    n = new node;
    n->item = data;
    if(last==NULL){
        n->next = n;
        last = n;
    }
    else{
        n->next = last->next;
        last->next = n;
        last = n;
    }
}
node* CLL::search(int data){
    node *t;
    t = last->next;
    do{
        if(t->item==data)
            return t;
        t = t->next;
    }while(t!=last->next);
    return NULL;
}
void CLL::insertAtPos(node* temp,int data){
    node *n;
    if(temp){
    n =new node;
    n->item = data;
    n->next = temp->next;
    temp->next = n;
    if(temp==last)
        last = n;
    }
}
void CLL::deleteFirst(){
    if(last){
        if(last->next==last){
            delete last;
            last = NULL;
        }
        else{
            node *t;
            t = last->next;
            last->next = t->next;
            delete t;
        }
    }
}
void CLL::deleteLast(){
    node *t;
    if(last){
        if(last->next==last){
            delete last;
            last = NULL;
        }
        else{
            t  = last->next;
            while(t->next!=last){
                t = t->next;
            }
            t->next = last->next;
            delete last;
            last = t;
        }
    }
}
void CLL::deleteNode(int data){
    node *t,*r;
    if(last){
        t = last->next;
        if(t->item==data){
            deleteFirst();
        }
        else{
            do{
                if(t->next->item==data){
                    r = t->next;
                    t->next = r->next;
                    if(r==last)
                        last = t;
                    delete r;
                    break;
                }
            t= t->next;
            }while(t!=last->next);
        }
    }
}
void CLL::show(){
    node *t; 
    t = last->next;
    do{
        cout<<t->item<<"->";
        t = t->next;
    }while(t!=last->next);
}
CLL::~CLL(){
    while(last)
        deleteFirst();
}
int main(){
    CLL s;
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