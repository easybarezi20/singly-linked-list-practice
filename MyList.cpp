#include "MyList.h"
#include <iostream>
using namespace std;

MyList::MyList()
{
    first = nullptr;
    count = 0;
}

void MyList::insertFront(int newData)
{
    Node* newNode = new Node(newData, first);
    first = newNode;
    count++;
}
void MyList::insertBack(int newData)
{
    Node* newNode = new Node(newData);
    if(first == nullptr)
    {
        first = newNode;
        return;
    }
    Node* current = first;
    while(current->getNext() != nullptr)
    {
        current = current->getNext();
    }
    current->setNext(newNode);
}
void MyList::print()
{
    if(first == nullptr) cout << "List is EMPTY!" << endl;
    Node* current = first;
    cout << "[ " ;
    while(current != nullptr)
    {
        cout << current->getData() << ", ";
        current = current->getNext();
    }
    cout << "]" << endl;
}
void MyList::clearList()
{
    Node* current = first;
    while(current != nullptr)
    {
        Node* temp = current;
        cout << "Deleting Node: " << current->getData() << endl;
        current = current->getNext();
        delete temp;
    }
    first = nullptr;
    cout << "Deleting Complete." << endl;
}
MyList::~MyList()
{
    Node *current = first;
    while(current != nullptr)
    {
        Node *temp = current;
        current = current->getNext();
        delete temp;
    }
    first = nullptr;
}