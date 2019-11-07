#include <iostream>
#include <map>
#include <iomanip>

#define PRIORIDADE  "alta"
#define RESPONSAVEL "fulano"

using namespace std;

int main(){

    map <string, map<string, string>> tarefa;
    string local;

    cout<<"Informe o local: ";
    getline(cin,local);

    cout<<"Informe a prioridade: ";
    getline(cin,tarefa[local][PRIORIDADE]);

    cout<<"Informe o responsável: ";
    getline(cin,tarefa[local][RESPONSAVEL]);

    cout<<setw(20)<<"LOCAL"<<setw(20)<<"PRIORIDADE"<<setw(20)<<"RESPONSÁVEL"<<setw(20)<<endl;

    for(auto& elem : tarefa){
    cout<<setw(20)<<elem.first<<setw(20)<<elem.second[PRIORIDADE]<<setw(20)<<elem.second[RESPONSAVEL]<<setw(20)<<endl;
    }


    return 0;
}