/*
 * sim-sci (Simulation Scientists)
 *
 * Team: Jinghan Zhang
 *       Ramez Abdo
 *       Nisanath Kangwanchaivanich
 *       Ibrahim Binmahfood
 *
 * parse.h: Header file for parse.c
 *
 */

#ifndef __PARSE_H
#define __PARSE_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

// Limits from taking in data from file
#define MAX_LINES 100
#define MAX_LEN 100

// Global for main.c to use
char data [MAX_LINES][MAX_LEN];
int ln;

// Parse a trace file by given name
int parse_file(char *file_name);

#endif
