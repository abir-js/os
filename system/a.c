#include<stdio.h>
#include<unistd.h>
int main(){
    printf("Child process id is %d", getpid());
    return 0;
}