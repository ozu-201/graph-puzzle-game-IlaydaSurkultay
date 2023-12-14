//
// Created by is021433 on 12/14/2023.
//

#ifndef GRAPH_PUZZLE_GAME_ILAYDASURKULTAY_EDGELIST_H
#define GRAPH_PUZZLE_GAME_ILAYDASURKULTAY_EDGELIST_H

//
// Created by Olcay Taner YILDIZ on 8.05.2023.
//

#ifndef DATASTRUCTURES_CPP_EDGELIST_H
#define DATASTRUCTURES_CPP_EDGELIST_H


#include "Edge.h"

class EdgeList {
private:
    Edge* head;
    Edge* tail;
public:
    EdgeList();
    ~EdgeList();
    bool isEmpty() const;
    Edge* search(int to) const;
    void insert(Edge* newEdge);
    Edge* getHead();
};


#endif //DATASTRUCTURES_CPP_EDGELIST_H


#endif //GRAPH_PUZZLE_GAME_ILAYDASURKULTAY_EDGELIST_H
