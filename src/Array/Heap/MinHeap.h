//
// Created by is021433 on 12/14/2023.
//

#ifndef GRAPH_PUZZLE_GAME_ILAYDASURKULTAY_MINHEAP_H
#define GRAPH_PUZZLE_GAME_ILAYDASURKULTAY_MINHEAP_H


//
// Created by Olcay Taner YILDIZ on 18.05.2023.
//

#ifndef DATASTRUCTURES_CPP_MINHEAP_H
#define DATASTRUCTURES_CPP_MINHEAP_H


#include "Heap.h"

class MinHeap : public Heap{
protected:
    void percolateDown(int no) override;
    void percolateUp(int no) override;
public:
    explicit MinHeap(int N);
    void update(int k, int newValue) override;
};


#endif //DATASTRUCTURES_CPP_MINHEAP_H


#endif //GRAPH_PUZZLE_GAME_ILAYDASURKULTAY_MINHEAP_H
