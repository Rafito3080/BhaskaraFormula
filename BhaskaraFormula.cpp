#include <iostream>
#include <cmath>
using namespace std;
bool raizExata(int Delta) {
    int raiz = static_cast<int>(std::sqrt(Delta));
    return (raiz * raiz == Delta);
}

int main(){
	float a, b, c, x1, x2;
	int SEC, SCH, Delta;
	do{
		cout<<"Olá, posso te ajudar com a tarefa de Equação de Segundo Grau.\n";
		cout<<"Está faltando algum desses coeficientes(como sem x² ou x ou sem o coeficiente sozinho)?\n1.X².\n2.X.\n3.Número.\n4.Todos estão.\n";
		cin >> SEC;
		switch(SEC){
		case 1:
			a = 0;
			cout <<"Há quantos X?\n";
			cin >> b;
			cout<<"Qual é o valor do número?\n";
			cin >> c;
			Delta = pow(b, 2) -4*a*c;
			x1 = (-(b) + sqrt(Delta))/(2*a);
			x2 = (-(b) - sqrt(Delta))/(2*a);
			if(raizExata(Delta)){
				cout<<"Como a raiz quadrada do Delta(Δ =b² -4*a*c) é exata, podemos fazer a fórmula de Bhaskara.\nS={"<< min(x1, x2) <<"," <<max(x1, x2)<<"}\n";
			}else{
				cout<<"S = {}";
			}
			cout<<"Tente novamente.\n1.Sim\n2.Não\n";
			cin >> SCH;
			break;
		case 2:
			c = 0;
			cout <<"Há quantos X²?\n";
			cin >> a;
			cout<<"Qual é o valor do número?\n";
			cin >> c;
			Delta = pow(b, 2) -4*a*c;
			x1 = (-(b) + sqrt(Delta))/(2*a);
			x2 = (-(b) - sqrt(Delta))/(2*a);
			if(raizExata(Delta)){
				cout<<"Como a raiz quadrada do Delta(Δ =b² -4*a*c) é exata, podemos fazer a fórmula de Bhaskara.\nS={"<< min(x1, x2) <<"," <<max(x1, x2)<<"}\n";
			}else{
				cout<<"S = {}";
			}
			cout<<"Tente novamente.\n1.Sim\n2.Não\n";
			cin >> SCH;
				break;
			case 3:
				c = 0;
			cout <<"Há quantos X²?\n";
			cin >> a;
			cout<<"Qual é o valor do X?\n";
			cin >> b;
			Delta = pow(b, 2) -4*a*c;
			x1 = (-(b) + sqrt(Delta))/(2*a);
			x2 = (-(b) - sqrt(Delta))/(2*a);
			if(raizExata(Delta)){
			cout<<"Como a raiz quadrada do Delta(Δ =b² -4*a*c) é exata, podemos fazer a fórmula de Bhaskara.\nS={"<< min(x1, x2) <<"," <<max(x1, x2)<<"}\n";
			}else{
				cout<<"S = {}";
			}
			cout<<"Tente novamente.\n1.Sim\n2.Não\n";
			cin >> SCH;
				break;
			case 4:
				cout <<"Há quantos X²?\n";
							cin >> a;
							cout<<"Qual é o valor do X?\n";
							cin >> b;
							cout <<"Qual o valor do número?\n";
							cin >> c;
							Delta = pow(b, 2) -4*a*c;
							x1 = (-(b) + sqrt(Delta))/(2*a);
							x2 = (-(b) - sqrt(Delta))/(2*a);
							if(raizExata(Delta)){
							cout<<"Como a raiz quadrada do Delta(Δ =b² -4*a*c) é exata, podemos fazer a fórmula de Bhaskara.\nS={"<< min(x1, x2) <<"," <<max(x1, x2)<<"}\n";
							}else{
								cout<<"S = {}";
							}
							cout<<"Tente novamente.\n1.Sim\n2.Não\n";
							cin >> SCH;
								break;
			default:
				cout<<"Error. Tente novamente.\n1.Sim\n2.Não\n";
				cin >> SCH;
				break;
		}
	}while(SCH == 1);
	cout<<"Espero ter ajudado, volte sempre!";
	return 0;
}
