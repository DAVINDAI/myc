#include<unistd.h>
int main()
{
    //char * argv[ ] ={"ls","-al","/etc/passwd",0};
    char * argv[ ] ={"/etc/passwd",0};
    execvp("ls",argv);
}
