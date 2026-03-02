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
void MyList::print()
{
    if(first == nullptr) cout << "List is EMPTY!" << endl;
    Node* current = first;
    while(current != nullptr)
    {
        cout << current->getData() << endl;
        current = current->getNext();
    }
}
void MyList::clearList()
{

}
MyList::~MyList()
{
    clearList();
}