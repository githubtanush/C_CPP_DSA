// #include<iostream>
// using namespace std;
// struct node{
//     int item;
//     node* next;
// };
// class SLL{
//         private:
//             node* start;
        
//         public:
//         SLL();
//         void insertatbeg(int);
//         //yeh to programmer ko sochne do na ki kaha se data lena hai aap es function ko esliye bna rah ho ki 
//         //programmer ko data rkhna chay to vo kaise rkh skta hai aap sirf service de yeh vo sochaga ki user se data lena hai 
//         //ya default kuch data hai pehle se hi
//         void insertAtlast(int);
//         node* search(int);
//         void insertAfter(node* , int);
//         void deletefirst();
//         void deletelast();
//         void deleteNode(int);
//         ~SLL();
// };
// SLL::SLL(){
//     start = NULL;
// }
// void SLL::insertatbeg(int data){
//         node *n;
//         n = new node;
//         n->item = data;
//         n->next = start;
//         start = n;
// }
// void SLL::insertAtlast(int data){
//     node *n,*t;
//     n = new node;
//     n->item = data;
//     n->next = NULL;
//     if(start==NULL){
//         start = n;
//     }
//     else{
//         t = start;
//         while(t->next != NULL){//ab if ki condition nhi lgegi kyuki hma bahar bahar check krna hai so 
//         //while laga do 
//             t = t->next ;
//         }
//         t->next = n;
//     }
// }
// node* SLL::search(int data){
//     node *t;
//     t = start;
//     while(t!=NULL){
//         if(t->item == data){
//             return t;
//         }
//         t = t->next;
//     }
//     return NULL;
// }
// void SLL::insertAfter(node *temp, int data){
//     node *n;
//     if(temp!=NULL){
//         n = new node;
//         n->item = data;
//         n->next = temp->next;
//         temp->next = n;
//     }
// }
// void SLL::deletefirst(){
//     node *t;
//     if(start){
//         t = start;
//         start = start -> next;
//         delete t;
//     }
// }
// void SLL::deletelast(){
//     node *t;
//     if(start){
//         t = start;
//         if(t->next = NULL){
//             delete t;
//             start = NULL;
//         }
//         else{
//             while(t->next->next!=NULL){
//                 t = t -> next;
//             }
//             delete t->next;
//             t->next = NULL;
//         }
//     }
// }
// void SLL::deleteNode(int data){
//     node *t,*temp;
//     if(start){
//         t = start;
//         if(t->item == data){
//             start = start->next;
//             delete t;a
//         }
//         else{
//             while(t->next != NULL){
//                 if(t->next->item==data){
//                     temp=t->next;
//                     t->next = temp->next;
//                     delete temp;
//                     break; 
//                 }
//                 t=t->next;
//             }
//         }
//     }
// }
// SLL::~SLL(){
//     while(start){
//         deletefirst();
//     }
// }
// int main(){
//     return 0;
// }


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
        void insertAtBeginning(int);
        void insertAtLast(int);
        node* search(int);
        void insertAfter(node*, int);
        void deletefirst();
        void deletelast();
        void deleteElement(int);

};
SLL::SLL(){
    start = NULL;
}
void SLL::insertAtBeginning(int data){
    node *n;
    n = new node;
    n->item = data;
    n->next = start;
    start = n;
}
void SLL::insertAtLast(int data){
    node *n,*t;
    n = new node;
    n->item = data;
    n->next = NULL;
    if(start)
        start = n;
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
        if(t->item == data)
            return t;
        t=t->next;
    }
    return NULL;
}
void SLL::insertAfter(node* temp, int data){
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
                t = t->next;
            }
            delete t->next;
            t->next = NULL;
        }
    }
}
void SLL::deleteElement(int data){

}
int main(){

}