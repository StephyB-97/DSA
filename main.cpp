#include <iostream>
#include "Double_Linked_List/DoubleLinkedList.h"

using namespace std;
int main() {

    //Create new Node from double linked list with value 7
    DoubleLinkedList* myDLL = new DoubleLinkedList(7);

    myDLL-> printList();
    return 0;
}
