cmake_minimum_required(VERSION 3.25)
project(graph_puzzle_game_IlaydaSurkultay)

set(CMAKE_CXX_STANDARD 17)

include_directories(src)
include_directories(src/Array)
include_directories(src/Array/Heap)
include_directories(src/General)
include_directories(src/List)
include_directories(src/List/Graph)

add_executable(graph_puzzle_game_IlaydaSurkultay
        src/Array/Heap/Heap.cpp
        src/Array/Heap/Heap.h
        src/Array/Heap/HeapNode.cpp
        src/Array/Heap/HeapNode.h
        src/Array/Heap/MinHeap.cpp
        src/Array/Heap/MinHeap.h
        src/Array/DisjointSet.cpp
        src/Array/DisjointSet.h
        src/Array/Set.cpp
        src/Array/Set.h
        src/General/AbstractGraph.cpp
        src/General/AbstractGraph.h
        src/General/Path.cpp
        src/General/Path.h
        src/List/Graph/Edge.cpp
        src/List/Graph/Edge.h
        src/List/Graph/EdgeList.cpp
        src/List/Graph/EdgeList.h
        src/List/Graph/Graph.cpp
        src/List/Graph/Graph.h
        src/List/Node.cpp
        src/List/Node.h
        src/List/Queue.cpp
        src/List/Queue.h
        )