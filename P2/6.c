#include<stdio.h>

struct dma {
    int dia;
    int mes;
    int ano;
};

int main () {
    struct dma nasce;
    struct dma hoje;
    nasce.dia = 10;
    nasce.mes = 10;
    nasce.ano = 1980;
    hoje.dia = 10;
    hoje.mes = 10;
    hoje.ano = 2018;

    if (nasce.dia < hoje.dia) {
        c = hoje.dia - nasce.dia;
    } else {
        c = (30 - nasce.dia) + hoje.dia;
    }


    if (nasce.mes < hoje.mes) {
        b = hoje.mes - nasce.mes;
    } else {
        b = (12 - nasce.mes) + hoje.mes;
    }


    if (nasce.ano < hoje.ano && nasce.mes < hoje.mes) {
        a = hoje.ano - nasce.ano;
    } else if ()




    return 0;
}
