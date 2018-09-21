/*

(Classe Employee)
Crie uma classe chamada Employee que inclua tr�s partes de informa��es como membros de dados. 
Um nome(tipo string).
Um sobrenome (tipo string). 
E um sal�rio mensal (tipo int). 
 
  [Nota: Nos cap�tulos subseq�entes, utilizaremos n�meros que cont�m pontos de fra��o decimal
(por exemplo, 2,75) � chamados valores de ponto flutuante � para representar quantias em d�lar.]

Sua classe deve ter um construtor que inicialize os tr�s membros de dados. 
Forne�a uma fun��o set e uma fun��o get para cada membro de dados. 

Se o sal�rio mensal n�o for positivo, configure-o como 0. Escreva um programa de teste que demonstre as capacidades da classe Employee. 

Crie dois objetos Employee e exiba o sal�rio anual de cada objeto. 
Ent�o d� a cada Employee um aumento de 10% e exiba novamente o sal�rio anual de cada Employee.

*/

#include <iostream>
#include <cstdio> 
#include <string> 
using namespace std; 

class Employee { 
	private:
		string nome;
		string sobrenome;
		double salario;
	
	public:
		
		Employee() {
			
			setNome("");
			setSobrenome("");
			setSalario(0.0);
		}
		
		void setNome(string valor) {
			
			nome = valor;
		}
		
		string getNome(void) {
			return nome;
		}
		
		void setSobrenome(string valor) {
			sobrenome = valor;
		}
		
		string getSobrenome(void) {
			return sobrenome;
		}
		
		void setSalario(double valor) {
			if(valor < 0) {
				setSalario(0.0);
			} else {
				
				salario = valor;
			}
		}
		
		double getSalario(void) {
			return salario;
		}
};

int main() {
	
	Employee empregado1, empregado2;
	string entrada1;
	double entrada2;

	
	cout << "Digite o nome do primeiro Empregado:" << endl;
	cin >> entrada1;
	empregado1.setNome(entrada1);
	cout << "Digite o sobrenome do primeiro Empregado:" << endl;
	cin >> entrada1;
	empregado1.setSobrenome(entrada1); 
	cout << "Digite o sal�rio do primeiro Empregado:" << endl;
	cin >> entrada2;

  cout << endl;

	empregado1.setSalario(entrada2); 
	cout << "Digite o nome do segundo Empregado:" << endl;
	cin >> entrada1;
	empregado2.setNome(entrada1);
	cout << "Digite o sobrenome do segundo Empregado:" << endl;
	cin >> entrada1;
	empregado2.setSobrenome(entrada1); 
	cout << "Digite o sal�rio do segundo Empregado:" << endl;
	cin >> entrada2;
	empregado2.setSalario(entrada2);

  cout << endl;
	
  cout << "Informa��es do primeiro Empregado:" << endl;
	cout << "Nome: " << empregado1.getNome() << endl;
	cout << "Sobrenome: " << empregado1.getSobrenome() << endl;
	cout << "Sal�rio:R$ " << empregado1.getSalario() << endl;
  cout << "Novo Sal�rio Anual:R$ " << ((((empregado1.getSalario()/100)*10)+empregado1.getSalario())*12) << endl << endl;


	cout << "Informa��es do segundo Empregado:" << endl;
	cout << "Nome: " << empregado2.getNome() << endl;
	cout << "Sobrenome: " << empregado2.getSobrenome() << endl;
	cout << "Sal�rio:R$ " << empregado2.getSalario() << endl;
  cout << "Novo Sal�rio Anual:R$ " << ((((empregado2.getSalario()/100)*10)+empregado2.getSalario())*12) << endl;

	return 0;
}