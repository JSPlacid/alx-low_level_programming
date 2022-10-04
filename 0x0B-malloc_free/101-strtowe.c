#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * wordcounter - counts words and the letters in them
 * @str: string to count
 * @pos: position to commence counting from
 * @firstchar: position of the word first letter, if pos = 0,
 * count the number of chars in the word else count no of words
 * Return: wordcount if pos == 0' length of word, if pos > 0
 * pos of word if pos > 0 && firstchar > 0
 */

int wordcounter(char *str, int pos, char firstchar)
{
	int i, wordcount, charcount, flag;

	str[0] != ' ' ? (wordcount = 1) : (wordcount = 0);
	for (i = 0, flag = 0; str[i]; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0' && flag == 0)
		{
			wordcount++;
			flag = 1;
		}
		if (pos > 0 && pos == wordcount)
		{
