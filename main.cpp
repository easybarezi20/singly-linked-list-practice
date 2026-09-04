#include <iostream>
#include "MyList.cpp"

int main() {
    MyList list;

    list.insertFront(20);
    list.insertFront(15);
    list.insertFront(10);
    list.insertFront(5);

    list.print();

    list.clearList();

    list.insertBack(25);
    list.insertBack(20);
    list.insertBack(15);
    list.insertBack(35);
    list.insertBack(27);
    list.insertBack(10);
    list.insertBack(5);
    list.insertBack(100);

    list.print();

    list.swapValuesOfFirstAndLastNodes();

    list.print();
    return 0;
}
