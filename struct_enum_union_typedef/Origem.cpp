#include<stdio.h>

//tipos básicos de dados: int, float, char, double
//tipos compostos homogeneos: array (int x[5], char nome[10])
//struct: conjunto de dados referenciados pelo mesmo nome, podendo ter múltiplos tipos de dados.
//union: permite que um conjunto de variáveis compartilhem o mesmo espaço de memória
//enum: tipo de dado definido pelo usuário, com o uso de uma lista de identificadores(lista de constantes)
//typedef permite que um tipo de dado seja nomeado diferente.


void lerStruct();
void calcula_espaco();
void enumerar();
void mudarNomeEstruturaDado();
void typedefNeles();



int main() {

	//lerStruct();
	//calcula_espaco();
	//enumerar();
	//mudarNomeEstruturaDado();
	typedefNeles();

	return 0;
}

void typedefNeles() {
	typedef int RU;
	typedef float prova;

	struct notasAluno {
		RU matricula;
		prova nota1, nota2;
	};

	typedef notasAluno n_aluno;

	n_aluno aluno;

	printf("Digite a matricula do aluno: ");
	scanf_s("%d", &aluno.matricula);

	printf("Digite a primeira nota: ");
	scanf_s("%f", &aluno.nota1);
	
	printf("Digite a segunda nota: ");
	scanf_s("%f", &aluno.nota2);

	printf("Media do aluno %d : %.2f", aluno.matricula, ((aluno.nota1 + aluno.nota2) / 2));

}

void mudarNomeEstruturaDado() {
	typedef float prova;
	prova nota1 = 9.9 , nota2=8.9, nota3=6.7;

	printf("Media: %.2f", ((nota1 + nota2 + nota3) / 3));

}

void enumerar() {
	enum semana { domingo=6, segunda, terça=3, quarta, quinta, sexta, sábado };
	//o valor segue a sequencia.
	enum semana seg, qua;;
	seg = segunda;
	qua = quarta;
	printf("Valor de segunda = %d\n\n", seg);
	printf("Valor de quarta = %d\n\n", qua);


}

void calcula_espaco() {
	union ex_union {
		int dia;
		char moeda[50];
		float valor;
	};
	struct ex_struct {
		int dia;
		char moeda[50];
		float valor;
	};

	printf("Tamanho da Union: %d\n", sizeof(union ex_union));
	printf("Tamanho da Struct: %d\n", sizeof(struct ex_struct));

}

void lerStruct(){
	struct ficha_do_funcionario
	{
		char nome[50];
		char email[30];
	};

	struct ficha_do_funcionario funcionario;

	printf("Digite o nome do Funcionario: ");
	fflush(stdin);
	fgets(funcionario.nome, 50, stdin);

	printf("Digite o email do Funcionario: ");
	fflush(stdin);
	fgets(funcionario.email, 30, stdin);

	printf("Nome: %s\nEmail: %s", funcionario.nome, funcionario.email);

}