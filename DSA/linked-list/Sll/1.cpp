#include<iostream>
using namespace std;
struct node{
    int item;
    node* next;
};
class SLL{
    private:
    node* start;

    public:
        SLL();
        void insertion_at_beginning(int);//hm data argument mein hi kyu de hmm user se data input krwa lenge
        //hmm input mein data kyu  nhi le rah hai
        //kyuki programmer jab data ko enter krta hai tab us  programmer ko decide krna do na ki kaha se data lena hai
        //user se kisi file se ya kisi or jagah se
        //insertion_at_beginning code is just at service for programmer yeh programmer ko decide krne do user se data lena hai ya nhi
        //agar usne user se data lena hai to vo lega na to tum tension free rho
        void insertion_at_end(int);
        node* search(int);
        void insertafter(node*,int);
        void show();
        void deletefirst();
        void deletelast();
        void deleteNode(int);
        ~SLL();
        

};
SLL::SLL(){
    start = NULL;
}
void SLL::insertion_at_beginning(int data){
            node *n;
            n = new node;
            n->item = data;
            n->next = start;
            start = n;
}
void SLL::insertion_at_end(int data){
    node *n,*t;
    n = new node[data];
    n->item = data;
    n->next = NULL;
    if(start==NULL)
        start = n;
    else{
        t = start;
        while(t->next!=NULL)
            t = t->next;
    t->next = n;
    }
}
node* SLL::search(int data){
    node *t;
    t=start;
    while(t!=NULL){
        if(t->item == data)
            return t;
        t = t->next;
    }
}
void SLL::insertafter(node* temp,int data){
    if(temp!=NULL){
    node *n;
    n = new node;
    n->item = data;
    n->next = temp->next;
    temp->next = n;
    }
}
void SLL::deletefirst(){
    node* t;
    if(start){
        t = start;
        start = start->next;
        delete t;
    }
}
void SLL::deletelast(){
    node *t;
    if(start){
        t = start;
        if(t->next == NULL){
            delete t;
            start = NULL;
        }
        else{
            while(t->next->next!=NULL){
                t=t->next;
            }
            delete  t->next;
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
            while(t->next->next != NULL)
                {
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
SLL::~SLL(){
    while(start){
        deletefirst();
    }
}
void SLL::show(){
    node *t;
    t = start;
    while(t != NULL){
        cout<<t->item<<"->";
        t = t->next;
    }
}








int main(){
    SLL s1;
    s1.insertion_at_beginning(8);
    s1.insertion_at_beginning(34);
    s1.insertion_at_beginning(32);
    s1.insertion_at_beginning(99);
    s1.insertion_at_end(78);
    s1.insertion_at_end(87);
    node *t = s1.search(99);
    s1.insertafter(t,4);
    s1.show();
    return 0;
}