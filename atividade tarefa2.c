#include <stdio.h>
#include <locale.h>

int main() {
/*1)  Dados: 10 números digitados pelo usuário. Escreva um programa com a Linguagem C para exibir os valores negativos e que calcule e exiba a média dos valores menores que zero.
int x[10], i, neg =0 , teste = 0, media = 0;

setlocale(LC_ALL, "Portuguese");
for(i = 0; i < 10; i++){

printf("Digite um número:  ");
scanf("%d", &x[i]);
}	
for(i = 0; i < 10; i++){
if (x[i] < 0){
	
	printf("O número %d é negativo \n", x[i]);
	neg++;
	teste = teste + x[i];
}
}
media = (teste / neg)  ;
printf("A média dos números negativos é:  %d", media);
	
	
	return 0;
*/
	
/*  2.      Escrever um programa com a Linguagem C para ler um conjunto de números reais, armazenando-os em um array. O programa deverá calcular o quadrado dos valores deste array, armazenando os resultados em outro array. Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos (arrays).//
setlocale(LC_ALL, "Portuguese");
int x[10], y[10], i;

for (i = 0; i < 10; i++){
	
	printf("Digite um número para saber sua raiz quadrada:  ");
	scanf("%d", &x[i]);
	
}

for (i = 0; i < 10; i++){

	
	y[i] = x[i] * x[i];

	
}
for (i = 0; i < 10 ; i++){
	

	
	printf("A raiz é: %d \n", y[i] );

}


return 0;
*/
/*3.      Escreva um programa com a Linguagem C que leia um array de 8 posições e, em seguida, leia também dois valores X e Y quaisquer correspondentes à primeira e última posição do array. Ao final seu programa deverá escrever a soma dos valores encontrados nas respectivas posições X e Y.//

setlocale(LC_ALL, "Portuguese");

int a[8], x = 0, y = 7, i, soma = 0, n1 = 0, n2 = 0;

for (i = 0; i < 8; i++){
	
	printf("Digite um número:  ");
	scanf("%d", &a[i]);
	
	
}
 soma = a[x] + a[y];
 printf("A soma do primeiro e ultimo número é:  %d", soma);

*/
/*4.      Escreva um programa com a Linguagem C que leia 6 valores inteiros e, em seguida, mostre na tela os valores lidos na ordem inversa.//

setlocale(LC_ALL, "Portuguese");

int x[10], i;


for (i = 0; i < 10; i++){
	
	printf("Digite um número:  ");
	scanf("%d", &x[i]);
	
	
}


for(i = 9; i >= 0; i --){


printf("Os números digitados são: %d \n ",x[i]);


}
*/	
 /* 5) Escreva um programa com a Linguagem C para ler a nota da prova de 15 alunos, armazenando-em um vetor. Calcule e imprima média geral dos alunos. Adiconalmente, o programa deverá imprimir a quantidade de alunos que estão abaixo da média.
setlocale(LC_ALL, "Portuguese");
double x[15], prova = 0, media = 0, media_geral = 0 ;
int abaixo_media = 0, i;

for(i = 0; i < 15; i++){
	printf("Digite sua nota:  ");
	scanf("%lf", &x[i]);
}

for(i = 0; i < 15; i++){
media++;
prova = prova + x[i];
if (x[i] < 6){
	abaixo_media++;
}
}
media_geral = prova / media;
printf("A média da sala foi: %2.lf e a quantidade de alunos abaixo da média é: %d ", media_geral, abaixo_media);	
	
	

*/

/* 6.      Escrever um programa com a Linguagem C que leia um array de 10 posições e verifique se existem valores iguais e os escreva na tela.//

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
}
*/
/*7) Escrever um programa com a Linguagem C para ler um array de 10 posições e atribur valor 0 para todos os elementos que possuírem valores negativos.//
 int x[10], i =0;
 setlocale(LC_ALL, "Portuguese");
for(i = 0; i < 10; i++){
	printf("Digite um número:  ");
	scanf("%d", &x[i]);
}

for(i = 0; i < 10; i++){
	
	if (x[i] < 0){
		x[i] = 0;
	}
	printf("Os números digitados foram: %d \n", x[i]);
}
	
*/
/*8) Escrever um programa com a Linguagem C no qual o usuário deverá  informar 10 números inteiros e maiores que zero e armazená-los em um array. O programa deverá exibir a soma de todos os números pares do array.//

	int x[10], i = 0,y = 0 ;
	setlocale(LC_ALL, "Portuguese");
	for(i = 0; i < 10; i++){
	printf("Digite um número:  ");
	scanf("%d", &x[i]);
}

for(i = 0; i < 10; i++){
		if (x[i] % 2 == 0){
		y = y + x[i];
	}
}
	printf("Os números digitados foram: %d \n", y);
	
	*/
	/*9) Escrever um programa com a Linguagem C no qual o usuário deverá  informar 10 números inteiros e maiores que zero e armazená-los em um array. O programa deverá exibir a média aritmética de todos os números ímpares do array.//
	int x[10], i = 0,y = 0, z = 0, media ;
	setlocale(LC_ALL, "Portuguese");
	for(i = 0; i < 10; i++){
	printf("Digite um número:  ");
	scanf("%d", &x[i]);
}

for(i = 0; i < 10; i++){
		if (x[i] % 2 == 1){
		z++;
		y = y + x[i];
	}
}
 media = y / z;
	printf("Os números digitados foram: %d \n", media);
	
	*/
	//10) Escrever um programa com a Linguagem C no qual o usuário deverá  informar 10 números inteiros e maiores que zero e armazená-los em um array. O programa deverá atribuir valor 99 para todos os elementos que possuírem valores negativos e o valor 33 para todos os elementos que possuírem valores pares.  Em seguida o programa deverá imprimir todos os dados do array.//
	 int x[10], i =0, y = 99, z = 33;
 setlocale(LC_ALL, "Portuguese");
for(i = 0; i < 10; i++){
	printf("Digite um número:  ");
	scanf("%d", &x[i]);
}

for(i = 0; i < 10; i++){
	
	if (x[i] < 0){
		x[i] = y;
	}
		if (x[i] % 2 == 0){
		x[i] = z;
	}
	
	printf("Os números digitados foram: %d \n", x[i]);
}
	
	
	
	
	
	
	
	
	
	
	
	
}
