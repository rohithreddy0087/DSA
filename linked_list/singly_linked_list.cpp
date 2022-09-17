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

int main() 
{ 
    // Node first(10);
    LinkedList l;
    l.insertNode(2);
    l.insertNode(4);
    l.insertNode(17);
    l.insertNode(34);
    l.printLinkedlist();

    l.insertNodeat(45,2);
    l.insertNodeat(57,1);
    l.insertNodeat(7,0);
    l.insertNodeat(767,0);
    
    l.printLinkedlist();
    
    l.deleteNode(8);
    l.printLinkedlist();
    
    return 0; 
} 