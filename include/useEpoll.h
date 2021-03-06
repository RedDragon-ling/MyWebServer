/***********************************************************
 *@author RedDragon
 *@date 2020/8/26
 *@brief 封装了一些使用epoll的函数
***********************************************************/
#ifndef WEBSERVER_USEEPOLL_H
#define WEBSERVER_USEEPOLL_H

#include <sys/epoll.h>
#include <cstdio>

extern int epollFd;

int epoll_init();
int epoll_add(int fd, struct epoll_event* ev);
int epoll_mod(int fd, struct epoll_event* ev);
int epoll_del(int fd, struct epoll_event* ev);


#endif //WEBSERVER_USEEPOLL_H
