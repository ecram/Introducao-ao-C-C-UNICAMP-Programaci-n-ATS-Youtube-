#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
int main()
{
   FILE *fp;
   fp=fopen("lab05.txt","w");
   if( fp == NULL )
   {
      perror("Erro com a funcao fopen");
   }
   else
   {
      for( int c=1 ; c<=20 ; c++ )
      {
         fprintf(fp,"%d ", c);
         if( errno ) perror("Erro com a funcao fptintf");
      }
      fprintf(fp,"\n");
   }
   fclose(fp);
   return 0;
}
