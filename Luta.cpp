#include <iostream>
#include <string>
//Para usar o gerador em função do tempo
#include <ctime>

using namespace std;
int main(int argc, char* args[])
{
	 //Variavel para sair ou permanecer no laço
	bool sair = false;
  	//Variavel que guarda os nomes dos jogadores
	string jog1, jog2; 
	 //valor da vida inicial 
	int vida1 = 20, vida2 = 20; 
  	//valor do ataque e defesa
	int Atk = 4, Dfs = 2; 

	 // imprimi na tela 
	cout << "Digite o nome do jogador 1:" << endl; 
  	//Salva o nome digitado na variavel jog1
	cin >> jog1; 

  	// imprimi na tela 
	cout << "Digite o nome do jogador 2:" << endl; 
	//recebe e salva o nome digitado na variavel jog2
	cin >> jog2;
	//enquanto sair é falso ele repeti o laço
	while (sair == false) {

		//Imprimindo os personagens e os status
		cout << " o                       o" << endl;
		cout << ".T./                   \\.T." << endl;
		cout << " ^                       ^" << endl;
		cout << jog1 << "             " << jog2 << endl;
		cout << "Vida:" << vida1 << "           " << "Vida:" << vida2 << endl;
		cout << "Atk:" << Atk << "           " << "Atk:" << Atk << endl;
		cout << "Dfs:" << Dfs << "           " << "Dfs:" << Dfs << endl;

  
		 //faz com que, as "coisas" imprimidas na tela continue na tela
		system("pause"); 

		int dado6;

		//gerador de numeros aleatorio em função do tempo
		srand((int)time(0));
		//Gera um número aletorio
		dado6 = rand() % 6 + 1;

		//se a condição do if for verdadeira ele roda, oq esta dentro do if 
		if (dado6 > 4)
		{
			 // vida menos o dano gerado
			vida1 = vida1 - dado6; 
			// imprimi o dano causado/ a vida perdida 
			cout << jog1 << " Dano:" << -dado6 << endl; 
			// imprimi na tela 
			cout << jog2 << " Acertou!" << endl;
			cout << " Proxima jogada (Digite enter):" << endl;
			//"pausa" o jogo até aperta enter para ir à proxima partida 
			cin.get();
		}
		//Se for verdadeiro a condção ele executa o que esta dentro do else if 
		else if (dado6 <= 4)
		{

			//imprimi na tela 
			cout << jog2 << "Errou!" << endl; /
			cout << "Proxima jogada (Digite enter):" << endl
			//"pausa" o jogo até aperta enter para ir à proxima partida 
			cin.get();

		}
			//Gera um número aletorio
		dado6 = rand() % 6 + 1;

		//se a condição do if for verdadeira ele roda, oq esta dentro do if 
		if (dado6 > 4)
		{
			// vida menos o dano gerado
			vida2 = vida2 - dado6; 
			// imprimi o dano causado/ a vida perdida 
			cout << jog2 << "Dano:" << -dado6 << endl;
			// imprimi na tela 
			cout << jog1 << "Acertou!" << endl;
			cout << "Proxima jogada (Digite enter):" << endl; 
			//"pausa" o jogo até aperta enter para ir à proxima partida 
			cin.get();
		}

		//Se for verdadeiro a condção ele executa o que esta dentro do else if 
		else if (dado6 <= 4) {

			//imprimi na tela 
			cout << jog1 << "Errou!" << endl; 
			cout << "Proxima jogada (Digite enter):" << endl; 
			//"pausa" o jogo até aperta enter para ir à proxima partida 
			cin.get();

		}

		//cout << "Vida:" << vida1 << "           " << "Vida:" << vida2 << endl;
   
    		//Limpa a tela ao final de cada rodada 
		system("cls"); 

		//se a vida, tanto do jog1 ou jog2 chega a zero, sair é verdadeiro, não limpara a tela 
		if (vida1 <= 0 || vida2 <= 0)
		{

			sair = true;
		}
		// se continuar limpa a tela
		else system("cls");
	}

	//imprimi na tela
	cout << " Fim de jogo!" << endl;

	//faz a logica do "se" e imprimi na tela determindo o vencedor 
	if (vida1 > 0) cout << jog1 << " Venceu!" << endl;
	else if (vida2 > 0) cout << jog2 << " Venceu!" << endl;
	else cout << " Os dois perderam!" << endl;
	//Retorna ao inicio
	return 0;


}
