#include <stdio.h>
#include <iostream>
#include <vector>
#include <array>
using namespace std;
int main(){
    int vegetarian = 0; int non_vegetarian = 0;
    string busca = "x";
    vector<string> Espetos = {
        "--oooo-ooo--",
        "--xx--x--xx--",
        "--o---o--oo--",
        "--xx--x--ox--",
        "--xx--x--ox--"
    };
    int tamanho = Espetos.size();
    for(int i = 0; i < tamanho; i++){
        cout << Espetos[i] << "\n";
        if(Espetos[i].find(busca) != std::string::npos){
            non_vegetarian++;
        }
        else{
            vegetarian++;
        }
    }
    cout << "Resultado" << endl;
    cout << "["<< vegetarian << "," << non_vegetarian << "]";
    return 0;
}