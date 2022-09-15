/* Nossos livros de História nos ensinam que um ano de nossa era informa a qual século 
pertence, bastando observar seus dois primeiros dígitos e compará-los aos dois últimos. Se 
os dois últimos forem 00 os dois dígitos mais significativos já indicam o século, sendo 
diferente de zero deve-se somar um aos dígitos mais significativos para obter o século. Por 
exemplo: 1699 pertence ao século 17, sendo 1700 seu último ano e 1701 o primeiro ano do 
século 18. Faça um programa onde o usuário informe um ano e o mesmo informe a qual 
século este ano pertence. O século não precisa ser informado em números romanos.*/

#include <stdio.h>
#include <locale.h>

int main(){
	int ano, sec;
	printf("Digite o ano a ser convertido em século\n", setlocale(LC_ALL,""));
	scanf("%d", &ano);
	sec = ano/100;
	if (ano%100!=0){
		sec++;
	}
	printf("O ano %d pertence ao século %d\n", ano, sec);
	return 0;
}