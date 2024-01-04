
#include "Graph.h"
#include "../Queue.h"
#include <vector>

namespace array{


    Graph::Graph(int vertexCount) : AbstractGraph(vertexCount){
        index=0;
        edges = new int*[vertexCount];
        for (int i = 0; i < vertexCount; i++){
            edges[i] = new int[vertexCount];
        }
        for (int i = 0; i < vertexCount; i++){
            for (int j = 0; j < vertexCount; j++){
                edges[i][j] = 0;
            }
        }
    }

    Graph::~Graph() {
        for (int i = 0; i < vertexCount; i++){
            delete[] edges[i];
        }
        delete[] edges;
    }

    void Graph::addEdge(int from, int to) {
        edges[from][to] = 1;
    }
    void Graph::addEdge(const std::string from, const std::string to) {
        for(int i = 0; i<words.size(); i++){
            for(int j = 0; j<words.size(); j++) {
                if (words[i] == from && words[j] == to) {
                    edges[i][j] = 1;
                    std::cout << "edge " << i<< " " << j << " 1\n";
                }
            }
        }
    }

    void Graph::addEdge(int from, int to, int weight) {
        edges[from][to] = weight;
    }
    void Graph::addWord(std::string word) {
        nums.push_back(index);
        words.push_back(word);
        index++;

    }

    void Graph::depthFirstSearch(bool *visited, int fromNode) {
        for (int toNode = 0; toNode < vertexCount; toNode++){
            if (edges[fromNode][toNode] > 0){
                if (!visited[toNode]){
                    visited[toNode] = true;
                    depthFirstSearch(visited, toNode);
                }
            }
        }
    }

    void Graph::breadthFirstSearch(bool *visited, int startNode) {
        int fromNode;
        Queue queue = Queue(100);
        queue.enqueue( Element(startNode));
        while (!queue.isEmpty()){
            fromNode = queue.dequeue().getData();
            for (int toNode = 0; toNode < vertexCount; toNode++) {
                if (edges[fromNode][toNode] > 0) {
                    if (!visited[toNode]){
                        visited[toNode] = true;
                        queue.enqueue( Element(toNode));
                    }
                }
            }
        }
    }

    void Graph::readAndNumberWords(const std::string & filePath, int wordLength){


        std::ifstream file(filePath);
        if (!file.is_open()) {
            std::cerr << "Error: Unable to open the file." << std::endl;
            return;
        }
        std::string line;
        int wordCount = 0;
        index = 0;

        while (std::getline(file, line)) {
            std::istringstream iss(line);
            std::string word;

            while (iss >> word) {
                word.erase(std::remove_if(word.begin(), word.end(), ispunct), word.end());
                if (word.length() == static_cast<size_t>(wordLength)) {
                    nums.push_back(index);
                    words.push_back(word);
                    index++;
                    wordCount++;
                }
            }
        }
        for(int i = 0; i<words.size(); i++){
            for(int j = i+1; j<words.size(); j++){
                if(isOneLetterDifference(words[i],words[j])){
                    addEdge(nums[i], nums[j]);
                    addEdge(nums[j], nums[i]);
                }
            }
        }
        file.close();
    }

    bool Graph::isOneLetterDifference(const std::string word1, const std::string word2) {
        bool x = false;
        int differences = 0;
        for (int i = 0; i < word1.length(); i++) {
            if (word1[i]!=word2[i]) {
                differences++;
            }
        }
        if(differences == 1){
            x = true;
        }
        return x;
    }
  void Graph::shortestPath(std::string startString, std::string endString) {

            int source;
            int destination;
            for(int i = 0; i<words.size(); i++){
                if(words[i]==startString){
                    source = nums[i];
                }
                if(words[i]==endString){
                    destination = nums[i];
                }
            }
        std::vector<bool> visited(vertexCount, false);
        std::vector<int> parent(vertexCount, -1);
        Queue queue(vertexCount);

        visited[source] = true;
        queue.enqueue(Element(source));

        while (!queue.isEmpty()) {
            Element currentElement = queue.dequeue();
            int currentNode = currentElement.getData();

            if (currentNode == destination) {
                break; // Destination reached
            }

            for (int nextNode = 0; nextNode < vertexCount; nextNode++) {
                // Check for an edge and if the node is unvisited
                if (edges[currentNode][nextNode] > 0 && !visited[nextNode]) {
                    visited[nextNode] = true;
                    parent[nextNode] = currentNode;
                    queue.enqueue(Element(nextNode));
                }
            }
        }

        if (parent[destination] == -1) {
            std::cout << "No path exists from " << source << " to " << destination << std::endl;
            return;
        }

        std::vector<int> path;
        for (int at = destination; at != -1; at = parent[at]) {
            path.push_back(at);
        }
        reverse(path.begin(), path.end());


        for (size_t i = 0; i < path.size(); i++) {
            std::string word = words[path[i]];
            std::cout << word << (i < path.size() - 1 ? " -> " : "\n");
        }
    }
    void Graph::BFS(std::string startString, std::string endString){
        std::cout << "Shortest path from " << startString << " to " << endString << ": (BFS) \n";
        shortestPath(startString,endString);
    }
    void Graph::Dijkstra(std::string startString, std::string endString){
        std::cout << "Shortest path from " << startString << " to " << endString << ": (Dijkstra) \n";
        shortestPath(startString,endString);
    }
}
