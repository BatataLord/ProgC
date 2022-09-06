#include <stdio.h>
#include <stdbool.h>
#include <time.h>
//#define N 4

void CondicaoInicial(int tabuleiro[N][N])
{
	int L,C;

	for(L=0; L<N; L++)
	{
		for(C=0; C<N; C++)
		{
			tabuleiro[L][C] = 0;
			if(L==0)
			{
				tabuleiro[L][C] = 1;
			}
		}
	}
}

//bool EhSeguro(int tab[N][N])
//{
	
//}

	

int main(int argc, char *argv)
{
	/*
	clock_t t1, t2;
	t1 = clock();
	//
	t2 = clock();
	printf("Tempo = %2.2fs \n",(t2-t1)/(double)CLOCKS_PER_SEC); */
	
	int N = 4;
	
	if(argc == 2) 
	{
		N = atoi(argv[1]);
		printf("\n assumindo N = %x \n", N);
	}
	
	
	int tabuleiro[N][N];
	CondicaoInicial (tabuleiro);
}


