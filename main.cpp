#include <iostream>
#include "pessoa.cpp"
using namespace std;

//g++ main.cpp  ->  ./a.out
//g++ *.cpp -> compila todos os arquivos


int main(){
    Pessoa p("Robert","Robertson",123456789,2,10,2003);

    cout<<"Dados da pessoa"<<endl;
    cout<<"Nome: "<<p.getNome()<<" "<<p.getSobrenome()<<endl;
    cout<<"CPF: "<<p.getCPF()<<endl;
    cout<<"Nascimento: "<<p.getNascimento()<<endl;

}