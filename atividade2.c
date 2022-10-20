#include <stdio.h>

/*
//1-

typedef struct
{
	double notap1;
	double notap2;
	double notap3;
}
	Aluno;
	
void imprimeAluno(Aluno a)
{
	double media = (a.notap1 + a.notap2 + a.notap3) / 3.0;
	printf ("%.2f\n\n", media);
}

int main()
{
	Aluno Turma[30], a;
	Turma [10].notap1 = 9.0;
	Turma [10].notap2 = 5.0;
	Turma [10].notap3 = 5.0;
	a = Turma [10];
	a.notap3 = 7.0;
	imprimeAluno (a);
}
*/

/*
//2-

int recursao (int);
int main()
{
	printf ("%d", recursao (12));
}

int recursao (int n)
{
	if (n <= 4)
	{
		return n + 2;
	}
	else
	{
		return recursao (recursao (n / 3));
	}
}

*/

/*
//4-

int main ()
{
	int i = 6, x, y, r;
	
	scanf ("%d", &x);
	scanf ("%d", &y);
	
	while (i >= 0)
	{
		if (i % 2 == 1)
		{
			++x;
		}
		else
		{
			++y;
		}
		--i;
	}
	
	r = x + y;
	
	printf ("%d", r);
	
	return 0;
}

*/

/*
//5-

int main ()
{
	int i = 10;
	int j = 20;
	int k = 9;
	
	int result;
	
	result = (i << 1) + (j & k);
	printf ("%d", result);
}

*/


//6-

int main()
{
	int i = 20;
	int j = 12;
	double x = 7.0;
	double y = 6.0;
	int result;
	
	result = !(x + 4.0) + !!y + !!!i + !!i + 12;
	printf ("%d", result);
}



/*
//7-

int main()
{
	double n1, n2, n3, p1=1, p2=2, p3=3, nota_final;
	
	printf ("\nDigite sua primeira nota: ");
	scanf ("%lf", &n1);
	printf ("\nDigite sua segunda nota: ");
	scanf ("%lf", &n2);
	printf ("\nDigite sua terceira nota: ");
	scanf ("%lf", &n3);
	
	nota_final = (n1*p1+n2*p2+n3*p3)/(p1+p2+p3);
	
	printf ("\nSuas notas foram: %.2f, %.2f e %.2f", n1, n2, n3);
	printf ("\nSua media foi: %.2f", nota_final);
	
	if (nota_final >= 5.0)
	{
		printf ("\nVoce foi aprovado");
	}
	else
	{
		printf("\nVoce foi reprovado");
	}
	
}

*/

/*
//8-

int main()
{
	int n = 0, soma = 0, maior = -1, par = 0;
	
	do
	{
		scanf ("%d", &n);
		
		if (n != 999)
		{
			soma = soma + n;
		}
		if (n > maior & n != 999)
		{
			maior = n;
		}
		if (n % 2 == 0)
		{
			par = par + n;
		}
		
	} while (n != 999);
	
	printf ("\nA soma dos numeros foi: %d", soma);
	printf ("\nO maior numero foi: %d", maior);
	printf ("\nA soma dos numeros pares foi: %d", par);
}

*/
