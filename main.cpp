#include <iostream>
#include "pessoa.cpp"
using namespace std;

//g++ main.cpp  ->  ./a.out
//g++ *.cpp -> compila todos os arquivos


int main(){
    Pessoa p;
    p.setNome("Robert");
    p.setSobrenome("Robertson");
    p.setCPF(123456789);

    cout<<"Dados da pessoa"<<endl;
    cout<<"Nome: "<<p.getNome()<<" "<<p.getSobrenome()<<endl;
    cout<<"CPF: "<<p.getCPF()<<endl;

}