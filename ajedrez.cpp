#include <stdio.h>
#include <conio.h>
main()
{
int F=8;
int C=8;
int matriz[8][8], i,j, vector [8]={0,0,0,0,0,0,0,0};
for(i=0; i<F; i++)
for(j=0; j<C; j++)
{
printf("Ingrese el elemento", i,j);
scanf("%d", &matriz[i][j]);
vector[i]=vector[i]+matriz[i][j];
}
printf("La Matriz generada es:\n\n");
for(i=0; i<F; i++)
{
for(j=0; j<C; j++)
{
printf("%d", matriz[i][j]);
}
printf("\n");
}
getch();
return 0;
}
