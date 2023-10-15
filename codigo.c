#include <stdlib.h>
#include <stdio.h>
int main( int argc, char *argv[] ) 
 {
   
   int d;
   int opt = 0;
   if( argc == 2 ) 
   {
      printf("The argument supplied is %s\n", argv[1]);
   }
   else if( argc < 2 )
   {
      printf("One argument expected.\n");
      return(-1);
   }
   else {
      printf("Too many arguments supplied.\n");
      return(-2);
   }
   d = atoi(argv[1]);
   printf("argv[1] in intger=%d\n",d);
   
   switch(d) {
      case 1: {
	 printf("Test =%d Probando caso #1\n",d);
      }
      break;
      case 2: {
	 printf("Test =%d Probando caso #2\n",d);
      }
      break;
      case 3: {
	 printf("Test =%d Probando caso #3\n",d);
      }
      break;
      case 4: {
	 printf("Test =%d Probando caso #4\n",d);
	 int color = 0;
	 int *pointer = 0;
	 color = *pointer;
      }
      break;
      case 5: {
	 printf("Test =%d Probando caso #5\n",d);
      }
      break;
      default: {
	 printf("Test =%d caso invalido probar del 1 al 5\n",d);
      }
      break;
      
   }
}
