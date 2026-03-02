#ifndef MyList_h
#define MyList_h

#include "Node.h"

class MyList
{
    public:

        MyList();
    
        void insertFront(int);
        void insertBack(int);
        void print();
        void clearList();
        ~MyList();
      
    private:
        Node* first;
        int count;
};


#endif