// #include<iostream>
// #include<stdio.h>
// using namespace std;
// struct node{
//     int item;
//     node *next;
// };
// class CLL{
//     private:
//         node *last;
//     public:
//         CLL();
//         void insertAtStart(int);
//         void insertAtlast(int);
//         node* search(int);
//         void insertAtPos(node*,int);
//         void show();
//         void deleteFirst();
//         void deleteLast();
//         void deleteNode(int);

// };
// CLL::CLL(){
//     last = NULL;
// }
// void CLL::insertAtStart(int data){
//     node *n;
//     n = new node;
//     n->item = data;
//     if(last==NULL){
//         n->next = n;
//         last = n;
//     }
//     else{
//         n->next = last->next;
//         last->next = n;
//     }
// }
// void CLL::insertAtlast(int data){
//         node *n;
//         n = new node;
//         n->item = data;
//         if(last==NULL){
//             n->next = n;
//             last = n;
//         }
//         else{
//             n->next = last->next;
//             last->next = n;
//             last = n;
//         }
// }
// node* CLL::search(int data){
//     if(last == NULL){
//         return NULL;
//     }
//     else{
//         node *t;
//         if(last){
//             t = last->next;
//         }
//         do{
//             if(t->item == data){
//                 return t;
//             }
//             t = t->next;
//         }while(t!=last->next);
//     }
//     return NULL;
// }
// void CLL::insertAtPos(node *temp,int data){
//     if(temp){
//         node *n = new node;
//         n->item = data;
//         n->next = temp->next;
//         temp->next = n;
//         if(temp==last){
//             last = n;
//         }
//     }
// }
// void CLL::show(){
//     node *t;
//     if(last==NULL){
//         cout<<"Circular linked list is empty...";
//         return;
//     }
//     t = last->next;
//     do{
//         cout<<t->item<<"->";
//         t = t->next;
//     }while(t!=last->next);
// }
// void CLL::deleteFirst(){
//     node *t;
//     if(last){
//         if(last->next == last){
//             delete last;
//             last = NULL;
//         }
//         else{
//             t = last->next;
//             last->next = t;
//             delete t;
//         }
//     }
// }
// void CLL::deleteLast(){
//         node *t;
//         if(last){
//             if(last->next == last){
//                 delete last;
//                 last = NULL;
//             }
//             else{
//                 t = last->next;
//                 while(t->next!=last){
//                     t = t->next;
//                 }
//                 t->next = last->next;
//                 delete last;
//                 last = t;
//             }
//         }
// }
// void CLL::deleteNode(int data){
//         node *t,*r;
//         if(last){
//             t = last->next;
//             if(t->item == data){
//                 deleteFirst();
//             }
//             else{
//                 do {
//                     if(t->next->item == data){
//                         r = t->next;
//                         t->next = r->next;
//                         if(r == last)
//                             last = t;
//                         delete r;
//                         break;
//                     }
//                     t = t->next;
//                 }while(t!=last->next);
//             }
//         }
// }
// int main(){
//     CLL c;
//     c.insertAtStart(54);
//     c.insertAtStart(23);
//     c.insertAtStart(98);
//     c.insertAtStart(34);
//     c.insertAtlast(28);
//     c.insertAtlast(93);
//     c.insertAtlast(25);
//     node *p = c.search(34);
//     c.insertAtPos(p,67);
//     cout<<p<<"             ";
//     c.show();
//     return 0;
// }


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
        void insertAtEnd(int);
        node* search(int);
        void insertAtpos(node*,int);
        void show();
        void deleteFirst();
        void deleteLast();
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
void CLL::insertAtEnd(int data){
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
        do{
            if(t->item==data){
            return t;
        }
        t = t->next;
        }while(t!=last->next);
    }
    return NULL;
}
void CLL::insertAtpos(node *temp,int data){
    node *n;
    n = new node;
    if(temp){
        n->item = data;
        n->next = temp->next;
        temp->next = n;
        if(last==NULL)
            last = n;
    }
}
void CLL::show(){
    node *t;
    if(last == NULL){
        cout<<"Cll is empty"<<"         ";
        return ;
    }
    t = last->next;
    if(last){
    do{
        cout<<t->item<<"->";
        t = t->next;    
    }while(t!=last->next);
    }
}
void CLL::deleteFirst(){
    node *t;
    if(last){
        if(last->next==last){
            delete last;
            last = NULL;
        }
        else{
        t = last->next;
        last->next = t;
        delete t;
        }
    }
}
void CLL::deleteLast(){
        node *t;
        
}
int main(){
    CLL c;
    c.insertAtStart(38);
    c.insertAtStart(23);
    c.insertAtStart(54);
    c.insertAtStart(18);
    c.insertAtStart(84);
    c.insertAtEnd(47);
    c.insertAtEnd(89);
    c.insertAtEnd(22);
    node *m = c.search(54);
    cout<<m<<"              ";
    c.insertAtpos(m,98);
    c.show();
    return 0;
}
