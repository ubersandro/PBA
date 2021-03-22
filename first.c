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
}				/* ----------  end of function main  ---------- */
