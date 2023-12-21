//
// Created by is021433 on 12/14/2023.
//

#include "Main.h"
#include <iostream>
#include <fstream>

using namespace std;


int main(){
    std::string turkishline;
    std::istream turkishFile = std::istream("turkish-dictionary.txt");
    while (getline(turkishFile, turkishline)){
        turkishFile >> turkishline;
        if (turkishline.length() == 3) {
            cout << turkishline;
        }

    }
    turkishFile.close();

    return 0;
}
