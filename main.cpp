#include <winsock2.h>              //包含 Windows Sockets API 的头文件，该头文件提供了使用 Windows 套接字所需的函数、数据类型和常量定义。
#include <windows.h>               //包含 Windows 操作系统的核心头文件，提供了许多 Windows 相关的函数和类型定义。
#include <iostream>                //含标准输入输出流的头文件，用于在控制台进行输入输出操作，例如 std::cout 和 std::cerr
#pragma comment(lib, "ws2_32.lib") // 预处理指令，用于在编译时将 ws2_32.lib 库链接到程序中。ws2_32.lib 是 Windows Sockets 2 的实现库，包含了实现网络通信所需的函数
#define DEFAULT_PORT 8888          // 定义一个宏 DEFAULT_PORT，表示服务器监听的默认端口号为 8888
#define BUFFER_SIZE 1024           // 定义一个宏 BUFFER_SIZE，表示接收数据缓冲区的大小为 1024 字节
int main(int, char **)
{
    WSADATA wsaData;                        // 定义一个 WSADATA 类型的变量 wsaData，用于存储 Winsock 库的初始化信息。
    SOCKET listenSocket = INVALID_SOCKET;   // 定义一个 SOCKET 类型的变量 listenSocket，用于监听客户端连接，初始化为 INVALID_SOCKET 表示无效的套接字
    SOCKET clientSocket = INVALID_SOCKET;   // 定义一个 SOCKET 类型的变量 clientSocket，用于与客户端进行通信，初始化为 INVALID_SOCKET
    struct sockaddr_in serverAddr;          // 定义一个 sockaddr_in 类型的结构体变量 serverAddr，用于存储服务器的地址信息。
    struct sockaddr_in clientAddr;          // 定义一个 sockaddr_in 类型的结构体变量 clientAddr，用于存储客户端的地址信息。
    int clientAddrLen = sizeof(clientAddr); // 定义一个整型变量 clientAddrLen，用于存储客户端地址结构体的长度。
    char recvBuffer[BUFFER_SIZE];           // 定义一个字符数组 recvBuffer，用于存储从客户端接收的数据，数组大小为 BUFFER_SIZE。
    if(WSAStartup(MAKEWORD(2,2),&wsaData)!=0) //调用 WSAStartup 函数初始化 Winsock 库，MAKEWORD(2, 2) 表示使用 2.2 版本的 Winsock，&wsaData 是存储初始化信息的结构体指针。
    {
       
    }
}
