#include <stdio.h>
#include <locale.h>

int main() {
/* 1.      Escrever um programa com a Linguagem C para ler um conjunto de números reais, armazenando-os em um array. O programa deverá calcular o cubo dos valores deste array, armazenando os resultados em outro array. Os conjuntos têm 15 elementos cada. Imprimir todos os conjuntos (arrays).

setlocale(LC_ALL, "Portuguese");
int x[15], y[15], i;

for (i = 0; i < 15; i++){
	
	printf("Digite um número para ver quanto ficaria ao cubo:  ");
	scanf("%d", &x[i]);
	
}

for (i = 0; i < 15; i++){

	
	y[i] = x[i] * x[i] * x[i];

	
}
for (i = 0; i < 15 ; i++){
	

	
	printf("O cubo é: %d \n", y[i] );
}

*/
/*2.      Escreva um programa com a Linguagem C que leia um array de 20 posições e, em seguida, leia também dois valores A e B quaisquer correspondentes à primeira e última posição do array. Ao final seu programa deverá escrever a média aritmética  dos valores encontrados nas respectivas posições dos valores A e B.//

int  i;
double x[20],  a = 0,media = 0, b = 0, y = 0;
setlocale(LC_ALL, "Portuguese");
for(i  = 1; i < 21; i++){
	
	printf("Digite um número:  ");
	scanf("%lf", &x[i]);
}
for(i = 1; i < 21; i++){

	if(i == 19){
		a = x[i];
		y++;
		
	}
	if(i == 20){
		b = x[i];
		y++;
	}

}
media = (a + b) / y;
printf("A média de valores dos ultimos números digitados é: %lf", media);

return 0;
*/

/*3.      Escreva um programa com a Linguagem C que leia 99 valores inteiros e, em seguida, mostre na tela os valores lidos na ordem inversa.//
setlocale(LC_ALL, "Portuguese");

int x[99], i;

for(i = 0; i < 	99; i++){
	
	printf("Digite um número:  ");
	scanf("%d", &x[i]);
}
for(i = 98; i >= 0; i--){
	
	printf("O número digitado foi: %d \n", x[i]);
	
}
*/
/*4.Escreva um programa com a Linguagem C para ler a nota da prova de 20 alunos, armazenando-em um vetor. Calcule e imprima média geral dos alunos. Imprima também a maior nota da turma//

setlocale(LC_ALL, "Portuguese");
double x[20], prova = 0, media = 0, media_geral = 0, y=0 ;
int  i = 0, cont = 	1, cont2=0;

for(i = 0; i < 20; i++){
	printf("Digite sua nota:  ");
	scanf("%lf", &x[i]);
}

for(i = 0; i < 21; i++){
	media++;
prova = prova + x[cont2];
if (x[i]>x[cont+1]){
	y = x[i];
}

}

printf("A nota mais alta da sala é: %lf \n", y);
media_geral = prova / media;
printf("A média da sala foi: %2.lf \n", media_geral );	

*/
//5.      Escrever um programa com a Linguagem C que leia um array de 20 posições e verifique se existem valores iguais e os escreva na tela.//

setlocale(LC_ALL, "Portuguese");

int x[10], i, j, aux;


for (i = 0; i < 10; i++){
	
	printf("Digite um número:   ");
	scanf("%d", &x[i]);
	

}
printf("Os números repetidos digitados são: ");


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
return 0;
}






































