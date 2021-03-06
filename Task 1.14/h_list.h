/*
 * File:  h_list.h
 * Brief: Double linked list header
 * Autor: code squd 1337
 * Created on 16.12.2019
 * (c) MIPT 2019
 */

#pragma once

typedef struct _PERSON
{
	char *surname;
	unsigned long long number;
} PERSON, *PPERSON;

typedef struct _LIST_NODE
{
	PERSON value;
	struct _LIST_NODE *prev;
	struct _LIST_NODE *next;
} LIST_NODE;

typedef struct _LIST
{
	LIST_NODE *first;
} LIST;

LIST *list_new();

void list_del(LIST *l);

void unshift(LIST *l, PERSON a);

LIST *find_l(LIST *l, char *surname);

void print_dl_list(LIST *l);
