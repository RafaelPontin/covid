#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include<conio.h>


int main(){

    char user[4] = " ";
    char password[3] = " ";
    char teste [2] = " ";
    
    
    char nome[20] = " ";
    char stringConc[200] = " ";
    
    
    int loginValido = 0;
    int opcao = 1;

    do 
    {
    
		system("cls");
		
    	printf("===============================================\n");
    	printf("================Sistema_Covid==================\n");
    	printf("===============================================\n\n");
    	
         
         printf("Digite o usuario: ");
         scanf("%s", user);

         printf("Digite a senha: ");
         scanf("%s", password);

         if((strcmp(user, "user") == 0) && (strcmp(password, "123") == 0) ){
		  	loginValido = 1;
		 } else {
		 	loginValido = 0;
		 }
         
    }while(loginValido == 0);
   
	
	do
	{
		
		system("cls");
		
    	printf("===============================================\n");
    	printf("================Sistema_Covid==================\n");
    	printf("===============================================\n\n");
    	
    	printf("Selecione a opcao\n1 - Cadastro\n2- Lista\n3-Sair\nDigite a opcao: ");
    	scanf("%d", &opcao);
    	
    	
    	if(opcao == 1)
		{	
    		FILE *pont_arq;
    		pont_arq = fopen("banco.txt", "a");
    		
    		printf("Nome: ");
    		scanf("%s", nome);
		printf("CPF: ");
    		scanf("%s", CPF);
		printf("Data de Nascimento: ");
    		scanf("%s", Data de Nascimento);
		printf("Endereço: ");
    		scanf("%s", Endereço);
		printf("Cidade: ");
    		scanf("%s", Cidade);
		printf("Estado: ");
    		scanf("%s", Estado);
		printf("CEP: ");
    		scanf("%s", CEP);
		printf("Telefone: ");
    		scanf("%s", Telefone);
		printf("E-mail: ");
    		scanf("%s", E-mail);
		printf("Data do Diagnóstico: ");
    		scanf("%s", Data do Diagnóstico);
		printf("Comorbidade: ");
    		scanf("%s", Comorbidade);
		
    		
    		fprintf(pont_arq, "%s", strcat(nome,CPF,Data de Nascimento,Endereço,Cidade,Estado,CEP,Telefone,E-mail,Data do Diagnóstico,Comorbidade "|"));
    		
    		fclose(pont_arq);
    		
    		
		} else if(opcao == 2) { 
			
			
		
		}
		
    	system("PAUSE");
		
	}while(opcao != 3);



    printf("Sistema finalizado ");
    
    return 0;
}
