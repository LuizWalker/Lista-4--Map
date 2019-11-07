#include <map>
#include <iostream>
#include <ctype.h>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    map <string, map<string,double> > lista_compras;
    string produto,teste;
    double preco=0,quantidade=0,custo_total=0,media_precos;
    vector<double>valores;
    

    do{
        cout<<"Digite o nome do produto: ";
        getline(cin,produto);

        cout<<"Digite a quantidade comprada: ";
        cin>>lista_compras[produto]["quantidade"];

        cout<<"Digite o preço do produto:R$ ";
        cin>>lista_compras[produto]["preço"];

        custo_total+=lista_compras[produto]["quantidade"]*lista_compras[produto]["preço"];

        quantidade+=lista_compras[produto]["quantidade"];

        cin.ignore();

        cout<<"Quer continuar no preenchendo?: ";
        cin>>teste;

        for(int i=0;i<teste.size();i++){

            teste[i]=tolower(teste[i]);

        }
        cin.ignore();

    }while(teste=="sim");

cout<<endl<<endl;

cout<<left<<setw(20)<<"PRODUTO"<<left<<setw(20)<<"QUANTIDADE"<<left<<setw(20)<<"PREÇO POR UNIDADE(R$)"<<endl;

for(auto elementos : lista_compras){
    cout<<left<<setw(25)<<elementos.first<<left<<setw(25)<<elementos.second["quantidade"]<<left<<elementos.second["preço"]<<endl;
    valores.push_back(elementos.second["preço"]);
}

sort(valores.begin(),valores.end());

cout<<endl<<endl;

for(auto elementos : lista_compras){
    if(elementos.second["preço"]==valores[0]){
        cout<<"A compra mais barata foi: "<<elementos.first<<" , custa R$: "<<valores[0]<<endl;
    }
    if(elementos.second["preço"]==valores[valores.size()-1]){
        cout<<"A compra mais cara foi: "<<elementos.first<<" , custa R$: "<<valores[valores.size()-1]<<endl;
    }
}


media_precos=custo_total/quantidade;

cout<<endl<<endl;

cout<<"Custo total das compras: "<<custo_total<<endl;
cout<<"Média dos preços: "<<media_precos<<endl;

    return 0;
}