//
// Created by is021433 on 12/14/2023.
//

#ifndef GRAPH_PUZZLE_GAME_ILAYDASURKULTAY_PATH_H
#define GRAPH_PUZZLE_GAME_ILAYDASURKULTAY_PATH_H

//
// Created by Olcay Taner YILDIZ on 15.05.2023.
//

#ifndef DATASTRUCTURES_CPP_PATH_H
#define DATASTRUCTURES_CPP_PATH_H


class Path {
private:
    int distance;
    int previous;
public:
    Path(int distance, int previous);
    Path() = default;
    int getDistance() const;
    void setDistance(int _distance);
    void setPrevious(int _previous);
};


#endif //DATASTRUCTURES_CPP_PATH_H


#endif //GRAPH_PUZZLE_GAME_ILAYDASURKULTAY_PATH_H
