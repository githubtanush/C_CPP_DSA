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
        void insertAtpos(node*,int);
        void show();
        void deleteFirst();
        void deleteLast();
        void deleteNode(int);
        ~CDLL();
};
CDLL::CDLL(){
    start = NULL;
}
void CDLL::insertAtStart(int data){
    node *n;
    n = new node;
    n->item = data;
    if(start == NULL){
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
    if(start){
        t = start;
        do{
            if(t->item==data){
                return t;
            }
            t = t->next;
        }while(t!=start);
    }
    return NULL;
}
void CDLL::insertAtpos(node *temp,int data){
    if(temp){
        node *n;
        n = new node;
        n->item = data;
        n->next = temp->next;
        n->prev = temp;
        temp->next = n;
        temp->next->prev = n;
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
    if(start){
        if(start->next==start){
            delete start;
            start = NULL;
        }
        else{
            node *r;
            r = start->prev;
            r->prev->next = start;
            start->prev = r->prev;
            delete r;
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
                    if(t->item==data)
                    {
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
CDLL::~CDLL(){
    while(start)
        deleteFirst();
}
int main(){
    CDLL c;
    c.insertAtStart(34);
    c.insertAtStart(23);
    c.insertAtStart(89);
    c.insertAtStart(76);
    c.insertAtStart(90);
    c.insertAtLast(31);
    c.insertAtLast(67);
    c.insertAtLast(81);
    c.insertAtLast(24);
    c.deleteFirst();
    c.deleteLast();
    c.deleteNode(34);
    c.show();
    return 0;
}