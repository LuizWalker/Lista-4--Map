#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main(){

    map<char,int>palavra;
    string any_word;

    cout<<"Digite qualquer palavra: ";
    getline(cin,any_word);

    for(auto& letra : any_word){
        if(letra != ' '){
            palavra[letra]++;
        }
    }

    for(auto& elementos : palavra){

        cout<<elementos.first<<"--"<<elementos.second<<endl;
    }

    return 0;
}