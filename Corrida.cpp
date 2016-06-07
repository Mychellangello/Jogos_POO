#include <iostream> 
#include <string>
#include <ctime>
using namespace std;
//função void criada
void imprimir_espacos(int total1); 
//princcipal
int main(int argc, char* args[])
{
  //condição do while
	bool sair = false; 
  //Variavel do tipo string para salvar os nomes dos jogadores
	string jog1, jog2; 
	  //quantidade de  espacos inicial de cada carrinho
	int total1 = 0, total2 = 0;
  //imprimi na tela
	cout << "Digite o nome do primeiro piloto:" << endl; 
	//recebe e salva o nome digitado na variavel jog1
	cin >> jog1; 
  //imprimi na tela
	cout << "Digite o nome do segundo piloto:" << endl; 
  //recebe e salva o nome digitado na variavel jog2
	cin >> jog2; 

	//enquanto sair for falso vai roda oq esta dentro do laço
	while (sair == false)
	{


		//defini tamanho da pista.
		int total_espacos = 80;

		//gerandor um numero aleatório em funçao do tempo
		srand((int)time(0));

		//Para o jogador 1: Gera um numero aleatorio para o total de espacos Entre 1 e 3
		total_espacos = rand() % 3 + 1;

		total1 = total1 + total_espacos;

		//Para o jogador 2: Gera um numero aleatorio para o total de espacos Entre 1 e 3
		total_espacos = rand() % 3 + 1;

		total2 = total2 + total_espacos;

		//Imprimindo na tela os carrinhos e imprimi alguns status

		cout << "Pista de corrida:" << endl;

		cout << "LARGADA:                                                               CHEGADA:" << endl;

		cout << "Piloto 1:" << jog1 << endl; 
		imprimir_espacos(total1);
		cout << "  _  " << endl;
	  //defini os espaços
		imprimir_espacos(total1);
		cout << "-o-o>" << endl;
		//Imprimindo a pista 
		cout << "_______________________________________________________________________________" << endl;

																										  
		cout << "Valor que andou: " << total1 << endl;  //Total de espaços andando pelo carrinho 1


		cout << "Piloto 2:" << jog2 << endl;
		imprimir_espacos(total2);
		cout << "  _  " << endl;
	  //definindo os espaços
		imprimir_espacos(total2);
		cout << "-o-o>" << endl;// 2º Parte do grafico do carrinho. (CORPO DO CARRO)
	  //Imprimindo a pista 
		cout << "_______________________________________________________________________________" << endl;

																										  
		cout << "Valor que andou: " << total2 << endl;  //Total de espaços andando pelo carrinho 2

		//Apaga tudo a cada rodada
		system("cls");


		//Se sair não limpa a tela.
		if (total1 >= 80 || total2 >= 80)//Condição para fazer a condição do laço ficar falsa, e o jogo parar.
		{
		  //sai do laço
		  sair = true;

		}

		//Se continuar limpa a tela.
		else system("cls");


	}

	//Quando sair do laço mostra que o jogo acabou
	cout << "Fim de jogo!" << endl;

	//Define qual jogador ganhou, ou se houve empate.
	if (total1 >= 80) cout << jog1 << ", Parabens, voce venceu a corrida!" << endl;

	else if (total2 >= 80) cout << jog2 << ", Parabens, voce venceu a corrida!" << endl;

	else cout << "EMPATE!" << endl;

	return 0; //Retorna ao inicio.

}


//Usando a função void 
void imprimir_espacos(int total) 
{


  // Laço for pq não sabe a hora que vai parar
	for (int qntd_espacos = 0; qntd_espacos < total; qntd_espacos++)
	{
	  // espaço que vai ser impresso, dependendo do numero aleatorio
		cout << " ";


	}

}
