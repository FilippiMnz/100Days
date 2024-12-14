//converter Dias para anos e anos para Dias
#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    int Dias, Anos, opt;
    cout << "O que você deseja converter?: " << endl;
    cout << "1-Dias para anos" << endl << "2-Anos para dias " << endl;
    cin >> opt;
    



    switch(opt){
        case 1:
            cout << "Insira a quantidade de Dias: ";
            cin >> Dias;
            cout << "Sua conversão resultou em: " << Dias/365 << " anos e " << Dias %365 <<" dias";
            break;
        case 2:
            cout << "Insira a quantidade de Anos que deseja converter: ";
            cin >> Anos;
            cout << "Sua conversão Resultou em: "<< Anos * 365 << " Dias ";
            break;
        default:
            cout << "opcao invalida";
    
    }

    return 0;
        
    
}