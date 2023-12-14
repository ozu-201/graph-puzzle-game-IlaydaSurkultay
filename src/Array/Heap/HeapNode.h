//
// Created by is021433 on 12/14/2023.
//

#ifndef GRAPH_PUZZLE_GAME_ILAYDASURKULTAY_HEAPNODE_H
#define GRAPH_PUZZLE_GAME_ILAYDASURKULTAY_HEAPNODE_H


//
// Created by Olcay Taner YILDIZ on 24.04.2023.
//

#ifndef DATASTRUCTURES_CPP_HEAPNODE_H
#define DATASTRUCTURES_CPP_HEAPNODE_H


class HeapNode {
private:
    int data;
    int name;
public:
    HeapNode(int data, int name);
    HeapNode();
    int getData() const;
    int getName() const;
    void setData(int _data);
};


#endif //DATASTRUCTURES_CPP_HEAPNODE_H

#endif //GRAPH_PUZZLE_GAME_ILAYDASURKULTAY_HEAPNODE_H
