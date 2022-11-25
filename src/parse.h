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

// Limits from taking in data from file
#define MAX_LINES 100
#define MAX_LEN 100

int ln;

// Global for main.c to use
char data [MAX_LINES][MAX_LEN];

char * address;
// The tag, byte select, index and operation n using the index of which element
// in arrays
int *tag;
int *byte_sel;
int *indx;
int *n;

// Parse a trace file by given name
void parse_file(char *file_name);

// Convert hex string from tracefile to binary string
char *hex2bin(char *hex);

// Take original string and create substring from it based on index of original
// string and length of desired substring
void substr(char *str_og, char *substr, int idx, int len);


#endif
