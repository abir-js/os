#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main(){
    pid_t pid=fork();
    if(pid < 0){
        printf("Fork failed");
    } else if(pid == 0){
        printf("Child process id is %d", getpid());
    } else {
        printf("Parent process id is %d", getppid());
    }
    return 0;
}