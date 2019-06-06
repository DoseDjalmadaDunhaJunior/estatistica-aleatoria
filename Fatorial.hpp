//
// Created by josé djalma da cunha júnior on 2019-06-06.
//

#ifndef ALEATORIO_FATORIAL_HPP
#define ALEATORIO_FATORIAL_HPP
#include <iostream>
using namespace std;

class Fatorial {
public:
    int fatorial(int n){
        if(n == 0){
            return 1;
        }
        else{
            return n * fatorial(n-1);
        }
    }
};


#endif //ALEATORIO_FATORIAL_HPP
