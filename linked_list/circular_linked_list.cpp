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

class CircLinkedList {
    Node* head;
    public:
        CircLinkedList(){
            head = NULL;
        }
        
        void insertBegNode(int);
        
        void insertEndNode(int);
        
        void printCircLinkedList();
        
        void deleteNode(int);
};

void CircLinkedList::insertBegNode(int data){
    Node* newnode = new Node(data);
    if(head == NULL){
        head = newnode;
        head->next = newnode;
    }
    else{
        newnode->next = head->next;
        head->next = newnode;
        swap(newnode->data,head->data);
    }
}

void CircLinkedList::insertEndNode(int data){
    Node* newnode = new Node(data);
    if(head == NULL){
        head = newnode;
        head->next = newnode;
    }
    else{
        Node* temp = head;
        newnode->next = head->next;
        head->next = newnode;
        swap(newnode->data,head->data);
        head = newnode;
        
    }
}

void CircLinkedList::deleteNode(int node_number){
    int count = 1;
    Node* temp = head;
    Node* prev;
    while(temp->next != head){
        if(count == node_number){
            if(count == 1){
                head = temp->next;
                delete temp;
                break;
            }
            else{
                prev->next = temp->next;
                // delete temp;
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

void CircLinkedList::printCircLinkedList(){
    Node* temp = head;
    // cout<<temp->next<<" "<<head<<" "<<temp->data<<endl;
    while(temp->next != head){
        cout<<temp->data<<"|"<<temp->next<<" "<<endl;
        temp = temp->next;
    }
    cout<<temp->data<<"|"<<temp->next<<" "<<endl;
}

int main() 
{ 
    // Node first(10);
    CircLinkedList l;
    l.insertEndNode(2);
    l.insertEndNode(4);
    l.insertEndNode(17);
    l.insertEndNode(34);
    l.printCircLinkedList();

    // l.insertNodeat(45,2);
    // l.insertNodeat(57,1);
    // l.insertNodeat(7,0);
    // l.insertNodeat(767,0);
    
    // l.printCircLinkedList();
    
    l.deleteNode(3);
    l.printCircLinkedList();
    
    return 0; 
} 