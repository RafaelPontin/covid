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
    	
    	printf("Selecione a opcao\n1 - gravar\n2- Registro\n3-Sair\nDigite a opcao: ");
    	scanf("%d", &opcao);
    	
    	
    	if(opcao == 1)
		{	
    		FILE *pont_arq;
    		pont_arq = fopen("banco.txt", "a");
    		
    		printf("Digite o nome: ");
    		scanf("%s", nome);
    		
    		fprintf(pont_arq, "%s", strcat(nome, "|"));
    		
    		fclose(pont_arq);
    		
    		
		} else if(opcao == 2) { 
			
			
		
		}
		
    	system("PAUSE");
		
	}while(opcao != 3);



    printf("Sistema finalizado ");
    
    return 0;
}
