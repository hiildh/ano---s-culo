/* Nossos livros de Hist�ria nos ensinam que um ano de nossa era informa a qual s�culo 
pertence, bastando observar seus dois primeiros d�gitos e compar�-los aos dois �ltimos. Se 
os dois �ltimos forem 00 os dois d�gitos mais significativos j� indicam o s�culo, sendo 
diferente de zero deve-se somar um aos d�gitos mais significativos para obter o s�culo. Por 
exemplo: 1699 pertence ao s�culo 17, sendo 1700 seu �ltimo ano e 1701 o primeiro ano do 
s�culo 18. Fa�a um programa onde o usu�rio informe um ano e o mesmo informe a qual 
s�culo este ano pertence. O s�culo n�o precisa ser informado em n�meros romanos.*/

#include <stdio.h>
#include <locale.h>

int main(){
	int ano, sec;
	printf("Digite o ano a ser convertido em s�culo\n", setlocale(LC_ALL,""));
	scanf("%d", &ano);
	sec = ano/100;
	if (ano%100!=0){
		sec++;
	}
	printf("O ano %d pertence ao s�culo %d\n", ano, sec);
	return 0;
}