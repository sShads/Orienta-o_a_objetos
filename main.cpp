#include <iostream>
#include "pessoa.cpp"
#include "funcionario.cpp"
using namespace std;

//g++ main.cpp  ->  ./a.out
//g++ *.cpp -> compila todos os arquivos


int main(){
    Endereco e("Rua R",1,"Bairro B");
    Pessoa p("Robert","Robertson",123456789,2,10,2003,e);
    Funcionario f("Robert","Trabalhador",987654321,2,10,2003,e,10000,1);

    Pessoa* pessoas[2];
    pessoas[0]=&p;
    pessoas[1]=&f;
    
    for(int i=0;i<2;i++){
        pessoas[i]->print();
        cout<<endl;
    }

    /*
    cout<<"Dados do funcionario"<<endl;
    cout<<"Nome: "<<p.getNome()<<" "<<p.getSobrenome()<<endl;
    cout<<"CPF: "<<p.getCPF()<<endl;
    cout<<"Nascimento: "<<p.getNascimento()<<endl;
    cout<<"Endereco: "<<p.getEndereco()<<endl;
    //cout<<"Salario: "<<p.getSalario()<<endl;
    //cout<<"Cadastro: "<<p.getCadastro()<<endl;
    */

}