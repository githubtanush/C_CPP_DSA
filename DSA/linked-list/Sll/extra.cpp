// // // // #include<iostream>
// // // // using namespace std;
// // // // struct node{
// // // //     int item;
// // // //     node* next;
// // // // };
// // // // class SLL{
// // // //         private:
// // // //             node* start;       
// // // //         public:
// // // //         SLL();
// // // //         void insertatbeg(int);
// // // //         //yeh to programmer ko sochne do na ki kaha se data lena hai aap es function ko esliye bna rah ho ki 
// // // //         //programmer ko data rkhna chay to vo kaise rkh skta hai aap sirf service de yeh vo sochaga ki user se data lena hai 
// // // //         //ya default kuch data hai pehle se hi
// // // //         void insertAtlast(int);
// // // //         node* search(int);
// // // //         void insertAfter(node* , int);
// // // //         void deletefirst();
// // // //         void deletelast();
// // // //         void deleteNode(int);
// // // //         ~SLL();
// // // // };
// // // // SLL::SLL(){
// // // //     start = NULL;
// // // // }
// // // // void SLL::insertatbeg(int data){
// // // //         node *n;
// // // //         n = new node;
// // // //         n->item = data;
// // // //         n->next = start;
// // // //         start = n;
// // // // }
// // // // void SLL::insertAtlast(int data){
// // // //     node *n,*t;
// // // //     n = new node;
// // // //     n->item = data;
// // // //     n->next = NULL;
// // // //     if(start==NULL){
// // // //         start = n;
// // // //     }
// // // //     else{
// // // //         t = start;
// // // //         while(t->next != NULL){//ab if ki condition nhi lgegi kyuki hma bahar bahar check krna hai so 
// // // //         //while laga do 
// // // //             t = t->next ;
// // // //         }
// // // //         t->next = n;
// // // //     }
// // // // }
// // // // node* SLL::search(int data){
// // // //     node *t;
// // // //     t = start;
// // // //     while(t!=NULL){
// // // //         if(t->item == data){
// // // //             return t;
// // // //         }
// // // //         t = t->next;
// // // //     }
// // // //     return NULL;
// // // // }
// // // // void SLL::insertAfter(node *temp, int data){
// // // //     node *n;
// // // //     if(temp!=NULL){
// // // //         n = new node;
// // // //         n->item = data;
// // // //         n->next = temp->next;
// // // //         temp->next = n;
// // // //     }
// // // // }
// // // // void SLL::deletefirst(){
// // // //     node *t;
// // // //     if(start){
// // // //         t = start;
// // // //         start = start -> next;
// // // //         delete t;
// // // //     }
// // // // }
// // // // void SLL::deletelast(){
// // // //     node *t;
// // // //     if(start){
// // // //         t = start;
// // // //         if(t->next = NULL){
// // // //             delete t;
// // // //             start = NULL;
// // // //         }
// // // //         else{
// // // //             while(t->next->next!=NULL){
// // // //                 t = t -> next;
// // // //             }
// // // //             delete t->next;
// // // //             t->next = NULL;
// // // //         }
// // // //     }
// // // // }
// // // // void SLL::deleteNode(int data){
// // // //     node *t,*temp;
// // // //     if(start){
// // // //         t = start;
// // // //         if(t->item == data){
// // // //             start = start->next;
// // // //             delete t;a
// // // //         }
// // // //         else{
// // // //             while(t->next != NULL){
// // // //                 if(t->next->item==data){
// // // //                     temp=t->next;
// // // //                     t->next = temp->next;
// // // //                     delete temp;
// // // //                     break; 
// // // //                 }
// // // //                 t=t->next;
// // // //             }
// // // //         }
// // // //     }
// // // // }
// // // // SLL::~SLL(){
// // // //     while(start){
// // // //         deletefirst();
// // // //     }
// // // // }
// // // // int main(){
// // // //     return 0;
// // // // }


// // #include<iostream>
// // #include<stdio.h>
// // using namespace std;
// // struct node{
// //         int item;
// //         node* next;
// // };
// // class SLL:public node{
// //         private:
// //             node* start;
        
// //         public:
// //             SLL();
// //             SLL(SLL &);
// //             void insertAtStart(int);
// //             void insertAtLast(int);
// //             node* search(int);
// //             void insertAtspecific(node*,int);
// //             void deletefirst();
// //             void deletelast();
// //             void deleteNode(int);
// //             ~SLL();
// //             void show();
// // };
// // SLL::SLL(){
// //     start = NULL;
// // }
// // void SLL::insertAtStart(int data){
// //     node *n;
// //     n = new node;
// //     n->item = data;
// //     n->next = start;
// //     start = n;
// // }
// // void SLL::insertAtLast(int data){
// //     node *n,*t;
// //     n = new node;
// //     n->item = data;
// //     n->next = NULL;
// //     if(start == NULL){
// //         start = n;
// //     }
// //     else{
// //         t = start;
// //         while(t->next!=NULL){
// //             t = t->next;
// //         }
// //         t->next = n;
// //     }
// // }
// // void SLL::show(){
// //     node *t;
// //     t = start;
// //     while(t!=NULL){
// //         cout<<t->item<<" ";
// //         t = t->next;
// //     }
// // }
// // node* SLL::search(int data){
// //         node *t;
// //         t = start;
// //         while(t!=NULL){
// //             if(t->item == data){
// //                 return t;
// //             }
// //         }
// //     return NULL;
// // }
// // void SLL::insertAtspecific(node* temp, int data){
// //     node *n;
// //     if(temp){
// //     n = new node;
// //     n->item = data;
// //     n->next = temp->next;
// //     temp->next = n;
// //     }
// // }
// // void SLL::deletefirst(){
// //     node *t;
// //     if(start){
// //         t = start;
// //         start = start->next;
// //         delete t;
// //     }
// // }
// // void SLL::deletelast(){
// //     node *t;
// //     if(start){
// //         t = start;
// //         if(t->next == NULL){
// //             delete t;
// //             start = NULL;
// //         }
// //         else{
// //             while(t->next->next != NULL){
// //                 t = t->next;
// //             }
// //             delete t->next;
// //             t->next = NULL;
// //         }
// //     }
// // }
// // void SLL::deleteNode(int data){
// //     node *t,*temp;
// //     if(start){
// //         t = start;
// //         if(t->item == data){
// //             start = start->next;
// //             delete t;
// //         }
// //     else{
// //         while(t->next!=NULL){
// //             if(t->next->item==data){
// //                 temp = t->next;
// //                 t->next  = temp->next;
// //                 delete temp;
// //                 break;
// //             }
// //             t = t->next;
// //         }
// //     }
// //     }
// // }
// // SLL::~SLL(){
// //     cout<<"Dtor called...";
// //     while(start)
// //         deletefirst();
// // }
// // SLL::SLL(SLL &s){
// //     while(s.start)
// //         start = s.start;
// // }

// // int main(){
// //     SLL newNode,m=newNode;
// //     newNode.insertAtStart(8);
// //     newNode.insertAtStart(34);
// //     newNode.insertAtStart(78);
// //     newNode.insertAtLast(23);
// //     newNode.insertAtLast(76);
// //     newNode.insertAtLast(54);
// //     node *t = newNode.search(78);
// //     cout<<t<<" ";
// //     newNode.insertAtspecific(t,87);
// //     newNode.deletefirst();
// //     newNode.deletelast();
// //     newNode.deleteNode(34);
// //     newNode.show();
// //     m.show();
// //     return 0;
// // }




// #include<iostream>
// #include<stdio.h>
// using namespace std;
// struct node{
//     int item;
//     node *next;
// };
// class SLL{
//     private:
//         node *start;

//     public:
//         SLL();
//         void insertatbeginning(int);
//         void insertatend(int);
//         node* search(int);
//         void insertionAfter(node*, int);
//         void deletefirst();
//         void deletelast();
//         void deletespecific(int);
//         ~SLL();
//         void show();
// };
// SLL::SLL(){
//     start = NULL;
// }
// void SLL::insertatbeginning(int data){
//     node *n;
//     n = new node;
//     n->item = data;
//     n->next = start;
//     start = n;
// }
// void SLL::insertatend(int data){
//         node *n,*t;
//         n = new node;
//         n->item = data;
//         n->next = NULL;
//         if(start==NULL){
//             start = n;
//         }
//         else{
//             t = start;
//             while(t->next!=NULL){
//                 t=t->next;
//             }
//             t->next = n;
//         }
// }
// void SLL::show(){
//     node *t;
//     t = start;
//     while(t!=NULL){
//         cout<<t->item<<"->";
//         t = t->next;
//     }
// }
// node* SLL::search(int data){
//     node *t;
//     t = start;
//     while(t!=NULL){
//         if(t->item == data){
//             return  t;
//         }
//         t = t->next;
//     }
//     return NULL;
// }
// void SLL::insertionAfter(node *temp,int data){
//     node *n;
//     if(temp!=NULL){
//         n = new node;
//         n->item = data;
//         n->next = temp->next;
//         temp->next = n;
//     }
// }
// void SLL::deletefirst(){
//         node *t;
//         if(start){
//         t = start; 
//         start = start->next;
//         delete t;
//         }
// }
// void SLL::deletelast(){
//     node *t;
//     if(start){
//         t = start;
//         if(t->next==NULL){
//             delete t;
//             start = NULL;
//         }
//         while(t->next->next != NULL){
//             t = t->next;
//         }
//         delete t->next;
//         t->next = NULL;
//     }
// }
// void SLL::deletespecific(int data){
//     node *t,*temp;
//     if(start){
//         t = start;
//         if(t->item==data){
//             start = start->next;
//             delete t;
//         }
//         else{
//             while(t->next!=NULL){
//                 if(t->next->item == data){
//                     temp = t->next;
//                     t->next = temp->next;
//                     delete temp;
//                     break;
//                 }
//                 t = t->next;
//             }
//         }
//     }
// }
// SLL::~SLL(){
//     while(start)
//         deletefirst();
// }

// int main(){
//     SLL s;
//     s.insertatbeginning(5);
//     s.insertatbeginning(43);
//     s.insertatbeginning(87);
//     s.insertatend(65);
//     s.insertatend(23);
//     node *t = s.search(87);
//     cout<<t<<" ";
//     s.insertionAfter(t,76);
//     s.deletefirst();
//     s.deletelast();
//     s.deletespecific(5);
//     s.show();
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
        void insertAtStart(int);
        void insertAtLast(int);
        node* search(int);
        void insertAfter(node*,int);
        void show();
        void deleteFirst();
        void deleteLast();
        void deleteSpecific(int);
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
    node *n,*t;
    n = new node;
    n->item = data;
    n->next = NULL;
    if(start==NULL)
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
        t = t->next;
    }
    return NULL;
}
void SLL::insertAfter(node* temp, int data){
    node *n,*t;
    if(temp!=NULL){
        n = new node;
        n->item = data;
        n->next = temp->next;
        temp->next = n;
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
void SLL::deleteFirst(){
    node *t;
    if(start){
    t = start;
    start = start->next;
    delete t;
    }
}
void SLL::deleteLast(){
    node *t;
    if(start){
        t = start;
        if(t->next==NULL){
            start = start->next;
            delete t;
        }
        else{
            while(t->next->next!=NULL){
                t=t->next;
            }
            delete t->next;
            t->next = NULL;
        }
    }
}
void SLL::deleteSpecific(int data){
    node *t,*temp;
    if(start){
        t = start;
        if(t->item==data){
            start = start->next;
            delete t;
        }
        else{
            while(t->next!=NULL){
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
    while(start)
        deleteFirst();
}
int main(){
    SLL s;
    s.insertAtStart(8);
    s.insertAtStart(43);
    s.insertAtStart(98);
    s.insertAtLast(78);
    s.insertAtLast(83);
    s.insertAtLast(54);
    node *p = s.search(78);
    s.deleteFirst();
    s.deleteLast();
    s.deleteSpecific(78);
    cout<<p<<"      ";
    s.show();
    return 0;
}
























