#ifndef _NODE_H
#define _NODE_H

class Node{
    public:
        int _data;
        Node *_next;
    
        Node();
        int GetData();
        void SetData(int data);
        Node* GetNext();
        void SetNext(Node* next);
        ~Node();
};
#endif