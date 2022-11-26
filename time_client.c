#include"netinet/in.h"
#include"sys/socket.h"
#include"stdio.h"
main()
{
struct sockaddr_in sa,cli;
int n,sockfd;
int len;char buff[100];
sockfd=socket(AF_INET,SOCK_STREAM,0);
if(sockfd<0){ printf("\nError in Socket\n");
exit(0);
}
else printf("\nSocket is Opened\n");
bzero(&sa,sizeof(sa));
sa.sin_family=AF_INET;
sa.sin_port=htons(9000);
if(connect(sockfd,(struct sockaddr*)&sa,sizeof(sa))<0)
{
printf("\nError in connection failed\n\
\\\\
\\\\\\\
exit(0);
}
else
printf("\nconnected successfully");
if(n=read(sockfd,buff,sizeof(buff))<0)
{
printf("\nError in Reading\n");
exit(0);
}
else
{printf("\nMessage Read %s\n",buff);
}}
