#include <stdio.h>    
#include <winsock2.h>    
#include <iostream>
using namespace std;   
#pragma comment(lib,"ws2_32.lib")    
    
int main()    
{    
    cout<<"==========SERVER==========";

    //��ʼ��WSA    
    WORD sockVersion = MAKEWORD(2,2);    //�����汾 
    WSADATA wsaData;     //wsaData���ڴ��winsock��ʼ����Ϣ 
    if(WSAStartup(sockVersion, &wsaData)!=0)    //��ʼ��Winsock�汾 
    {    
        return 0;    
    }    
    
    //�����׽���    
    SOCKET slisten = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);    
    if(slisten == INVALID_SOCKET)    
    {    
	
	    cout<<endl;
		cout<<"socket error !";    
        return 0;    
    }    
    
    //��IP�Ͷ˿�    
    sockaddr_in sin;    
    sin.sin_family = AF_INET;    //��ʾTCP/IPЭ�� 
    sin.sin_port = htons(8888);   //���������޷��Ŷ�������ת���������ֽ�˳��

 
    sin.sin_addr.S_un.S_addr = INADDR_ANY;     //INADDR_ANY=0.0.0.0����ʾ���� 
    if(bind(slisten, (LPSOCKADDR)&sin, sizeof(sin)) == SOCKET_ERROR)    
    {    cout<<endl;
        cout<<"bind error !";    
    }    
    
    //��ʼ����    
    if(listen(slisten, 5) == SOCKET_ERROR)    
    {   cout<<endl;
        cout<<"listen error !";    
        return 0;    
    }    
    
    //��������  
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
            
        //��������    
        int ret = recv(sClient, revData, 255, 0);           
        if(ret > 0 )   
	
        {    
            revData[ret] = 0x00; 
			cout<<" Message from client : ";   
            cout<<revData;    
        }    
    
        //��������    
        const char * sendData = "Server Response: Successful !"; 
		 
        send(sClient, sendData, strlen(sendData), 0);    
        closesocket(sClient);    
        
    }    
        
    closesocket(slisten);    
    WSACleanup();    
    return 0;    
}   
