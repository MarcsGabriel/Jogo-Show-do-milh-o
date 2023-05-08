#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <iostream>
#include <string>

void menu();
void facil();
void medio();
void dificil();
int validarResposta(int certo, int digitado);
int caso();

int pontos = 0;
int digitado = 0;
int irnovamente = 0;
int vidas = 3;
int ajuda = 2;
int contador = 0;

int main()
{

	setlocale(LC_ALL, "Portuguese");

	printf("      _.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._ \n\n");
	printf("      :'######::'##::::'##::'#######::'##:::::'##::::'########:::'#######:::::'########:::::'###:::::'#######:: \n");
	printf("      '##... ##: ##:::: ##:'##.... ##: ##:'##: ##:::: ##.... ##:'##.... ##:::: ##.... ##:::'## ##:::'##.... ##: \n");
	printf("       ##:::..:: ##:::: ##: ##:::: ##: ##: ##: ##:::: ##:::: ##: ##:::: ##:::: ##:::: ##::'##:. ##:: ##:::: ##: \n");
	printf("      . ######:: #########: ##:::: ##: ##: ##: ##:::: ##:::: ##: ##:::: ##:::: ########::'##:::. ##: ##:::: ##: \n");
	printf("      :..... ##: ##.... ##: ##:::: ##: ##: ##: ##:::: ##:::: ##: ##:::: ##:::: ##.....::: #########: ##:::: ##: \n");
	printf("      '##::: ##: ##:::: ##: ##:::: ##: ##: ##: ##:::: ##:::: ##: ##:::: ##:::: ##:::::::: ##.... ##: ##:::: ##: \n");
	printf("      . ######:: ##:::: ##:. #######::. ###. ###::::: ########::. #######::::: ##:::::::: ##:::: ##:. #######:: \n");
	printf("      :......:::..:::::..:::.......::::...::...::::::........::::.......::::::..:::::::::..:::::..:::.......::: \n\n");
	printf("      _.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._ \n\n\n");

	char comando[9] = "color ";
	char cores[2];
	setlocale(LC_ALL, "Portuguese");
	SetConsoleTitle("Cores com system");

	printf("Seja bem vindo ao jogo show do p�o\n");
	printf("=== Selecione o nivel do jogo para come�ar!!===\n\n\n");
	printf("Para Come�ar, escolha as cores na tabela de cores:\n\n");
	printf("\t0 - Preto\t8 - Cinza\n");
	printf("\t1 - Azul\t9 - Azul Claro\n");
	printf("\t2 - Verde\tA - Verde Claro\n");
	printf("\t3 - Verde �gua\tB - Verde �gua Claro\n");
	printf("\t4 - Vermelho\tC - Vermelho Claro\n");
	printf("\t5 - Roxo\tD - Lil�s\n");
	printf("\t6 - Amarelo\tE - Amarelo Claro\n");
	printf("\t7 - Branco\tF - Branco Brilhante\n");

	printf("\n\nCor de fundo: ");
	scanf("%c", &cores[0]);
	getchar();

	printf("Cor do texto: ");
	scanf("%c", &cores[1]);

	strcat(comando, cores);

	system(comando);

	menu();
	return 0;
}

void menu()
{
	facil();
}

void facil()
{
	system("cls");
	do
	{
		do
		{
			if (contador == 0)
			{
				printf("=== Voc� esta no nivel f�cil !!! ===\n\n");
				printf("Voc� tem %d vidas\n",vidas);
				printf("Total de pontos = %d/600\n\n",pontos);
				printf("Lhe restam apenas %d ajudas univervisitarias\n\n",ajuda);
				system("pause");
				system("cls");
				
				printf("Pergunta-1\n");
				printf("Qual � a sigla do estado do Rio Grande do Sul?\n\n");
				printf("===Selecione a alternativa correta===\n");
				printf("\t1-a)BH\n");
				printf("\t2-b)RN\n");
				printf("\t3-c)GO\n");
				printf("\t4-d)MT\n");
				printf("\t5-e)RS\n");
				printf("\n\t6)Ajuda Universitaria\n");
				scanf("%d", &digitado);
				validarResposta(5, digitado);
				caso();
				contador = contador + 1;
				system("pause");
				system("cls");
			}
			else if (contador == 1)
			{
				printf("Pergunta-2\n");
				printf("Qual � o nome do criador do Facebook?\n\n");
				printf("===Selecione a alternativa correta===\n");
				printf("\t1-a)Bill gates\n");
				printf("\t2-b)Elon musk\n");
				printf("\t3-c)Mark zuckerberg\n");
				printf("\t4-d)Jeff bezos\n");
				printf("\t5-e)steve jobs\n");
				printf("\n\t6)Ajuda Universit�ria\n");
				scanf("%d", &digitado);
				contador = contador + 1;
				validarResposta(3, digitado);
				caso();
				system("pause");
				system("cls");
			}
			else if (contador == 2)
			{
				printf("Pergunta-3\n");
				printf("Qual foi a data da queda das torres g�meas?\n\n");
				printf("===Selecione a alternativa correta===\n");
				printf("\t1-a)5 de janeiro de 2000\n");
				printf("\t2-b)15 de setembro de 2001\n");
				printf("\t3-c)11 de setembro de 2001\n");
				printf("\t4-d)20 de fevereiro de 2005\n");
				printf("\t5-e)12 de maio de 2009\n");
				printf("\n\t6)Ajuda Universit�ria\n");
				scanf("%d", &digitado);
				contador = contador + 1;
				validarResposta(3, digitado);
				caso();
				system("pause");
				system("cls");
			}
			else if (contador == 3)
			{
				printf("Pergunta-4\n");
				printf("Quantos estados o brasil tem incluindo o DF?\n\n");
				printf("===Selecione a alternativa correta===\n");
				printf("\t1-a)30\n");
				printf("\t2-b)22\n");
				printf("\t3-c)29\n");
				printf("\t4-d)27\n");
				printf("\t5-e)40\n");
				printf("\n\t6)Ajuda Universit�ria\n");
				scanf("%d", &digitado);
				contador = contador + 1;
				validarResposta(4, digitado);
				caso();
				system("pause");
				system("cls");
			}
			else if (contador == 4)
			{
				printf("Pergunta-5\n");
				printf("Qual destes futebolistas n�o � brasileiro?\n\n");
				printf("===Selecione a alternativa correta===\n");
				printf("\t1-a)Kaka\n");
				printf("\t2-b)Christiano Ronaldo\n");
				printf("\t3-c)Ronaldinho\n");
				printf("\t4-d)Neymar\n");
				printf("\t5-e)Ronaldo\n");
				printf("\n\t6)Ajuda Universit�ria\n");
				scanf("%d", &digitado);
				contador = contador + 1;
				validarResposta(2, digitado);
				caso();
				system("pause");
				system("cls");
			}
			else if (contador == 5)
			{
				printf("Pergunta-6\n");
				printf("Qual � o quadro mais famoso do mundo?\n\n");
				printf("===Selecione a alternativa correta===\n");
				printf("\t1-a)monalisa\n");
				printf("\t2-b)o beijo\n");
				printf("\t3-c)o est�dio do artista\n");
				printf("\t4-d)o circo\n");
				printf("\t5-e)medusa\n");
				printf("\n\t6)Ajuda Universit�ria\n");
				scanf("%d", &digitado);
				contador = contador + 1;
				validarResposta(1, digitado);
				caso();
				system("pause");
				system("cls");
			}
			else if (contador == 6)
			{
				printf("Pergunta-7\n");
				printf("Qual destes planetas n�o existe\n\n");
				printf("===Selecione a alternativa correta===\n");
				printf("\t1-a)urano\n");
				printf("\t2-b)j�piter\n");
				printf("\t3-c)marte\n");
				printf("\t4-d)saturno\n");
				printf("\t5-e)vegeta\n");
				printf("\n\t6)Ajuda Universit�ria\n");
				scanf("%d", &digitado);
				contador = contador + 1;
				validarResposta(5, digitado);
				caso();
				system("pause");
				system("cls");
			}
			else if (contador == 7)
			{
				printf("Pergunta-8\n");
				printf("O tamandu� se alimenta de qual desses?\n\n");
				printf("===Selecione a alternativa correta===\n");
				printf("\t1-a)Abelha\n");
				printf("\t2-b)Cupim\n");
				printf("\t3-c)Formiga\n");
				printf("\t4-d)Joaninha\n");
				printf("\t5-e)Aranha\n");
				printf("\n\t6)Ajuda Universit�ria\n");
				scanf("%d", &digitado);
				contador = contador + 1;
				validarResposta(3, digitado);
				caso();
				system("pause");
				system("cls");
			}
			else if (contador == 8)
			{
				printf("Pergunta-9\n");
				printf("O brasil foi col�nia de qual pa�s?\n\n");
				printf("===Selecione a alternativa correta===\n");
				printf("\t1-a)Portugal\n");
				printf("\t2-b)Israel\n");
				printf("\t3-c)Inglaterra\n");
				printf("\t4-d)It�lia\n");
				printf("\t5-e)Espanha\n");
				printf("\n\t6)Ajuda Universit�ria\n");
				scanf("%d", &digitado);
				contador = contador + 1;
				validarResposta(1, digitado);
				caso();
				system("pause");
				system("cls");
			}
			else if (contador == 9)
			{
				printf("Pergunta-10\n");
				printf("Um quilometro equivale a quantos metros?\n\n");
				printf("===Selecione a alternativa correta===\n");
				printf("\t1-a)100 metros\n");
				printf("\t2-b)10.000 metros\n");
				printf("\t3-c)1 metro\n");
				printf("\t4-d)1.000 metros\n");
				printf("\t5-e)10 metros\n");
				printf("\n\t6)Ajuda Universit�ria\n");
				scanf("%d", &digitado);
				contador = contador + 1;
				validarResposta(4, digitado);
				caso();
				system("pause");
				system("cls");
			}
			else if (contador == 10)
			{
				printf("### Parabens voc� completou o n�vel facil,v� para o pr�ximo n�vel ###\n\n");
				system("pause");
				system("cls");
				medio();
			}
		} while (contador <= 10);
	} while (vidas == 0);
}
void medio()
{
	do
	{
		do
		{
			if (contador == 10)
			{
				printf("=== Voc� esta no nivel medio !!! ===\n\n");
				printf("Voc� tem %d vidas\n",vidas);
				printf("Total de pontos = %d/600\n\n",pontos);
				printf("Lhe restam apenas %d ajudas univervisitarias\n\n",ajuda);
				system("pause");
				system("cls");
				
				printf("Pergunta-11\n");
				printf("Que l�der mundial ficou conhecida como Dama de Ferro?\n\n");
				printf("===Selecione a alternativa correta===\n");
				printf("\t1-a)Dilma Rousseff\n");
				printf("\t2-b)Angela Merkel\n");
				printf("\t3-c)Margaret Thatcher\n");
				printf("\t4-d)Hillary Clinton\n");
				printf("\t5-e)Christine Lagarde\n");
				printf("\n\t6)Ajuda Universit�ria\n");
				scanf("%d", &digitado);
				contador = contador + 1;
				validarResposta(3, digitado);
				caso();
				system("pause");
				system("cls");
			}

			else if (contador == 11)
			{
				printf("Pergunta-12\n");
				printf("Qual destes pa�ses � transcontinental?\n\n");
				printf("===Selecione a alternativa correta===\n");
				printf("\t1-a)R�ssia\n");
				printf("\t2-b)Filipinas\n");
				printf("\t3-c)Istambul\n");
				printf("\t4-d)Groenl�ndia\n");
				printf("\t5-e)Tanz�nia\n");
				printf("\n\t6)Ajuda Universit�ria\n");
				contador = contador + 1;
				scanf("%d", &digitado);
				validarResposta(1, digitado);
				caso();
				system("pause");
				system("cls");
			}

			else if (contador == 12)
			{
				printf("Pergunta-13\n");
				printf("Quais as duas datas que s�o comemoradas em novembro?\n\n");
				printf("===Selecione a alternativa correta===\n");
				printf("\t1-a)Independ�ncia do Brasil e Dia da Bandeira\n");
				printf("\t2-b)Proclama��o da Rep�blica e Dia Nacional da Consci�ncia Negra\n");
				printf("\t3-c)Dia do M�dico e Dia de S�o Lucas\n");
				printf("\t4-d)Dia de Finados e Dia Nacional do Livro\n");
				printf("\t5-e)Black Friday e Dia da �rvore\n");
				printf("\n\t6)Ajuda Universit�ria\n");
				scanf("%d", &digitado);
				contador = contador + 1;
				validarResposta(2, digitado);
				caso();
				system("pause");
				system("cls");
			}
			else if (contador == 13)
			{
				printf("Pergunta-14\n");
				printf("Quais os pa�ses que t�m a maior e a menor expectativa de vida do mundo?\n\n");
				printf("===Selecione a alternativa correta===\n");
				printf("\t1-a)Jap�o e Serra Leoa\n");
				printf("\t2-b)Austr�lia e Afeganist�o\n");
				printf("\t3-c)It�lia e Chade\n");
				printf("\t4-d)Brasil e Congo\n");
				printf("\t5-e)Estados Unidos e Angola\n");
				printf("\n\t6)Ajuda Universit�ria\n");
				scanf("%d", &digitado);
				contador = contador + 1;
				validarResposta(1, digitado);
				caso();
				system("pause");
				system("cls");
			}

			else if (contador == 14)
			{
				printf("Pergunta-15\n");
				printf("De onde � a inven��o do chuveiro el�trico?\n\n");
				printf("===Selecione a alternativa correta===\n");
				printf("\t1-a)Fran�a\n");
				printf("\t2-b)Inglaterra\n");
				printf("\t3-c)Brasil\n");
				printf("\t4-d)Austr�lia\n");
				printf("\t5-e)It�lia\n");
				printf("\n\t6)Ajuda Universit�ria\n");
				contador = contador + 1;
				scanf("%d", &digitado);
				validarResposta(3, digitado);
				caso();
				system("pause");
				system("cls");
			}

			else if (contador == 15)
			{
				printf("Pergunta-16\n");
				printf("-Quantos graus s�o necess�rios para que dois �ngulos sejam complementares?\n\n");
				printf("===Selecione a alternativa correta===\n");
				printf("\t1-a)90\n");
				printf("\t2-b)60\n");
				printf("\t3-c)45\n");
				printf("\t4-d)180\n");
				printf("\t5-e)360\n");
				printf("\n\t6)Ajuda Universit�ria\n");
				contador = contador + 1;
				scanf("%d", &digitado);
				validarResposta(1, digitado);
				caso();
				system("pause");
				system("cls");
			}

			else if (contador == 16)
			{
				printf("Pergunta-17\n");
				printf("Com que dois pa�ses fazem fronteira o equador?\n\n");
				printf("===Selecione a alternativa correta===\n");
				printf("\t1-a)com o Brasil e com a Col�mbia\n");
				printf("\t2-b)com a Col�mbia e com a Venezuela\n");
				printf("\t3-c)com a Col�mbia e com o Peru\n");
				printf("\t4-d)com o Peru e com o Equador\n");
				printf("\t5-e)com o Equador e o Brasil\n");
				printf("\n\t6)Ajuda Universit�ria\n");
				contador = contador + 1;
				scanf("%d", &digitado);
				validarResposta(3, digitado);
				caso();
				system("pause");
				system("cls");
			}
			else if (contador == 17)
			{
				printf("Pergunta-18\n");
				printf("Qual o maior animal terrestre?\n\n");
				printf("===Selecione a alternativa correta===\n");
				printf("\t1-a)Baleia Azul\n");
				printf("\t2-b)Elefante africano\n");
				printf("\t3-c)Tigre\n");
				printf("\t4-d)Tubar�o Branco\n");
				printf("\t5-e)Girafa\n");
				printf("\n\t6)Ajuda Universit�ria\n");
				scanf("%d", &digitado);
				contador = contador + 1;
				validarResposta(2, digitado);
				caso();
				system("pause");
				system("cls");
			}

			else if (contador == 18)
			{
				printf("Pergunta-19\n");
				printf("Quantos players s�o necess�rios para formar um time completo no league of legends\n\n");
				printf("===Selecione a alternativa correta===\n");
				printf("\t1-a)4\n");
				printf("\t2-b)6\n");
				printf("\t3-c)7\n");
				printf("\t4-d)5\n");
				printf("\t5-e)10\n");
				printf("\n\t6)Ajuda Universit�ria\n");
				contador = contador + 1;
				scanf("%d", &digitado);
				validarResposta(4, digitado);
				caso();
				system("pause");
				system("cls");
			}
			else if (contador == 19)
			{
				printf("Pergunta-20\n");
				printf("Quais as maiores pandemias da hist�ria?\n\n");
				printf("===Selecione a alternativa correta===\n");
				printf("\t1-a)Gripe espanhola e c�ncer\n");
				printf("\t2-b)Var�ola e hipertens�o\n");
				printf("\t3-c)Asma e Gripe espanhola\n");
				printf("\t4-d)C�lera e colesterol\n");
				printf("\t5-e)Peste negra e covid-19\n");
				printf("\n\t6)Ajuda Universit�ria\n");
				scanf("%d", &digitado);
				contador = contador + 1;
				validarResposta(5, digitado);
				caso();
				system("pause");
				system("cls");
			}
			else if (contador == 20)
			{	
			printf("### Parabens voc� completou o n�vel medio,v� para o pr�ximo n�vel ###\n\n");
			system("pause");
			system("cls");
			dificil();
			}
		} while (contador <= 20);
	} while (vidas == 0);
}
void dificil()
{
	do
	{
		do
		{
			if (contador == 20)
			{
				printf("=== Voc� esta no nivel dificil !!! ===\n\n");
				printf("Voc� tem %d vidas\n",vidas);
				printf("Total de pontos = %d/600\n\n",pontos);
				printf("Lhe restam apenas %d ajudas univervisitarias\n\n",ajuda);
				system("pause");
				system("cls");
				
				printf("Pergunta-21\n");
				printf("Em que per�odo da pr�-hist�ria o fogo foi descoberto?\n\n");
				printf("===Selecione a alternativa correta===\n");
				printf("\t1-a)Neol�tico\n");
				printf("\t2-b)Paleol�tico\n");
				printf("\t3-c)Idade dos Metais\n");
				printf("\t4-d)Per�odo da Pedra Polida\n");
				printf("\t5-e)Idade M�dia\n");
				printf("\n\t6)Ajuda Universit�ria\n");
				scanf("%d", &digitado);
				contador = contador + 1;
				validarResposta(2, digitado);
				caso();
				system("pause");
				system("cls");
			}
			else if (contador == 21)
			{
				printf("Pergunta-22\n");
				printf("Quem foi o primeiro homem a pisar na Lua? Em que ano aconteceu?\n\n");
				printf("===Selecione a alternativa correta===\n");
				printf("\t1-a)Yuri Gagarin, em 1961\n");
				printf("\t2-b)Buzz Aldrin, em 1969\n");
				printf("\t3-c)Charles Conrad, em 1969\n");
				printf("\t4-d)Charles Duke, em 1971\n");
				printf("\t5-e)Neil Armstrong, em 1969.\n");
				printf("\n\t6)Ajuda Universit�ria\n");
				scanf("%d", &digitado);
				contador = contador + 1;
				validarResposta(5, digitado);
				caso();
				system("pause");
				system("cls");
			}
			else if (contador == 22)
			{
				printf("Pergunta-23\n");
				printf("Quem comp�s o hino da independ�ncia?\n\n");
				printf("===Selecione a alternativa correta===\n");
				printf("\t1-a)dom Pedro I\n");
				printf("\t2-b)Manuel bandeira\n");
				printf("\t3-c)castro Alves\n");
				printf("\t4-d)carlos gomes\n");
				printf("\t5-e)Francisco Manuel da Silva\n");
				printf("\n\t6)Ajuda Universit�ria\n");
				scanf("%d", &digitado);
				contador = contador + 1;
				validarResposta(1, digitado);
				caso();
				system("pause");
				system("cls");
			}
			else if (contador == 23)
			{
				printf("Pergunta-24\n");
				printf("Que acontecimento importante para a hist�ria da humanidade teve lugar em 20 de julho de 1969?\n\n");
				printf("===Selecione a alternativa correta===\n");
				printf("\t1-a)Chegada do homem � Lua\n");
				printf("\t2-b)Fim do Apartheid\n");
				printf("\t3-c)Lan�amento das bombas at�micas em Hiroshima e Nagasaki\n");
				printf("\t4-d)Lan�amento do �lbum dos Beatles Abbey Road\n");
				printf("\t5-e)Envio do primeiro e-mail da hist�ria\n");
				printf("\n\t6)Ajuda Universit�ria\n");
				scanf("%d", &digitado);
				contador = contador + 1;
				validarResposta(1, digitado);
				caso();
				system("pause");
				system("cls");
			}
			else if (contador == 24)
			{
				printf("Pergunta-25\n");
				printf("Quantos presidentes o brasil teve oficialmente?\n\n");
				printf("===Selecione a alternativa correta===\n");
				printf("\t1-a)22\n");
				printf("\t2-b)47\n");
				printf("\t3-c)38\n");
				printf("\t4-d)17\n");
				printf("\t5-e)35\n");
				printf("\n\t6)Ajuda Universit�ria\n");
				scanf("%d", &digitado);
				contador = contador + 1;
				validarResposta(3, digitado);
				caso();
				system("pause");
				system("cls");
			}
			else if (contador == 25)
			{
				printf("Pergunta-26\n");
				printf("Em que pa�s se localizava Auschwitz, o maior campo de concentra��o nazi?\n\n");
				printf("===Selecione a alternativa correta===\n");
				printf("\t1-a)Pol�nia\n");
				printf("\t2-b)alemanha\n");
				printf("\t3-c)Estados Unidos\n");
				printf("\t4-d)�ustria\n");
				printf("\t5-e)Jap�o\n");
				printf("\n\t6)Ajuda Universit�ria\n");
				scanf("%d", &digitado);
				contador = contador + 1;
				validarResposta(1, digitado);
				caso();
				system("pause");
				system("cls");
			}
			else if (contador == 26)
			{
				printf("Pergunta-27\n");
				printf("Qual a fun��o da ONU?\n\n");
				printf("===Selecione a alternativa correta===\n");
				printf("\t1-a)Zelar pela cultura em todas as na��es\n");
				printf("\t2-b)Unir as na��es com o objetivo de manter a paz e a seguran�a mundial\n");
				printf("\t3-c)Financiar pa�ses em desenvolvimento\n");
				printf("\t4-d)Regular o funcionamento do sistema financeiro a n�vel internacional\n");
				printf("\t5-e)Gerenciar acordos de com�rcio entre os pa�ses\n");
				scanf("%d", &digitado);
				contador = contador + 1;
				validarResposta(2, digitado);
				caso();
				system("pause");
				system("cls");
			}
			else if (contador == 27)
			{
				printf("Pergunta-28\n");
				printf("qual a linguagens de programa��o mais usada no mercado?\n\n");
				printf("===Selecione a alternativa correta===\n");
				printf("\t1-a)PHP\n");
				printf("\t2-b)ruby\n");
				printf("\t3-c)Python\n");
				printf("\t4-d)Javascript\n");
				printf("\t5-e)Android\n");
				printf("\n\t6)Ajuda Universit�ria\n");
				scanf("%d", &digitado);
				contador = contador + 1;
				validarResposta(4, digitado);
				caso();
				system("pause");
				system("cls");
			}
			else if (contador == 28)
			{
				printf("Pergunta-29\n");
				printf("Quantas patas uma formiga possui?\n\n");
				printf("===Selecione a alternativa correta===\n");
				printf("\t1-a)8\n");
				printf("\t2-b)6\n");
				printf("\t3-c)4\n");
				printf("\t4-d)10\n");
				printf("\t5-e)7\n");
				printf("\n\t6)Ajuda Universit�ria\n");
				scanf("%d", &digitado);
				contador = contador + 1;
				validarResposta(2, digitado);
				caso();
				system("pause");
				system("cls");
			}
			else if (contador == 29)
			{
				printf("Pergunta-30\n");
				printf("Em que ano e onde aconteceu o maior acidente a�reo da hist�ria do Brasil?\n\n");
				printf("===Selecione a alternativa correta===\n");
				printf("\t1-a)Ano 2007, em S�o Paulo\n");
				printf("\t2-b)Ano 2006, no Mato Grosso\n");
				printf("\t3-c)Ano 1982, no Cear�\n");
				printf("\t4-d)Ano 1996, em S�o Paulo\n");
				printf("\t5-e)Ano 1952, na Floresta Amaz�nica\n");
				printf("\n\t6)Ajuda Universit�ria\n");
				scanf("%d", &digitado);
				contador = contador + 1;
				validarResposta(1, digitado);
				caso();
				system("pause");
				system("cls");
			}
			else if (contador == 30){
			printf("### Parab�ns voc� concluio o jogo ###\n\n");
			printf("voc� acumulou um total de %d/600 pontos\n\n",pontos);
			system("pause");
			break;
		}
		} while (contador <= 30);
	} while (vidas == 0);
}

int validarResposta(int certo, int digitado)
{
	 if (digitado == 6)
	{
		if(ajuda==0){
		printf("voc� n�o tem mais ajuda");
	}
	else{
		printf("A resposta � %d \n\n",certo);
		ajuda = ajuda - 1;
		printf("ajuda universitaria restantes %d\n\n",ajuda);
	}
		contador = contador - 1;
	}
	else if (certo == digitado)
	{
		printf("Parab�ns voc� acertou!!\n");
		pontos = pontos + 20;
		printf("Voc� tem %d pontos\n", pontos);
	}
	else
	{
		printf("Que pena voc� errou!!\n");
		vidas = vidas - 1;
		printf("vidas restantes %d\n", vidas);
		printf("total de pontos adquiridos %d\n", pontos);
	}
	return 0;
}
int caso()
{
	if (vidas == 0)
	{
		printf("\n### Voc� perdeu todas suas vidas :( ###");
		printf("\n\n");
		printf("Deseja jogar novamente? \n1-sim \n0-n�o \nInforme:");
		scanf("%d", &irnovamente);
		if (irnovamente == 1)
		{
			vidas = 3;
			pontos = 0;
			contador = 0;
			ajuda = 2;
			menu();
		}
		else
		{
			printf("At� a proxima");
			exit(true);
		}
	}
}
