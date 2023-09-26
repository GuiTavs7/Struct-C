#include <stdio.h>
#include <string.h>
#include <conio.h>

// Definindo as variáveis heterôgeneas do tipo struct

int main()
{
  struct reg_endereco{
  char rua[40];
  int numero;
  char complemento[40];
  int cep;
  char bairro[20];
  char cidade[30];
  char estado[15];
};

  struct reg_nome{
  char nome[15];
  char sobrenome[40];
};

struct reg_funcionario{
  struct reg_nome nome;
  char funcao[40];
  float salario;
  int dependentes;
  struct reg_endereco endereco;
};

struct reg_funcionario funcionario[2];

// "For" para inserir os valores de dois funcionarios (de 0 até 1 = 2);
// Usa-se "fgets" para inserir os valores de caracteres nas strings %s, podendo utilizar espaço;
// Usa-se "scanf" para inserir os valores nunéricos, como int %d e float %f;

printf("\n\nCadastro dos funcionarios\n");
  
  int i;
  
  for(i=0; i<=1; i++){
          
    printf("\n\n----------%do funcionario-------------\n\n\n", i+1);
          
    printf("Nome do funcionario .............:");
    fflush(stdin);
    fgets(funcionario[i].nome.nome, 40, stdin);
      
    printf("Sobrenome do funcionario .............:");
    fflush(stdin);
    fgets(funcionario[i].nome.sobrenome, 40, stdin);
          
    printf("Funcao .............:");
    fflush(stdin);
    fgets(funcionario[i].funcao, 40, stdin);

    printf("Salario .............:R$");
    scanf("%f", &funcionario[i].salario);

    printf("Numero de dependentes .............:");
    scanf("%d", &funcionario[i].dependentes);

    printf("Rua: .............:");
    fflush(stdin);
    fgets(funcionario[i].endereco.rua, 40, stdin);

    printf("Numero: .............:");
    scanf("%d", &funcionario[i].endereco.numero);

    printf("Complemento: .............:");
    fflush(stdin);
    fgets(funcionario[i].endereco.complemento, 40, stdin);
    
    printf("Cep: .............:");
    scanf("%d", &funcionario[i].endereco.cep);
    
    printf("Bairro: .............:");
    fflush(stdin);
    fgets(funcionario[i].endereco.bairro, 40, stdin);
    
    printf("Cidade: .............:");
    fflush(stdin);
    fgets(funcionario[i].endereco.cidade, 40, stdin);
    
    printf("Estado: .............:");
    fflush(stdin);
    fgets(funcionario[i].endereco.estado, 40, stdin);
          
  }

// "For" para printar na tela 

for(i=0; i<=1; i++){

        printf("\n\n--------------%do funcionario--------------\n\n\n", i+1);
        
        printf("Nome: %s", funcionario[i].nome.nome);
        printf("Sobrenome: %s", funcionario[i].nome.sobrenome);
        printf("Funcao: %s", funcionario[i].funcao);    
        printf("Salario: R$%.2f\n", funcionario[i].salario);
        printf("Numero de dependentes: %d\n", funcionario[i].dependentes);
        printf("Rua: %s", funcionario[i].endereco.rua);     
        printf("Numero: %d\n", funcionario[i].endereco.numero);
        printf("Complemento: %s", funcionario[i].endereco.complemento);
        printf("CEP: %d\n", funcionario[i].endereco.cep); 
        printf("Bairro: %s", funcionario[i].endereco.bairro);
        printf("Cidade: %s", funcionario[i].endereco.cidade); 
        printf("Estado: %s", funcionario[i].endereco.estado);
        }

// "getch()" para aguardar o usuário teclar enter para encerrar o programa;
// "return 0" para zerar todas variáveis de memória;

  getch();
  return 0;
}