#include<iostream>
using namespace std;
struct node{
    int item;
    node* next;
};
class SLL{
        private:
            node *start;
        
        public:
            SLL();
            void insertAtStart(int);
            void insertAtLast(int);
            node* search(int);
            void insertionAtSpecific(node*,int);
            void deletefirst();
            void deletelast();
            void deletespecific(int);
            void show();
            ~SLL();
};
SLL::SLL(){
    start = NULL;
}
void SLL::insertAtStart(int data){
    node *n;
    n = new node;
    n->item = data;
    n->next = start;
    start = n;
}
void SLL::insertAtLast(int data){
    node *n;
    n = new node;
    n->item = data;
    n->next = NULL;
    if(start==NULL)
        start=n;
    else{
        node *t;
        t = start;
        while(t->next!=NULL){
            t = t->next;
        }
        t->next = n;
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
node* SLL::search(int data){
    node *t;
    t = start;
            while(t!=NULL){
                if(t->item==data){
                    return t;
                }
                t = t->next;
            }
            return NULL;
        }
void SLL::insertionAtSpecific(node* temp,int data){
    node *n;
    if(temp!=NULL){
        n = new node;
        n->item = data;
        n->next = temp->next;
        temp->next = n;
    }
}
void SLL::deletefirst(){
    node *t;
    t = start;
    if(start){
        start=start->next;
        delete t;
    }
}
void SLL::deletelast(){
    node *t;
    if(start){
        t = start;
        if(t->next==NULL){
                start = start->next;
                delete t;
        }
        else{
            while(t->next->next!=NULL){
                t = t->next;
            }
            delete t->next;
            t->next = NULL;
        }
    }
}
void SLL::deletespecific(int data){
    node *t,*temp;
    if(start){
        t = start;
        if(t->item==data){
            start = start -> next;
            delete t;
        }
        else{
            while(t->next!=NULL){
                if(t->next->item == data){
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
SLL::~SLL(){
    while(start)
        deletefirst();
}
int main(){
    SLL s;
    s.insertAtStart(43);
    s.insertAtStart(3);
    s.insertAtStart(27);
    s.insertAtStart(39);
    s.insertAtStart(48);
    s.insertAtLast(34);
    s.insertAtLast(78);
    s.insertAtLast(32);
    node *f=s.search(78);
    cout<<f<<" ";
    s.insertionAtSpecific(f,98);
    s.deletefirst();
    s.deletelast();
    s.deletespecific(27);
    s.show();
    return 0;
}