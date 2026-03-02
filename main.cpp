#include <iostream>
#include "MyList.cpp"

int main() {
    MyList list;

    list.insertFront(20);
    list.insertFront(15);
    list.insertFront(10);
    list.insertFront(5);

    list.print();

    return 0;
}
