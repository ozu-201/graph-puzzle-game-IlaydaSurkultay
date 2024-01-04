
#include "Array/Graph/Graph.h"
#include <iostream>
using namespace array;

int main(){
   Graph g = Graph(2000);

    std::string filePath = "C:\\Users\\is021433\\Desktop\\graph-puzzle-game-IlaydaSurkultay\\english-dictionary.txt";
    g.readAndNumberWords(filePath, 3);
    g.BFS("rep","wed");
    g.Dijkstra("rep","wed");

    Graph graph3(3);
    graph3.addWord("cat");
    graph3.addWord("cot");
    graph3.addWord("dog");
    graph3.addEdge("cat", "cot");
    graph3.addEdge("cot", "dog");

    graph3.BFS("cat", "dog");
    graph3.Dijkstra("cat", "dog");
    return 0;
}