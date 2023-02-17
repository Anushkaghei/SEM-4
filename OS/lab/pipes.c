#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define BUFFER_SIZE 50
#define READ_END 0
#define WRITE_END 1

int main()
{
	char write_msg[BUFFER_SIZE];
    printf("Enter the String:");
    
    int size=0;

    while((write_msg[size++]=getchar())!='\n');

    printf("\n");

	char read_msg[BUFFER_SIZE] = "";
	/int fd[2];
	pid_t  pid;

	if (pipe(fd) == -1) 
	{
		printf("Pipe failed\n");
		return 1;
	} 
	
    pid = fork();

	if (pid > 0)  
	{	
		close(fd[READ_END]);
		write(fd[WRITE_END], write_msg, strlen(write_msg)+1);
		close(fd[WRITE_END]);
		wait(NULL);
	}
	else if (pid == 0) 
	{
		close(fd[WRITE_END]);
		read(fd[READ_END], read_msg, BUFFER_SIZE);
		while(size--)
        {
            printf("%c",read_msg[size]);
        }
        printf("\n");
		close(fd[READ_END]);
	}
	else 
	{ 
		printf("Fork failed\n");
		return 1;
	}

}
