#ifndef BLOCKS_H
#define BLOCKS_H

#include "../../includes/types.h"
#include "../../includes/tetris.h"

t_list *block(float x, float y, SDL_Renderer *renderer);
t_list *Cube(float x, float y, SDL_Renderer *renderer);
t_list *Z_peice(float x, float y, SDL_Renderer *renderer);
t_list *Revers_Z_peice(float x, float y, SDL_Renderer *renderer);
t_list *Line_peice(float x, float y, SDL_Renderer *renderer);
t_list *T_peice(float x, float y, SDL_Renderer *renderer);
t_list *L_peice(float x, float y, SDL_Renderer *renderer);
t_list *Revers_L_peice(float x, float y, SDL_Renderer *renderer);
possition_t *get_possition(float x, float y);
float get_start(int p_num);
float get_end(int p_num);
#endif