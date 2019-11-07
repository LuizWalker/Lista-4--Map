#include <map>
#include <iostream>

using namespace std;
int main(){
    map<string,string>telefones;
    string nome,tel;
do{
     cout<<"Digite um nome para continuar no programa ou **sair** para finalizar o código: ";
     getline(cin,nome);
   if(nome =="sair") break;   
   if(telefones.find(nome)==telefones.end()){
      cout<<"Digite o telefone da pessoa cadastrada: ";
      getline(cin,telefones[nome]);
   }else{
       string teste;
       cout<<"Nome já foi cadastrado, deseja sobreescreve-lo?"<<endl;
       cin>>teste;
       if(teste=="sim"){
         cout<<"Digite o novo telefone da pessoa: ";
         getline(cin,telefones[nome]);
       }
   }
   cin.ignore();
}while(nome!="sair");
for(auto& elemento : telefones){
      cout<<elemento.first<<"--"<<elemento.second<<endl;
  }
    return 0;
}