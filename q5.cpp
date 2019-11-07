#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <iomanip>
#define PRIORIDADE "prioridade"
#define RESPONSAVEL "responsável"
#define LOCAL "local"

using namespace std;

int main(){
    
    vector<map<string,string>>tarefas;
    map<string,string> temp;
    string local,op;
  

    do{
        cout<<"Digite o local da tarefa: ";
        getline(cin,temp[LOCAL]);

        cout<<"Digite a prioridade da tarefa: ";
        getline(cin,temp[PRIORIDADE]);

        cout<<"Informe o responsável: ";
        getline(cin,temp[RESPONSAVEL]);

        tarefas.push_back(temp);              
        cout<<"Deseja continuar?: ";
        cin>>op;
        cin.ignore();
    }while(op=="sim");

    cout<<left<<setw(20)<<"LOCAL"<<left<<setw(20)<<"PRIORIDADE"<<left<<setw(20)<<"RESPONSÁVEL"<<setw(20)<<endl;

    for(auto elem : tarefas){
        for(auto e : elem){
         
            cout<<left<<setw(20)<<e.second;
        }
       cout<<endl<<endl;
    }


    return 0;
}