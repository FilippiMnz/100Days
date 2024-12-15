#include <iostream>
#include <sstream>
#include <string>

using namespace std;
class Solution{
    public:
        string FindNemo(std::string Frase){
            std::string Palavra = "Nemo";
            std::string vazio = "";
            std::istringstream stream(Frase);
            std::string palavraAt;
            int posicaopalavra = 1;
            bool achado = false;
            while(stream >> palavraAt){
                if(palavraAt == Palavra){
                    achado = true;
                    break;
                }
                posicaopalavra++;
            }
            if(achado){
                std::cout << "I found Nemo at " << posicaopalavra <<"!" <<endl;
            }
            else{
                std::cout << "I can't find Nemo :(" << endl;
            }
            return vazio;

        }
};
int main(){
    Solution Sol;
    std::string Frase = "I Nemo am";
    string result = Sol.FindNemo(Frase);

    cout << result << endl;

}