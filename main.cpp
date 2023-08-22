#include <iostream>
using namespace std;
void questao1() {

    const int VET = 10;
    int vetor[VET];

    cout << "Digite " << VET << " numeros inteiros:" << endl;

    for (int i = 0; i < VET; i++) {
        cin >> vetor[i];
    }

    cout << "ordem inversa:" << endl;

    for (int i = VET - 1; i >= 0; i--) {
        cout << vetor[i] << " ";
    }

    cout << endl;
}

using namespace std;

void questao2(){
	
	const int VET = 5;
    int numeros[VET];

    cout << "Digite " << VET << " numeros inteiros:" << endl;

    for (int i = 0; i < VET; i++) {
        cout << "Numero " << i+1 << ": ";
        cin >> numeros[i];
    }

    int soma = 0;
    int subtracao = numeros[0];
    float divisao = (numeros[0]);

    for (int i = 0; i < VET; i++) {
        soma += numeros[i];
        if (i > 0) {
            subtracao -= numeros[i];
            divisao /= numeros[i];
        }
    }

    cout << "Soma: " << soma << endl;
    cout << "Subtração: " << subtracao << endl;
    cout << "Divisão: " << divisao << endl;  
}


using namespace std;

void questao3(){
	
	const char VET = 10;
	char consoante[VET];

    cout << "Digite " << VET <<"palavras ou caracteres:" << endl;

    for (int i = 0; i < VET; i++) {
        cin >> consoante[i];
    }

    int consoanteCount = 0;

    for (int i = 0; i < VET; i++) {
        if (!((consoante[i] == 'a' || consoante[i] == 'A') || (consoante[i] == 'e' || consoante[i] == 'E') ||
              (consoante[i] == 'i' || consoante[i] == 'I') || (consoante[i] == 'o' || consoante[i] == 'O') ||
              (consoante[i] == 'u' || consoante[i] == 'U'))) {
            consoanteCount++;
        }
    }

    cout << "Foram lidas " << consoanteCount << " consoantes." << endl;
}

int main(int argc, char** argv) {
	
	int escolha;
	
	cout << "Escolha a questao (1 a 3):" << endl;
	cin >> escolha;
	
	switch (escolha){
		
		case 1 :
			
			questao1();
			break;
		
		case 2:
			questao2();
			break;
		
		
		case 3:
			questao3();
			break;
	
		default:
			cout << "opcao invalida!" << endl;
		system("pause");
		return 0;
	}

}	

