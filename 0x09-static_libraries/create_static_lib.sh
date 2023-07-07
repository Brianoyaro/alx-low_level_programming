#!/bin/bash
gcc -c _abs.c   _isalpha.c  _islower.c  _memcpy.c  _putchar.c  _strcat.c  _strcmp.c  _strlen.c   _strncpy.c  _strspn.c _atoi.c  _isdigit.c  _isupper.c  _memset.c  _puts.c     _strchr.c  _strcpy.c  _strncat.c  _strpbrk.c  _strstr.c
ar cr liball.a _abs.o   _isalpha.o  _islower.o  _memcpy.o  _putchar.o  _strcat.o  _strcmp.o  _strlen.o   _strncpy.o  _strspn.o _atoi.o  _isdigit.o  _isupper.o  _memset.o  _puts.o     _strchr.o  _strcpy.o  _strncat.o  _strpbrk.o  _strstr.o
ranlib liball.a
