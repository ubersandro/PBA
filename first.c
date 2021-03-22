<<<<<<< HEAD
/*
 * =====================================================================================
 *
 *       Filename:  first.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  16/03/21 13:10:05
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alessandro Mileto (ubersandro), alessandromileto22@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

/*-----------------------------------------------------------------------------
 * Frame comment test 
 *-----------------------------------------------------------------------------*/
#include	<stdio.h>
#include	<stdlib.h>
#include	<unistd.h>
#include 	<string.h> 


int main ( int argc, char *argv[] )
{
	char buffer[]="Ciao come stai?";  
 	char porcodio[10];
	strcpy(porcodio, argv[1]);  
	printf("%s",buffer); 
	return EXIT_SUCCESS;
}

				/* ----------  end of function main  ---------- */
/*
=======
#include<stdio.h> 

int main(int argc, char * argv[]){
	int x=4;
	printf("%d\n",x);
	return 0; 
}
>>>>>>> d1e6c82314e19733abcbbdd3a9e54307c80d71d2
*/
