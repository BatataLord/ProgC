#include <stdio.h>
#include <math.h>
#define h 10
#define w 10


void mostramatriz(char m [h][w])
{
	
	 int l,c;
	 
	 for(l=0; l<h; l++)
	 {
	 	for(c=0;c<w;c++)
	 	{
	 		printf(" %c ", m[l][c]);
		}
		printf("\n");
	 }
}

void PrintLine(char m[h][w], int xa, int xb, int ya, int yb)
{
	int k;
	float dist = abs(xb-xa)+abs(yb-ya);
	float px = abs(xb-xa)/dist;
	float py = abs(yb-ya)/dist;
	printf ("dist = %f : px = %f : py = %f \n", dist, px,py);
	
	float deslx = 0.0, desly = 0.0;
	
	for(k=0; k<dist; k++)
	{
		deslx += px; desly += py;
		m[(int)desly] [(int)deslx] = '*';
		
	 } 
}


int main()

{
	char m[h][w];
	int xa=1, ya=9, xb=9, yb=9; //tem alguma coisa dando errado aqui
	int l,c;
	
	for(l=0; l<h; l++)
	 {
	 	for(c=0;c<w;c++)
	 	{
	 		m[l][c] = '.';
		}
		
	}	
	PrintLine(m,xa,xb,ya,yb);
	mostramatriz(m);
	return 0;
}
