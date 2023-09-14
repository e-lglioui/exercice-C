#include <stdio.h>
#include <stdlib.h>

int main()
{
    char verb[100];
    char adj[40];
    int l;
    do{
        printf("enter le verbe\n");
        gets(verb);
        l=strlen(verb);
    }
    while(verb[l-2]!= 'r' && verb[l-2] !='e');
    verb[l-1]='\0';

    strcat(adj,"je ");
    strcat(adj,verb);
    strcat(adj,"e");
    puts(adj);
    adj[0]='\0';
    strcpy(adj,"tu ");
    strcat(adj,verb);
    strcat(adj,"es");
    puts(adj);
    adj[0]='\0';
    strcpy(adj,"il ");
    strcat(adj,verb);
    strcat(adj,"e");
    puts(adj);
    adj[0]='\0';
    strcpy(adj,"nous ");
    strcat(adj,verb);
    strcat(adj,"ons");
    puts(adj);
    adj[0]='\0';
    strcpy(adj,"vous ");
    strcat(adj,verb);
    strcat(adj,"ez");
    puts(adj);
    adj[0]='\0';
    strcpy(adj,"ils ");
    strcat(adj,verb);
    strcat(adj,"ez");
    puts(adj);
    return 0;
}
