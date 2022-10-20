#include <stdio.h>
#include <locale.h>
#define true 1

int main() {
/*1.      Escrever um programa fonte na Linguagem C que exiba o valor da área de um triângulo, a partir do valor da base e altura fornecidos pelo usuário.

setlocale(LC_ALL, "Portuguese");

double area = 0, base, altura;

printf("Digite a altura do triângulo: \n ");

scanf("%lf",&altura);

printf("Digite a base do triângulo: \n");

scanf("%lf",&base);

area = (base * altura) / 2;

printf("A Área do triângulo é %.2f", area);

return 0;


*/

/*2 Escrever um programa fonte na Linguagem C que exiba a soma, a subtrac¸a~o, a multiplicac¸a~o e a divisa~o de dois números inteiros fornecidos pelo usuário.

setlocale(LC_ALL, "Portuguese");

int n1, n2, mult, soma, sub;
double div;

printf("Digite um número inteiro \n");

scanf("%d", &n1);

printf("Digite outro número inteiro \n");

scanf("%d", &n2);

soma = n1+n2;
sub = n1-n2;
mult = n1*n2;
div = n1/n2;

printf("A soma dos números é: %d \n A subtração dos números é: %d \n A multiplicação dos números é: %d \n A divisão dos números é: %.2f ", soma, sub, mult, div);

return 0;

*/

//Escrever um programa fonte na Linguagem C que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro). Sabendo que esse vendedor ganha 20% de comissão sobre suas vendas efetuadas, o programa deverá informar o nome do vendedor, o salário fixo e salário no final do mês.//
/*
setlocale(LC_ALL, "Portuguese");

char nome[40];
double Salario_Fixo, Salario_Final, comissao = 0.2;
int Total_Vendas;

printf("Digite seu nome \n");
gets (nome);

printf("Digite o seu salário fixo: \n");

scanf("%lf",&Salario_Fixo);

printf("Digite o total de vendas realizada no mês. \n");

scanf("%d",&Total_Vendas);

Salario_Final = Salario_Fixo + (comissao * Total_Vendas);

printf("%s O seu salário final é:%.4f \n",nome, Salario_Final);

*/
//4. Escrever um programa fonte na Linguagem C que leia o nome de um aluno e as notas das tre^s provas que ele obteve no semestre, com pesos 2, 4 e 6. Ao final, o programa deverá exibir informar o nome do aluno e a sua me´dia ponderada.//
/*
setlocale(LC_ALL, "Portuguese");

double n1, n2, n3, media;
int peso1 = 2, peso2 = 4, peso3 = 6;
char nome[40];

printf("Digite seu nome \n");

gets(nome);

printf("Digite sua primeira nota \n");

scanf("%lf", &n1);

printf("Digite sua segunda nota \n");

scanf("%lf", &n2);

printf("Digite sua terceira nota \n");

scanf("%lf", &n3);

media = ((n1 * peso1) + (n2 * peso2) + (n3 * peso3)) / (peso1 + peso2 + peso3);

printf("%s a sua média é: %.2f \n", nome, media);

return 0;

*/


//5.Escrever um programa fonte na Linguagem C que leia dois valores inteiros e informe se eles são iguais. Caso sejam diferentes, o programa deverá informar o maior dos valores entrados.//
/*
setlocale(LC_ALL, "Portuguese");


int v1, v2;

printf("Digite um número \n");

scanf("%d", &v1);

printf("Digite outro número \n");

scanf("%d", &v2);

if (v1 == v2){

printf("Os números %d e %d são iguais \n", v1, v2);
}
if(v1 > v2){

printf("O número %d é maior", v1);
}
if(v1 < v2){

printf("O numero %d é maior", v2);
}
}

*/

//6.      Escrever um programa fonte na Linguagem C que receba um numero e informe se o número entrado esta ou não no intervalo entre 200 e 300.//
/*
setlocale(LC_ALL, "Portuguese");

int n;

printf("Digite um número \n");

scanf("%d", &n);

if (n >= 200 && n <= 300 ){

printf("O número %d está entre 200 e 300 \n", n);


}
else{

printf("O número %d não está entre 200 e 300 \n", n);
}


*/

//7.      Escrever um programa fonte na Linguagem C que resolva o seguinte problema: uma cópia “xerox” custa R$ 0,50 por folha, mas acima de 200 folhas esse valor cai para R$ 0,30 por unidade. Dado o total de cópias, informe o valor a ser pago.//
/*
setlocale(LC_ALL, "Portuguese");

double copia1 = 0.5 , copia2 = 0.3, valor = 0;
int folhas;

printf("Digite quantas folhas vão ser impressas: \n");

scanf("%d", &folhas);

if (folhas < 200){

valor = folhas * copia1;

printf("O valor total da impressão é: %.2f \n", valor);

}
else{

valor = folhas * copia2;

printf("O valor total da impressão é: %.2f \n", valor);

}

return 0;

*/

//8.      Escrever um programa fonte na Linguagem C que informe a idade de um jogador de futebol e exiba a sua categoria, considerando as seguintes regras: infantil (até 13 anos), juvenil (até 17 anos) ou sênior (acima de 17 anos).//

/*

setlocale(LC_ALL, "Portuguese");

int idade, infantil = 13, juvenil = 17, senior = 17 ;

printf("Digite sua idade \n");

scanf("%d", &idade);

if( idade <= infantil){

printf("A sua categoria é: infantil");
}
if (idade >= infantil && idade <= juvenil){


printf("A sua categoria é: juvenil");


}

if(idade > senior){

printf("A sua categoria é: senior");
}

*/

//9.      Escrever um programa fonte na Linguagem C que receba dois números inteiros e informe qual deles é o menor.//
/*
setlocale(LC_ALL, "Portuguese");

int x,y;

printf("Digite o primeiro número \n");

scanf("%d", &x);

printf("Digite o segundo número \n");

scanf("%d", &y);

if( x > y){

printf("O número %d é menor", y);
}
else {

printf("O número %d é menor", x);

}

*/

//10.  Escrever um programa fonte na Linguagem C que calcule a média aritmética de três números entrados pelo usuário.//
/*
setlocale(LC_ALL, "Portuguese");

double m1, m2, m3 , media;
int aritmetica = 3;

printf("Digite o primeiro número: \n");

scanf("%lf", &m1);

printf("Digite o segundo número: \n");

scanf("%lf", &m2);

printf("Digite o terceiro número: \n");

scanf("%lf", &m3);

media = (m1 + m2 + m3) / aritmetica;

printf("O valor da média aritmética é: %.2f", media);

return 0;

*/

//11.  Escrever um programa fonte na Linguagem C que receba um número inteiro do usuário e diga se ele é par ou impar. (Dica: Um número é par se o resto da divisão dele por 2 for zero – A função módulo % retorna o resto da divisão.)//
/*
setlocale(LC_ALL, "Portuguese");

int x;

printf("Digite um número: \n");

scanf("%d", &x);

if (x % 2 == 0){

printf("O número %d é par", x);


}
if (x % 2 == 1){

printf("O número %d é impar", x);

}

*/
//Escrever um programa fonte na Linguagem C que leia o nome de um aluno e as notas que ele obteve nas três provas do semestre. Ao final, o programa deverá informar o nome do aluno e a sua média aritmética.//
/*
setlocale(LC_ALL, "Portuguese");

double n1,n2,n3, media;
int aritmetica = 3;
char nome[40];

printf("Digite seu nome: \n");

gets(nome);

printf("Digite sua primeira nota: \n");


scanf("%lf",&n1);

printf("Digite sua segunda nota: \n");


scanf("%lf",&n2);


printf("Digite sua terceira nota: \n");


scanf("%lf",&n3);

media = (n1 + n2 + n3) / aritmetica;

printf("%s a sua média é: %.2f", nome, media);

return 0;

*/

//13.  Escrever um programa fonte na Linguagem C que receba um número e diga se o número entrado está ou não no intervalo entre 100 e 200.//
/*
setlocale(LC_ALL, "Portuguese");

int x;

printf("Digite um número \n");

scanf("%d", &x);

if (x >= 100 && x <= 200 ){

printf("O número %d está entre 100 e 200 \n", x);


}
else{

printf("O número %d não está entre 100 e 200 \n", x);
}

*/

//14.  Escrever um programa fonte na Linguagem C  que efetue a leitura de uma temperatura medida em graus Celsius e fac¸a a conversa~o em graus Fahrenheit. A fo´rmula para a conversa~o das temperaturas e´ F = (9 * C + 160)/5, sendo F a temperatura em Fahrenheit e C em Celsius.//
/*
setlocale(LC_ALL, "Portuguese");

double Celsius, Fahrenheit;

printf("Digite a temperatura em Celsius \n");

scanf("%lf", &Celsius);

Fahrenheit = (9 * Celsius + 160)/5;

printf("A temperatura em Fahrenheit é: %.2f graus \n", Fahrenheit);

return 0;

*/
//Escrever um programa fonte na Linguagem C  que efetue a leitura de uma temperatura medida em graus Fahrenheit e a apresente convertida em graus Celsius. A fo´rmula para a conversa~o e´ C = ((F - 32) * 5)/9, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.//
/*
setlocale(LC_ALL, "Portuguese");

double Fahrenheit, Celsius;

printf("Digite a temperatura em Fahrenheit \n");

scanf("%lf", &Fahrenheit );

Celsius = ((Fahrenheit - 32) * 5) / 9;

printf("A temperatura em Celsius é: %.1f graus", Celsius);


*/
//Escrever um programa fonte na Linguagem C  que efetue a leitura de tre^s valores numéricos inteiros (varia´veis A, B e C) e apresente os valores entrados em ordem crescente.//
/*
setlocale(LC_ALL, "Portuguese");

int x[3], i , n;

for (i = 0; i < 3; i++){
	
	printf("Entre com um número inteiro: ");
	
	scanf("%d", &n);
	
	x[i] = n;
	
}
for (i = 2; i >= 0; i--){
	
	printf("\n%d", x[i]);
	
}
*/

//Escrever um programa fonte na Linguagem C  que efetue a leitura de quatro valores reais referentes a quatro notas escolares de um aluno e apresente mensagem informando que o aluno esta´ aprovado caso o valor da me´dia escolar seja maior ou igual a 5. Caso o aluno na~o seja aprovado, apresente mensagem informando que o aluno encontra-se reprovado. Ao final, ale´m das mensagens, apresente o valor da me´dia do aluno.//
/*
setlocale(LC_ALL, "Portuguese");

double n1,n2,n3,n4, media;
char nome[40];

printf("Digite seu nome: \n");

gets(nome);

printf("Digite sua primeira nota: \n");

scanf("%lf", &n1);

printf("Digite sua segunda nota: \n");

scanf("%lf", &n2);

printf("Digite sua terceira nota: \n");

scanf("%lf", &n3);

printf("Digite sua quarta nota: \n");

scanf("%lf", &n4);

media = (n1 + n2 + n3 + n4) / 4;

if (media >= 5){
	
	printf("%s você foi aprovado, sua média é: %.2f", nome, media);
	
}
else{
	
	printf("%s você foi reprovado, sua média é: %.2f", nome, media);
	
}

*/

//Escrever um programa fonte na Linguagem C  que efetue a leitura de dois valores nume´ricos inteiros e apresente o resultado da diferenc¸a do maior valor pelo menor.//
/*
setlocale(LC_ALL, "Portuguese");

int x, y, maior;

printf("Digite o primeiro número: \n");

scanf("%d", &x);

printf("Digite o segundo número: \n");

scanf("%d", &y);

if(x > y){
	
	maior = x - y;
	
	printf("O maior número é:  %d, e a diferença do maior para o menor é: %d ", x, maior);
	
}
else{
	
	maior = y - x;
	
	printf("O maior número é:  %d, e a diferença do maior para o menor é: %d ", y, maior);
	
}

*/

//19.  Escrever um programa fonte na Linguagem C  que exiba ao usuário os números de 1 a 10, usando os comando while ou for de repetição.//
/*
setlocale(LC_ALL, "Portuguese");

int x[10] = { 1,2,3,4,5,6,7,8,9,10}, i;

for(i = 9; i >= 0; i--){
	
printf("\n%d", x[i]);


}
*/

//20.  Escrever um programa fonte na Linguagem C  que exiba ao usuários os números de 100 a 1, usando os comando while ou for de repetição.//
/*
setlocale(LC_ALL, "Portuguese");

int x;

for(x = 100; x >=0; x--){
	
	printf("\n%d", x);
	
	
}

*/

setlocale(LC_ALL, "Portuguese");

int x[10], i;


for (i = 0; i < 10; i++){
	
	printf("Digite um número:   ");
	scanf("%d", x[i]);


if(x[i] < 0) {
	x[i] = 0;

printf("Valor Ajustado da posição %i = %i ", i, x[i]);

}
}

	




}

