#pragma once
#include "image.h"

typedef struct Player {
    int id;
    Image * texture;
    struct Player * next;
} Player;

typedef struct {
    Player * first;
    Player * last;
    int n;
} PlayersList;

PlayersList * players_list_new();
Player * player_list_insert(PlayersList * p, int id, Image * i);
Player * player_list_find(PlayersList * p, int id);
void player_list_delete(PlayersList * p, int id);
void player_list_print(PlayersList * p);
void player_list_free(PlayersList * p);
