#include<iostream>
using namespace std;
class Node{
public:
   Node* next;
   int data;
   Node(int d){
       next=NULL;
       data=d;
   }
};
class LinkedList{
public:
    Node* head;
    Node* tail;
    LinkedList(){
        head=tail=NULL;
    }
    void MakeLL(int x){
        Node* temp = new Node(x);
        if(head==NULL){
            head=tail=temp;
        }
        else{
            Node* t = head;
            while(t->next!=NULL){
                t=t->next;
            }
            t->next=temp;
            temp->next=NULL;
            tail=temp;
        }
    return;
    }
};
int safestperson(Node* h,int m){
    Node* ptr = h;
    Node* ptr_helper=h;
    while(ptr->next!=ptr){
        int i=1;
        while(i<m){
           ptr_helper=ptr;
           ptr=ptr->next;
           i++;
        }
        ptr_helper->next = ptr->next;
        Node* temp1 = ptr;
        ptr = ptr_helper->next;
        cout<<"Deleting "<<temp1->data<<endl;
        delete temp1;
    }
    return ptr->data;
}

int main(){
    int n,m;   cin>>n>>m;
    LinkedList l1;
    for(int i=1;i<=n;i++){
       l1.MakeLL(i);
    }
    (l1.tail)->next = l1.head;
    cout<<"Safe Person is : "<<safestperson(l1.head,m);
return 0;
}
