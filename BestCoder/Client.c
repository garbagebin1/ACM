#include <stdio.h>  
#include <stdlib.h>  
#include <errno.h>  
#include <string.h>  
#include <netdb.h>  
#include <sys/types.h>  
#include <netinet/in.h>  
#include <sys/socket.h>  
#define SERVPORT 3333  
#define MAXDATASIZE 100  
main(int argc,char *argv[]){  
	char str[20];
    int sockfd,sendbytes;  
    char buf[MAXDATASIZE];  
    struct hostent *host;  
    struct sockaddr_in serv_addr;  
/*argc<2,表示没有输入主机名，主机句是IP地址形式，如“192.168.1.1”*/  
    if(argc < 2){  
        fprintf(stderr,"Please enter the server's hostname!\n");  
        exit(1);  
    }  
/*获取主机名，地址解析函数*/  
    if((host=gethostbyname(argv[1]))==NULL){  
        perror("gethostbyname");  
        exit(1);  
    }  
/*创建socket*/  
    if((sockfd=socket(AF_INET,SOCK_STREAM,0))==-1){  
        perror("socket");  
        exit(1);  
    }  
/*设置serv_addr结构参数*/  
    serv_addr.sin_family=AF_INET;  
    serv_addr.sin_port=htons(SERVPORT);  
    serv_addr.sin_addr=*((struct in_addr *)host->h_addr);  
    bzero(&(serv_addr.sin_zero),8);  
/*向服务器请求连接，serv_addr是服务器端地址*/  
    if(connect(sockfd,(struct sockaddr *)&serv_addr,\  
        sizeof(struct sockaddr))==-1){  
        perror("connect");  
        exit(1);  
    }  
	while(1)
	{
		printf("please eneter the file to Server ");
		gets(str);
	/*发送消息给服务器，发送str字符串中的数据给服务器端*/  
		if((sendbytes=send(sockfd,str,100,0))==-1){  
		    perror("send");  
		    exit(1);  
		}  
	}
/*关闭连接*/  
    close(sockfd);  
}  
