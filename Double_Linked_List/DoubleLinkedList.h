//
// Created by Stephy Bernades  on 9/7/24.
//

#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H

using namespace std;

class Node {
public:
    int value;
    Node* next;
    Node* prev;

    //constructor
    Node(int value) {
        this -> value = value;
        next = nullptr;
        prev = nullptr;
    }
};

class DoubleLinkedList {
private:
    Node* head;
    Node* tail;
    int length;

public:
    //constructor
    DoubleLinkedList(int value) {
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
        length = 1;
    }

    // print list
    void printList() {
        Node* temp = head;   //temp starts in head
        while(temp) { //while temp is not nullptr it will continue iterating
            cout << temp -> value << endl; //print the value of temp
            temp = temp -> next;    //moves temp to the next node
        }
    }

    //get head
    void getHead() {
        cout << "Head: " << head -> value << endl;
    }

    //get tail
    void getTail() {
        cout << "Tail: " << tail -> value << endl;

    }

    //get length
    void getLength() {
        cout << "Length: " << length << endl;
    }

};



#endif //DOUBLELINKEDLIST_H
