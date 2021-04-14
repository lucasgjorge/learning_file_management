#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _Endereco Endereco;

struct _Endereco
{
	char logradouro[72];
	char bairro[72];
	char cidade[72];
	char uf[72];
	char sigla[2];
	char cep[8];
	char lixo[2];
};

int compara(const void *e1, const void *e2)
{
	return strncmp(((Endereco*)e1)->cep,((Endereco*)e2)->cep,8);
}

int main(int argc, char**argv)
{
	FILE *f, *saida;
	Endereco *e;
	long posicao, qtd, metade,bloco1,bloco2,bloco3,bloco4,bloco5,bloco6,bloco7,bloco8,bloco9,bloco10,bloco11,bloco12,bloco13,bloco14,bloco15,bloco16;
	 

	f = fopen("cep.dat","r");
	fseek(f,0,SEEK_END);
	posicao = ftell(f);
	qtd = posicao/sizeof(Endereco);
    bloco1 = qtd/16;
    e = (Endereco*) malloc(metade*sizeof(Endereco));
	rewind(f);
	if(fread(e,sizeof(Endereco),bloco1,f) == bloco1)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_bloco1.dat","w");
	fwrite(e,sizeof(Endereco),bloco1,saida);
	fclose(saida);
    printf("Escrito = OK\n");
	free(e);
    
    qtd = qtd-bloco1;
    bloco2 = qtd/15;
    e = (Endereco*) malloc((bloco2)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco),bloco2,f) == bloco2)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_bloco2.dat","w");
	fwrite(e,sizeof(Endereco),bloco2,saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-bloco2;
    bloco3 = qtd/14;
    e = (Endereco*) malloc((bloco3)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco),bloco3,f) == bloco3)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_bloco3.dat","w");
	fwrite(e,sizeof(Endereco),bloco3,saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-bloco3;
    bloco4 = qtd/13;
    e = (Endereco*) malloc((bloco4)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco),bloco4,f) == bloco4)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_bloco4.dat","w");
	fwrite(e,sizeof(Endereco),bloco4,saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-bloco4;
    bloco5 = qtd/12;
    e = (Endereco*) malloc((bloco5)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco),bloco5,f) == bloco5)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_bloco5.dat","w");
	fwrite(e,sizeof(Endereco),bloco5,saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd= qtd-bloco5;
    bloco6 = qtd/11;
    e = (Endereco*) malloc((bloco6)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco),bloco6,f) == bloco6)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_bloco6.dat","w");
	fwrite(e,sizeof(Endereco),bloco6,saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd=qtd-bloco6;
    bloco7 = qtd/10;
    e = (Endereco*) malloc((bloco7)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco),bloco7,f) == bloco7)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_bloco7.dat","w");
	fwrite(e,sizeof(Endereco),bloco7,saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-bloco7;
    bloco8 = qtd/9;
    e = (Endereco*) malloc((bloco8)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco),bloco8,f) == bloco8)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_bloco8.dat","w");
	fwrite(e,sizeof(Endereco),bloco8,saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-bloco8;
    bloco9 = qtd/8;
    e = (Endereco*) malloc((bloco9)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco),bloco9,f) == bloco9)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_bloco9.dat","w");
	fwrite(e,sizeof(Endereco),bloco9,saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-bloco9;
    bloco10 = qtd/7;
    e = (Endereco*) malloc((bloco10)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco),bloco10,f) == bloco10)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_bloco10.dat","w");
	fwrite(e,sizeof(Endereco),bloco10,saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-bloco10;
    bloco11 = qtd/6;
    e = (Endereco*) malloc((bloco11)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco),bloco11,f) == bloco11)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_bloco11.dat","w");
	fwrite(e,sizeof(Endereco),bloco11,saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-bloco11;
    bloco12 = qtd/5;
    e = (Endereco*) malloc((bloco12)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco),bloco12,f) == bloco12)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_bloco12.dat","w");
	fwrite(e,sizeof(Endereco),bloco12,saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-bloco12;
    bloco13 = qtd/4;
    e = (Endereco*) malloc((bloco13)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco),bloco13,f) == bloco13)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_bloco13.dat","w");
	fwrite(e,sizeof(Endereco),bloco13,saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd - bloco13;
    bloco14 = qtd/3;
    e = (Endereco*) malloc((bloco14)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco),bloco14,f) == bloco14)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_bloco14.dat","w");
	fwrite(e,sizeof(Endereco),bloco14,saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-bloco14;
    bloco15 = qtd/2;
    e = (Endereco*) malloc((bloco15)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco),bloco15,f) == bloco15)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_bloco15.dat","w");
	fwrite(e,sizeof(Endereco),bloco15,saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-bloco15;
    bloco16 = qtd;
    e = (Endereco*) malloc((bloco16)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco),bloco16,f) == bloco16)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_bloco16.dat","w");
	fwrite(e,sizeof(Endereco),bloco16,saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);
	fclose(f);
}