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
        void insertatbeg(int);
        //yeh to programmer ko sochne do na ki kaha se data lena hai aap es function ko esliye bna rah ho ki 
        //programmer ko data rkhna chay to vo kaise rkh skta hai aap sirf service de yeh vo sochaga ki user se data lena hai 
        //ya default kuch data hai pehle se hi
        void insertAtlast(int);
        node* search(int);
        void insertAfter(node* , int);

};
SLL::SLL(){
    start = NULL;
}
void SLL::insertatbeg(int data){
        node *n;
        n = new node;
        n->item = data;
        n->next = start;
        start = n;
}
void SLL::insertAtlast(int data){
    node *n,*t;
    n = new node;
    n->item = data;
    n->next = NULL;
    if(start==NULL){
        start = n;
    }
    else{
        t = start;
        while(t->next != NULL){//ab if ki condition nhi lgegi kyuki hma bahar bahar check krna hai so 
        //while laga do 
            t = t->next ;
        }
        t->next = n;
    }
}
node* SLL::search(int data){
    node *t;
    t = start;
    while(t!=NULL){
        if(t->item == data){
            return t;
        }
        t = t->next;
    }
    return NULL;
}
void SLL::insertAfter(node *temp, int data){

}



int main(){
    return 0;
}