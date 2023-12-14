//
// Created by is021433 on 12/14/2023.
//

#ifndef GRAPH_PUZZLE_GAME_ILAYDASURKULTAY_NODE_H
#define GRAPH_PUZZLE_GAME_ILAYDASURKULTAY_NODE_H


//
// Created by Olcay Taner YILDIZ on 6.03.2023.
//

#ifndef DATASTRUCTURES_CPP_NODE_H
#define DATASTRUCTURES_CPP_NODE_H
#include <string>

using namespace  std;

class Node {
private:
    int data;
    Node* next;
public:
    explicit Node(int data);
    void setNext(Node* _next);
    Node* getNext();
    int getData();
    string to_string();
};


#endif //DATASTRUCTURES_CPP_NODE_H


#endif //GRAPH_PUZZLE_GAME_ILAYDASURKULTAY_NODE_H
