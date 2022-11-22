#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main(){

    char user[4] = " ";
    char password[3] = " ";
    char teste [2] = " ";
    
    
    int loginValido = 0;

    do 
    {
         system("cls");
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
   


    printf("digite alguma coisa para finalizar o sistema!");
    scanf("%s", teste);
    
    return 0;
}
