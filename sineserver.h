#ifndef SINESERVER_H_   /* Include guard */
#define SINESERVER_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sched.h>
#include <errno.h>
#include <getopt.h>
#include <alsa/asoundlib.h>
#include <sys/time.h>
#include <math.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <ctype.h>
#include <stdbool.h>
#include <alloca.h>

#define   SA  struct sockaddr
#define   PACKETSIZE 16384
#define	  MIN_PORT 1024
#define   MAX_PORT 65535

#endif //SINESERVER_H_
