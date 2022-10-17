#include "Node.h"

Node::Node(){

}

int Node::GetData(){
    return _data;
}

void Node::SetData(int data){
    _data = data;
}

Node* Node::GetNext(){
    return _next;
}

void Node::SetNext(Node* next){
    _next = next;
}

Node::~Node(){

}