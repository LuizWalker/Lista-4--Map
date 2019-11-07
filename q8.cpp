#include <map>
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream arquivo;

    map<string,int>freq;
    string nome;

    arquivo.open("q8.txt",ios::app);

    while(getline(arquivo,nome)){
        freq[nome]++;
    }

    for(auto& w : freq){
        cout<<"A frequencia com que o nome "<<w.first<<" aparece no aquivo é "<<w.second<<" vezes"<<endl;

    }
    arquivo.close();
    return 0;
}