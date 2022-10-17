#include <iostream>
#include <limits>

#include "LinkedList.h"
#include "Node.h"

using namespace std;

LinkedList::LinkedList(){
    head = NULL;
}

LinkedList::LinkedList(int *array,int Size){
    head = NULL;
    for (int i = 0; i < Size; i++) {
        addEnd(array[i]);
    }
}

void LinkedList::addFront(int newItem){
    Node *node = new Node();
    node->SetData(newItem);
    node->SetNext(head);
    head = node;
}

void LinkedList::addEnd(int newItem){
    Node *node = new Node();
    Node *last = head;
    node->SetData(newItem);
    node->SetNext(NULL);
    if(head == NULL){
        head = node;
        return;
    }
    while(last->GetNext() != NULL){
        last = last->GetNext();
    }
    last->SetNext(node);
    return;
}

void LinkedList::addAtPosition(int position, int newItem){
    Node* leftNode = new Node();
    leftNode = head;
    if (position == 1){
        addFront(newItem);
    }
    else {
        for (int i = 0; i < position - 2; i++){
            leftNode = leftNode->GetNext();
        }
        Node* newNode = new Node();
        newNode->SetData(newItem);
        newNode->SetNext(leftNode->GetNext());
        leftNode->SetNext(newNode);
    }
}

int LinkedList::search(int item){
    Node *nodeSearch = head;
    for (int i = 0; nodeSearch != NULL; i++ ) {
        if (nodeSearch->GetData() == item) {
            cout << i+1 << " ";
            return i+1;
        }
        nodeSearch = nodeSearch->GetNext();
    }
    cout << "0";
    return 0;
}

void LinkedList::deleteFront(){
    if (head != NULL){
        Node* node = head->GetNext();
        delete head;
        head = node;
    }
}

void LinkedList::deleteEnd(){
    Node* node, *leftNode = NULL;
    node = head;
    while (node->GetNext() != NULL){
        leftNode = node;
        node = node -> GetNext();
    }
    if (leftNode != NULL){
        leftNode->SetNext(NULL);
        delete node;
    } 
    else {
        head = NULL;
        delete node;
    }
}

void LinkedList::deletePosition(int position){
    if (position == 1){
        deleteFront();
        return;
    }

    Node *node = head, *leftNode = NULL;
    for (int i = 0; i < position-1; i++){
        if(node == NULL){
            break;
        }
        leftNode = node;
        node = node->GetNext();
    }

    if (node == NULL || position <= 0) {
        cout << "outside range";
        return;
    }

    if (node != NULL) {
        leftNode->SetNext(node->GetNext());
        delete node;
    } 
    else {
        deleteEnd();
    }
}

int LinkedList::getItem(int position){
    Node *nodeSearch = head;
    for(int i = 0; i < position-1; i++){
        if(nodeSearch == NULL){
            break;
        }
        nodeSearch = nodeSearch->GetNext();
    }

    if (nodeSearch == NULL){
        cout<<numeric_limits<int>::max()<<" ";
        return numeric_limits<int>::max();
    }

    cout<<nodeSearch->GetData()<<" ";
    return nodeSearch->GetData();
}

void LinkedList::printItems(){
    Node *Item = head;
    while(Item != NULL){
        cout<<Item->GetData()<<" ";
        Item = Item->GetNext();
    }
    cout<<endl;
}

LinkedList::~LinkedList(){
}