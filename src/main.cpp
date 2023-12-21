//
// Created by is021433 on 12/14/2023.
//

#include "main.h"
#include <iostream>
#include <fstream>
using namespace std;
int main{
    string turkishline;
    isstream turkishFile("turkish-dictionary.txt");
    while(gelline(turkishFile,turkishline)){
        turkishFile >> turkishline;
        if(turkishline==3){
            cout<<turkishline;
        }

    }
        turkishFile.close();
};