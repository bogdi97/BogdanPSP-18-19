#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
int main(int argc, char const *argv[])
{
    if (system("ls")==-1) {
     fprintf(stderr,"Error al ejecutar el comando");
    }
    fprintf(stdout,"\n Ahora con execl:\n");
    execl("/bin/ls","ls","-l", NULL);
    return 0;
    
}
