#include<iostream>
#include<stdio.h>
using namespace std;
struct node{
    int item;
    node* next;
    node* prev;
};
class DLL{
    private:
    node* start;

    public:
        DLL();
        void insertAtstart(int);
        void insertAtlast(int);
};
DLL::DLL(){
    start = NULL;
}
void DLL::insertAtstart(int data){
    node* n;
    n = new node;
    n->prev = NULL;
    n->item = data;
    n->next = start;
    start -> prev = n;
    if(start != NULL){
         start->prev= n;
    }
    start = n;
}
void DLL::insertAtlast(int data){

}
int main(){

}