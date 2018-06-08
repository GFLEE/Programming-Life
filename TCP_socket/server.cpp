#include <stdio.h>    
#include <winsock2.h>    
#include <iostream>
using namespace std;   
#pragma comment(lib,"ws2_32.lib")    
    
int main()    
{    
    cout<<"==========SERVER==========";

    //初始化WSA    
    WORD sockVersion = MAKEWORD(2,2);    //声明版本 
    WSADATA wsaData;     //wsaData用于存放winsock初始化信息 
    if(WSAStartup(sockVersion, &wsaData)!=0)    //初始化Winsock版本 
    {    
        return 0;    
    }    
    
    //创建套接字    
    SOCKET slisten = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);    
    if(slisten == INVALID_SOCKET)    
    {    
	
	    cout<<endl;
		cout<<"socket error !";    
        return 0;    
    }    
    
    //绑定IP和端口    
    sockaddr_in sin;    
    sin.sin_family = AF_INET;    //表示TCP/IP协议 
    sin.sin_port = htons(8888);   //将主机的无符号短整形数转换成网络字节顺序

 
    sin.sin_addr.S_un.S_addr = INADDR_ANY;     //INADDR_ANY=0.0.0.0，表示本机 
    if(bind(slisten, (LPSOCKADDR)&sin, sizeof(sin)) == SOCKET_ERROR)    
    {    cout<<endl;
        cout<<"bind error !";    
    }    
    
    //开始监听    
    if(listen(slisten, 5) == SOCKET_ERROR)    
    {   cout<<endl;
        cout<<"listen error !";    
        return 0;    
    }    
    
    //接收数据  
    SOCKET sClient;    
    sockaddr_in remoteAddr;    
    int nAddrlen = sizeof(remoteAddr);    
    char revData[255];     
    while (true)    
    {    
	    cout<<"\n\n";
        cout<<"Waiting for connecting...\n";    
        sClient = accept(slisten, (SOCKADDR *)&remoteAddr, &nAddrlen);    
        if(sClient == INVALID_SOCKET)    
        {    cout<<"\n";
            cout<<"accept error !";    
            continue;    
        }    
cout<<"client"<<"("<< inet_ntoa(remoteAddr.sin_addr)<<")"<<"has connected to server .\r\n";   
//printf("client(%s) has connected to server .\r\n", inet_ntoa(remoteAddr.sin_addr));    
            
        //接收数据    
        int ret = recv(sClient, revData, 255, 0);           
        if(ret > 0 )   
	
        {    
            revData[ret] = 0x00; 
			cout<<" Message from client : ";   
            cout<<revData;    
        }    
    
        //发送数据    
        const char * sendData = "Server Response: Successful !"; 
		 
        send(sClient, sendData, strlen(sendData), 0);    
        closesocket(sClient);    
        
    }    
        
    closesocket(slisten);    
    WSACleanup();    
    return 0;    
}   
