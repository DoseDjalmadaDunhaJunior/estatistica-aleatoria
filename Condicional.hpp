//
// Created by josé djalma da cunha júnior on 2019-06-06.
//

#ifndef ALEATORIO_CONDICIONAL_HPP
#define ALEATORIO_CONDICIONAL_HPP
#include "Variaveis.hpp"
#include "Fatorial.hpp"
class Condicional {
public:
    double PAB (double pa, double pb){

    }

    double PAB (double K1, double N1, double K2, double N2){
        k1 = K1;
        k2 = K2;
        n1 = N1;
        n2 = N2;
        Condicional oi;
        intersecao(k1,n1,k2,n2);
        Variaveis a2;
        a2.k = k2;
        a2.n = n2;
        double v1,v2;
        v1 = UU;
        v2 = a2.basico();
        cout<<"cima: "<<v1<<"\nbaixo: "<<v2<<endl;
        return v1/v2;
    }
    //U
    double uniao(double K1, double N1, double K2, double N2){
        k1 = K1;
        k2 = K2;
        n1 = N1;
        n2 = N2;
        Condicional oi;
        intersecao(k1,n1,k2,n2);
        Variaveis a1,a2;
        a1.p = k1;
        a1.n = n1;
        a2.p = k2;
        a2.n = n2;
        return (a1.basico() + a2.basico()) - UU;
    }
    //rosto triste
    void intersecao(double K1, double N1, double K2, double N2){
        k1 = K1;
        k2 = K2;
        n1 = N1;
        n2 = N2;
        Variaveis oi,bye;
        oi.k = k1;
        oi.n = n1;
        bye.k = k2;
        bye.n = n2;
        double v1,v2;
        v1 = oi.basico();
        v2 = bye.basico();
        double temp = 1 - (oi.basico() + bye.basico());
        UU = 1 - (oi.basico() + bye.basico());
    }

    double complementar(double a){
        return 1 - a;

    }

    double combinatorio(int n,int k){
        Fatorial oi;
        nf = oi.fatorial(n);
        kf = oi.fatorial(k);
        int nk = oi.fatorial(n - k);
        return nf/(kf*nk);

    }

private:
    double k1 = NULL,n1 = NULL,k2 = NULL,n2 = NULL;
    double UU = NULL;
    int nf = NULL,kf = NULL;

};


#endif //ALEATORIO_CONDICIONAL_HPP
