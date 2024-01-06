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
        void show();


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

int main(){
    CLL c;
    c.insertAtStart(67);
    c.insertAtStart(43);
    c.insertAtStart(21);
    c.insertAtStart(98);
    c.insertAtLast(28);
    c.insertAtLast(32);
    c.insertAtLast(56);
    c.show();
    return 0;
}