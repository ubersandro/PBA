#include<stdio.h> 
#include<unistd.h> 
#include<fcntl.h> 
#include<string.h> 
int main(int argc, char * argv[]){
	int fd = open("file.txt", O_CREAT|O_RDWR, 0644) ; 
	char buffer[100]="stringa";  
	/*buffer[]='\0'; null byte*/
	write(fd, buffer, strlen(buffer)+1); 
       	close(fd); 	
	return 0; 
}
