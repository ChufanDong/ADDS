#include <iostream>

#include "LinkedList.h"
#include "Node.h"

using namespace std;

LinkedList::LinkedList(){
    head = new Node;
    head->SetData(0);
    head->SetNext(NULL);
}

LinkedList::LinkedList(int *array,int Size){
    Node *newNode, *pNode;
    pNode = head;
    for (int i = 0; i < Size; i++) {        //将值一个一个插入单链表中
        newNode = new Node;
        newNode->SetData(array[i]);
        newNode->SetNext(NULL);             //新节点的下一个地址为NULL
        pNode->SetNext(newNode);            //当前结点的下一个地址设为新节点
        pNode = newNode;                    //将当前结点设为新节点
    }
    _size = Size;
    cout<<pNode->GetData()<<endl;
}

void LinkedList::addFront(int newItem){
}

void LinkedList::addEnd(int newItem){
}

void LinkedList::addAtPosition(int position, int newItem){
}

int LinkedList::search(int item){
}

void LinkedList::deleteFront(){
}

void LinkedList::deleteEnd(){
}

void LinkedList::deletePosition(int position){
}

int LinkedList::getItem(int position){
}

void LinkedList::printItems(){
}

LinkedList::~LinkedList(){
}