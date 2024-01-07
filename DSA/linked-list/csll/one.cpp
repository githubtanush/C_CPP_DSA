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
        void insertAtpos(node*,int);
        void deleteFirst();
        void deletelast();
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
        last->next = n;
    }
}
void CLL::insertAtLast(int data){
    node *n;
    n = new node;
    n->item = data;
    if(last == NULL){
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
    if(last){
        t = last->next;
    
    do{
        if(t->item==data)
            return t;
        t = t->next;
    }while(t!=last->next);
    }
    return NULL;
}
void CLL::show() {
    if (last == nullptr) {
        cout << "Empty list" << endl;
        return;
    }

    node *t = last->next;
    do{
        cout << t->item << "->";
        t = t->next;
    } while(t!=last->next);
    cout << endl;
}
void CLL::insertAtpos(node *temp,int data){
    if(temp){
        node *n = new node;
        n->item = data;
        n->next = temp->next;
        temp->next = n;
        if(temp==last){
            last = n;
        }
    }
}
void CLL::deleteFirst(){
    node *t;
    if(last){
        if(last->next == last){
            delete last;
            last = NULL;
        }
        else{
            t = last->next;
            last->next = t->next;
            delete t;
        }
    }
}
void CLL::deletelast(){
    node *t;
    if(last){
        if(last->next==last){
            delete last;
            last = NULL;
        }
        else{
            t = last->next;
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
        if(t->item == data){
            deleteFirst();
        }
        else{
            do 
            {
                if(t->next->item==data){
                    r = t->next;
                    t->next = r->next;
                    if(r==last)
                        last=t;
                    delete r;
                    break;
                }
                t = t->next;
            }while(t!=last->next);
        }
    }
}
CLL::~CLL(){
    while(last)
    deleteFirst();
}
int main(){
    CLL c;
    c.insertAtStart(67);
    c.insertAtStart(43);
    c.insertAtStart(21);
    c.insertAtStart(98);
    c.insertAtLast(28);
    c.insertAtLast(32);
    c.insertAtLast(56);
    node* m = c.search(28);
    c.insertAtpos(m,78);
    cout<<m<<"          ";
    c.deleteFirst();
    c.deletelast();
    c.deleteNode(43);
    c.show();
    return 0;
}