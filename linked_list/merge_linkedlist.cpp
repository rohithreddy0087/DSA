#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(){
            data = 0;
            next = NULL;
        }

        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
};

class LinkedList {
    Node* head;
    public:
        LinkedList(){
            head = NULL;
        }
        
        Node* getHead(){
            return head;
        }
        
        void insertNode(int);
        
        void insertNodeat(int,int);
        
        void printLinkedlist();
        
        void deleteNode(int);
};

void LinkedList::insertNode(int data){
    Node* newnode = new Node(data);
    if(head == NULL){
        head = newnode;
    }
    else{
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void LinkedList::insertNodeat(int data, int pos){
    Node* newnode = new Node(data);
    int count = 0;
    if(pos == 0){
        newnode->next = head;
        head = newnode;
    }
    else{
        Node* temp = head;
        Node* prev;
        while(temp->next != NULL){
            if(pos == count){
                prev->next = newnode;
                newnode->next = temp;
            }
            prev = temp;
            temp = temp->next;
            count++;
        }
    }
}

void LinkedList::deleteNode(int node_number){
    int count = 1;
    Node* temp = head;
    Node* prev;
    while(temp->next != NULL){
        if(count == node_number){
            if(count == 1){
                head = temp->next;
                delete temp;
                break;
            }
            else{
                prev->next = temp->next;
                delete temp;
                break;
            }
        }
        prev = temp;
        temp = temp->next;
        count++;
    }
    if(count == node_number){
        prev->next = NULL;
        delete temp;
    }
    else{
        cout<<"Index out of range"<<endl;
    }
    

}

void LinkedList::printLinkedlist(){
    Node* temp = head;
    while(temp->next != NULL){
        cout<<temp->data<<"|"<<temp->next<<" ";
        temp = temp->next;
    }
    cout<<temp->data<<"|"<<temp->next<<" "<<endl;
}

void merge(LinkedList l1, LinkedList l2){
    Node* h1 = l1.getHead();
    Node* h2 = l2.getHead();
    Node* h;
    if(h1->data > h2->data){
        h = h2;
        h2 = h2->next;
    }
    else{h = h1;h1 = h1->next;}
    Node* head = h;
    while(h->next != NULL){
        if(h1->data > h2->data){
            h->next = h2;
            h = h2;
            h2 = h2->next;
        }
        else{
            h->next = h1;
            h = h1;
            h1 = h1->next;
        }
        
        cout<<h->data<<" ";
    }
    cout<<endl;
}

int main() 
{ 
    // Node first(10);
    LinkedList l1;
    l1.insertNode(10);
    l1.insertNode(20);
    l1.insertNode(30);
    l1.insertNode(40);
    l1.printLinkedlist();

    LinkedList l2;
    l2.insertNode(5);
    l2.insertNode(8);
    l2.insertNode(35);
    l2.printLinkedlist();
    
    merge(l1,l2);
    
    
    return 0; 
} 