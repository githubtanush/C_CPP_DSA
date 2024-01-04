#include<iostream>
using namespace std;
struct node{
    int item;
    node* next;
};
class CLL{
    private:
        node *last;
    public:
        CLL();
        void insertAtStart(int);
        void insertAtLast(int);
        node* search(int);
};
CLL::CLL(){
    last = NULL;
}
void CLL::insertAtStart(int data){
    node *n;
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
    if(last){
        t = last->next;
        do
        {
            if(t->item = data){
                return t;
            }
            t = t->next;
        }while(t!=last->next);
}
return NULL;
}

int main(){

}