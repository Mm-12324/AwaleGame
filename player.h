#ifndef PLAYER_H
#define PLAYER_H

#include "server.h"

typedef struct
{
   SOCKET sock;
   char name[BUF_SIZE];
}Player;

#endif /* guard */
