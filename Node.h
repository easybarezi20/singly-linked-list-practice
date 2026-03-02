#ifndef NODE_H
#define NODE_H
class Node 
{
public:
    //constructors
    Node() : data(0), next(nullptr){}
    Node(int newData) : data(newData) , next(nullptr) {} 
    Node(int newData, Node* newNext) : data(newData), next(newNext) {}
    //setters
    void setData(int newData){ data = newData; }
    void setNext(Node* newNext){ next = newNext; }

    //getters
    int getData() const { return data; }
    Node* getNext() const { return next; }

    ~Node() {}

private:
    int data;
    Node* next;
};
#endif