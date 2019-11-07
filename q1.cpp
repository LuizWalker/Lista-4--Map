#include <iostream>
#include <map>

using namespace std;

int main(){

    map<int,int>quadrados;
    int num;

    cout<<"Digite um número: ";
    cin>>num;

    for(int i=0;i<=num;i++){
         quadrados[i]=i*i;
    }

    for(auto& elementos : quadrados){
        cout<<elementos.first<<"--"<<elementos.second<<endl;
    }

    return 0;
}