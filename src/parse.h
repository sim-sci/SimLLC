/*
 * sim-sci (Simulation Scientists)
 *
 * Team: Jinghan Zhang
 *       Ramez Abdo
 *       Nisanath Kangwanchaivanich
 *       Ibrahim Binmahfood
 *
 * parse.h: Definition to read a trace file and parse out hex address 
 * values to stdout. 
 *
 */

#ifndef __PARSE_H
#define __PARSE_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

// Parse a trace file by given name
int parse_file(char *file_name);

#endif
