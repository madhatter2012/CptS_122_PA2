#pragma once

#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#define CRT_SECURE_NO_WARNINGS
#include  <stdio.h>
#include <stdlib.h>
#include <string.h>

//Function Headers

typedef struct {
	char *artist;
	char *album;
	char *title;
	char *genre;
	int length; //?
	int played;
	int rating;
} song;

typedef struct list {
	song *data;
	struct list *next;
	struct list *prev;

} list;




























#endif
