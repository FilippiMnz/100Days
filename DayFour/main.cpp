/*
To train for an upcoming marathon, Johnny goes on one long-distance run each Saturday. 
He wants to track how often the number of miles he runs this Saturday exceeds the number of miles run the previous Saturday.
This is called a progress day.

Create a function that takes in an array of miles run every Saturday and returns Johnny's total number of progress days.

Examples

progressDays([3, 4, 1, 2]) ➞ 2
// There are two progress days, (3->4) and (1->2)

progressDays([10, 11, 12, 9, 10]) ➞ 3

progressDays([6, 5, 4, 3, 2, 9]) ➞ 1

progressDays([9, 9])  ➞ 0

*/

#include <vector>
#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    vector<int> lista = {6, 5, 4, 3, 2, 9};
    int tamanho = lista.size() - 1;
    int contador = 0;
    for(int n = 0; n < tamanho; n++){
        if(lista[n] < lista[n+1]){
            contador++;
        }
    }
    cout << contador << endl;
    return 0;

}