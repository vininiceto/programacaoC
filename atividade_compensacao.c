#include <stdio.h>
#include <locale.h>

int main() {
/*  2.      Escrever um programa com a Linguagem C para ler um conjunto de n�meros reais, armazenando-os em um array. O programa dever� calcular o quadrado dos valores deste array, armazenando os resultados em outro array. Os conjuntos t�m 10 elementos cada. Imprimir todos os conjuntos (arrays).//
setlocale(LC_ALL, "Portuguese");
int x[10], y[10], i;

for (i = 0; i < 10; i++){
	
	printf("Digite um n�mero para saber sua raiz quadrada:  ");
	scanf("%d", &x[i]);
	
}

for (i = 0; i < 10; i++){

	
	y[i] = x[i] * x[i];

	
}
for (i = 0; i < 10 ; i++){
	

	
	printf("A raiz �: %d \n", y[i] );

}


return 0;
*/
/*3.      Escreva um programa com a Linguagem C que leia um array de 8 posi��es e, em seguida, leia tamb�m dois valores X e Y quaisquer correspondentes � primeira e �ltima posi��o do array. Ao final seu programa dever� escrever a soma dos valores encontrados nas respectivas posi��es X e Y.//

setlocale(LC_ALL, "Portuguese");

int a[8], x = 0, y = 7, i, soma = 0, n1 = 0, n2 = 0;

for (i = 0; i < 8; i++){
	
	printf("Digite um n�mero:  ");
	scanf("%d", &a[i]);
	
	
}
 soma = a[x] + a[y];
 printf("A soma do primeiro e ultimo n�mero �:  %d", soma);

*/
/*4.      Escreva um programa com a Linguagem C que leia 6 valores inteiros e, em seguida, mostre na tela os valores lidos na ordem inversa.//

setlocale(LC_ALL, "Portuguese");

int x[10], i;


for (i = 0; i < 10; i++){
	
	printf("Digite um n�mero:  ");
	scanf("%d", &x[i]);
	
	
}


for(i = 9; i >= 0; i --){


printf("Os n�meros digitados s�o: %d \n ",x[i]);


}
*/
/* 6.      Escrever um programa com a Linguagem C que leia um array de 10 posi��es e verifique se existem valores iguais e os escreva na tela.//

setlocale(LC_ALL, "Portuguese");

int x[10], i, j, aux;


for (i = 0; i < 10; i++){
	
	printf("Digite um n�mero:   ");
	scanf("%d", &x[i]);
	

}
printf("Os n�meros repetidos digitados s�o: ");


for (i = 0; i < 10; i++){
 aux = 0;



 for (j = i - 1; j < 10; j--){
 if(x[i] == x[j]){
 aux = 1;	
}
}

 	if (aux == 1){
	 
 	printf(" %d \n", x[i]);

}
}
}
*/

	
	
	
	


























