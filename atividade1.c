#include <stdio.h>
#include <locale.h>
#define true 1

int main() {
/*1.      Escrever um programa fonte na Linguagem C que exiba o valor da �rea de um tri�ngulo, a partir do valor da base e altura fornecidos pelo usu�rio.

setlocale(LC_ALL, "Portuguese");

double area = 0, base, altura;

printf("Digite a altura do tri�ngulo: \n ");

scanf("%lf",&altura);

printf("Digite a base do tri�ngulo: \n");

scanf("%lf",&base);

area = (base * altura) / 2;

printf("A �rea do tri�ngulo � %.2f", area);

return 0;


*/

/*2 Escrever um programa fonte na Linguagem C que exiba a soma, a subtrac�a~o, a multiplicac�a~o e a divisa~o de dois n�meros inteiros fornecidos pelo usu�rio.

setlocale(LC_ALL, "Portuguese");

int n1, n2, mult, soma, sub;
double div;

printf("Digite um n�mero inteiro \n");

scanf("%d", &n1);

printf("Digite outro n�mero inteiro \n");

scanf("%d", &n2);

soma = n1+n2;
sub = n1-n2;
mult = n1*n2;
div = n1/n2;

printf("A soma dos n�meros �: %d \n A subtra��o dos n�meros �: %d \n A multiplica��o dos n�meros �: %d \n A divis�o dos n�meros �: %.2f ", soma, sub, mult, div);

return 0;

*/

//Escrever um programa fonte na Linguagem C que leia o nome de um vendedor, o seu sal�rio fixo e o total de vendas efetuadas por ele no m�s (em dinheiro). Sabendo que esse vendedor ganha 20% de comiss�o sobre suas vendas efetuadas, o programa dever� informar o nome do vendedor, o sal�rio fixo e sal�rio no final do m�s.//
/*
setlocale(LC_ALL, "Portuguese");

char nome[40];
double Salario_Fixo, Salario_Final, comissao = 0.2;
int Total_Vendas;

printf("Digite seu nome \n");
gets (nome);

printf("Digite o seu sal�rio fixo: \n");

scanf("%lf",&Salario_Fixo);

printf("Digite o total de vendas realizada no m�s. \n");

scanf("%d",&Total_Vendas);

Salario_Final = Salario_Fixo + (comissao * Total_Vendas);

printf("%s O seu sal�rio final �:%.4f \n",nome, Salario_Final);

*/
//4. Escrever um programa fonte na Linguagem C que leia o nome de um aluno e as notas das tre^s provas que ele obteve no semestre, com pesos 2, 4 e 6. Ao final, o programa dever� exibir informar o nome do aluno e a sua me�dia ponderada.//
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

printf("%s a sua m�dia �: %.2f \n", nome, media);

return 0;

*/


//5.Escrever um programa fonte na Linguagem C que leia dois valores inteiros e informe se eles s�o iguais. Caso sejam diferentes, o programa dever� informar o maior dos valores entrados.//
/*
setlocale(LC_ALL, "Portuguese");


int v1, v2;

printf("Digite um n�mero \n");

scanf("%d", &v1);

printf("Digite outro n�mero \n");

scanf("%d", &v2);

if (v1 == v2){

printf("Os n�meros %d e %d s�o iguais \n", v1, v2);
}
if(v1 > v2){

printf("O n�mero %d � maior", v1);
}
if(v1 < v2){

printf("O numero %d � maior", v2);
}
}

*/

//6.      Escrever um programa fonte na Linguagem C que receba um numero e informe se o n�mero entrado esta ou n�o no intervalo entre 200 e 300.//
/*
setlocale(LC_ALL, "Portuguese");

int n;

printf("Digite um n�mero \n");

scanf("%d", &n);

if (n >= 200 && n <= 300 ){

printf("O n�mero %d est� entre 200 e 300 \n", n);


}
else{

printf("O n�mero %d n�o est� entre 200 e 300 \n", n);
}


*/

//7.      Escrever um programa fonte na Linguagem C que resolva o seguinte problema: uma c�pia �xerox� custa R$ 0,50 por folha, mas acima de 200 folhas esse valor cai para R$ 0,30 por unidade. Dado o total de c�pias, informe o valor a ser pago.//
/*
setlocale(LC_ALL, "Portuguese");

double copia1 = 0.5 , copia2 = 0.3, valor = 0;
int folhas;

printf("Digite quantas folhas v�o ser impressas: \n");

scanf("%d", &folhas);

if (folhas < 200){

valor = folhas * copia1;

printf("O valor total da impress�o �: %.2f \n", valor);

}
else{

valor = folhas * copia2;

printf("O valor total da impress�o �: %.2f \n", valor);

}

return 0;

*/

//8.      Escrever um programa fonte na Linguagem C que informe a idade de um jogador de futebol e exiba a sua categoria, considerando as seguintes regras: infantil (at� 13 anos), juvenil (at� 17 anos) ou s�nior (acima de 17 anos).//

/*

setlocale(LC_ALL, "Portuguese");

int idade, infantil = 13, juvenil = 17, senior = 17 ;

printf("Digite sua idade \n");

scanf("%d", &idade);

if( idade <= infantil){

printf("A sua categoria �: infantil");
}
if (idade >= infantil && idade <= juvenil){


printf("A sua categoria �: juvenil");


}

if(idade > senior){

printf("A sua categoria �: senior");
}

*/

//9.      Escrever um programa fonte na Linguagem C que receba dois n�meros inteiros e informe qual deles � o menor.//
/*
setlocale(LC_ALL, "Portuguese");

int x,y;

printf("Digite o primeiro n�mero \n");

scanf("%d", &x);

printf("Digite o segundo n�mero \n");

scanf("%d", &y);

if( x > y){

printf("O n�mero %d � menor", y);
}
else {

printf("O n�mero %d � menor", x);

}

*/

//10.  Escrever um programa fonte na Linguagem C que calcule a m�dia aritm�tica de tr�s n�meros entrados pelo usu�rio.//
/*
setlocale(LC_ALL, "Portuguese");

double m1, m2, m3 , media;
int aritmetica = 3;

printf("Digite o primeiro n�mero: \n");

scanf("%lf", &m1);

printf("Digite o segundo n�mero: \n");

scanf("%lf", &m2);

printf("Digite o terceiro n�mero: \n");

scanf("%lf", &m3);

media = (m1 + m2 + m3) / aritmetica;

printf("O valor da m�dia aritm�tica �: %.2f", media);

return 0;

*/

//11.  Escrever um programa fonte na Linguagem C que receba um n�mero inteiro do usu�rio e diga se ele � par ou impar. (Dica: Um n�mero � par se o resto da divis�o dele por 2 for zero � A fun��o m�dulo % retorna o resto da divis�o.)//
/*
setlocale(LC_ALL, "Portuguese");

int x;

printf("Digite um n�mero: \n");

scanf("%d", &x);

if (x % 2 == 0){

printf("O n�mero %d � par", x);


}
if (x % 2 == 1){

printf("O n�mero %d � impar", x);

}

*/
//Escrever um programa fonte na Linguagem C que leia o nome de um aluno e as notas que ele obteve nas tr�s provas do semestre. Ao final, o programa dever� informar o nome do aluno e a sua m�dia aritm�tica.//
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

printf("%s a sua m�dia �: %.2f", nome, media);

return 0;

*/

//13.  Escrever um programa fonte na Linguagem C que receba um n�mero e diga se o n�mero entrado est� ou n�o no intervalo entre 100 e 200.//
/*
setlocale(LC_ALL, "Portuguese");

int x;

printf("Digite um n�mero \n");

scanf("%d", &x);

if (x >= 100 && x <= 200 ){

printf("O n�mero %d est� entre 100 e 200 \n", x);


}
else{

printf("O n�mero %d n�o est� entre 100 e 200 \n", x);
}

*/

//14.  Escrever um programa fonte na Linguagem C  que efetue a leitura de uma temperatura medida em graus Celsius e fac�a a conversa~o em graus Fahrenheit. A fo�rmula para a conversa~o das temperaturas e� F = (9 * C + 160)/5, sendo F a temperatura em Fahrenheit e C em Celsius.//
/*
setlocale(LC_ALL, "Portuguese");

double Celsius, Fahrenheit;

printf("Digite a temperatura em Celsius \n");

scanf("%lf", &Celsius);

Fahrenheit = (9 * Celsius + 160)/5;

printf("A temperatura em Fahrenheit �: %.2f graus \n", Fahrenheit);

return 0;

*/
//Escrever um programa fonte na Linguagem C  que efetue a leitura de uma temperatura medida em graus Fahrenheit e a apresente convertida em graus Celsius. A fo�rmula para a conversa~o e� C = ((F - 32) * 5)/9, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.//
/*
setlocale(LC_ALL, "Portuguese");

double Fahrenheit, Celsius;

printf("Digite a temperatura em Fahrenheit \n");

scanf("%lf", &Fahrenheit );

Celsius = ((Fahrenheit - 32) * 5) / 9;

printf("A temperatura em Celsius �: %.1f graus", Celsius);


*/
//Escrever um programa fonte na Linguagem C  que efetue a leitura de tre^s valores num�ricos inteiros (varia�veis A, B e C) e apresente os valores entrados em ordem crescente.//
/*
setlocale(LC_ALL, "Portuguese");

int x[3], i , n;

for (i = 0; i < 3; i++){
	
	printf("Entre com um n�mero inteiro: ");
	
	scanf("%d", &n);
	
	x[i] = n;
	
}
for (i = 2; i >= 0; i--){
	
	printf("\n%d", x[i]);
	
}
*/

//Escrever um programa fonte na Linguagem C  que efetue a leitura de quatro valores reais referentes a quatro notas escolares de um aluno e apresente mensagem informando que o aluno esta� aprovado caso o valor da me�dia escolar seja maior ou igual a 5. Caso o aluno na~o seja aprovado, apresente mensagem informando que o aluno encontra-se reprovado. Ao final, ale�m das mensagens, apresente o valor da me�dia do aluno.//
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
	
	printf("%s voc� foi aprovado, sua m�dia �: %.2f", nome, media);
	
}
else{
	
	printf("%s voc� foi reprovado, sua m�dia �: %.2f", nome, media);
	
}

*/

//Escrever um programa fonte na Linguagem C  que efetue a leitura de dois valores nume�ricos inteiros e apresente o resultado da diferenc�a do maior valor pelo menor.//
/*
setlocale(LC_ALL, "Portuguese");

int x, y, maior;

printf("Digite o primeiro n�mero: \n");

scanf("%d", &x);

printf("Digite o segundo n�mero: \n");

scanf("%d", &y);

if(x > y){
	
	maior = x - y;
	
	printf("O maior n�mero �:  %d, e a diferen�a do maior para o menor �: %d ", x, maior);
	
}
else{
	
	maior = y - x;
	
	printf("O maior n�mero �:  %d, e a diferen�a do maior para o menor �: %d ", y, maior);
	
}

*/

//19.  Escrever um programa fonte na Linguagem C  que exiba ao usu�rio os n�meros de 1 a 10, usando os comando while ou for de repeti��o.//
/*
setlocale(LC_ALL, "Portuguese");

int x[10] = { 1,2,3,4,5,6,7,8,9,10}, i;

for(i = 9; i >= 0; i--){
	
printf("\n%d", x[i]);


}
*/

//20.  Escrever um programa fonte na Linguagem C  que exiba ao usu�rios os n�meros de 100 a 1, usando os comando while ou for de repeti��o.//
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
	
	printf("Digite um n�mero:   ");
	scanf("%d", x[i]);


if(x[i] < 0) {
	x[i] = 0;

printf("Valor Ajustado da posi��o %i = %i ", i, x[i]);

}
}

	




}

