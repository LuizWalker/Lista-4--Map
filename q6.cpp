#include <iostream>
#include <map>
#include <algorithm>
#include  <ctype.h>

using namespace std;

int main(){
     
     map<string,string>lista_email;
     string nome,teste;
     int op;
  
     do{
         cout<<"Digite 1 para adicionar o nome o e-mail"<<endl;
         cout<<"Digite 2 para remover um endereço de e-mail"<<endl;
         cout<<"Digite 3 para alterar um e-mail"<<endl;
         cout<<"Digite 4 para listar os e-mails cadastrados"<<endl;
         cin>>op;
         cin.ignore();

         switch(op){

             case 1:{
                      cout<<"Digite o nome da pessoa: ";
                      getline(cin,nome);
                      cout<<"Digite o email de tal pessoa: ";
                      getline(cin,lista_email[nome]);
                      cout<<endl<<endl;
                      break;
             }

             case 2:{
                    string temp;
                    cout<<"Digite o nome para ser deletado:";
                    cin>>temp;
                    if (lista_email.find(temp) != lista_email.end()){
                    lista_email.erase(temp);
                    }else{
                    cout << "A chave não existe"<<endl;
                   }
                    cout<<endl<<endl;
                    break;
             }

             case 3:{

                    string temp_2;
                    cout<<"Digite o nome para ser alterado:";
                    cin>>temp_2;
                    cin.ignore();
                    if (lista_email.find(temp_2) != lista_email.end()){
                      cout<<"Digite o email de tal pessoa: ";
                      getline(cin,lista_email[temp_2]);
                    }else{
                   cout << "A chave não existe"<<endl;
                   }
                   cout<<endl<<endl;
                   break;
             }

             case 4:{
                    for(auto& elementos : lista_email){
                        cout<<elementos.first<<"--"<<elementos.second<<endl;
                    }                   
             }
              cout<<endl<<endl;
              break;
         }

         cout<<"Digite **sim** caso deseje continuar no programa: ";
         cin>>teste;
         for(int j=0;j<teste.size();j++){
             teste[j]=tolower(teste[j]);
         }
         
     }while(teste=="sim");


    return 0;
}