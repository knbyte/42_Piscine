/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:17:26 by svresnya          #+#    #+#             */
/*   Updated: 2024/02/11 18:12:41 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //printf, for debug

#include <unistd.h> //write, read, close
#include <stdlib.h> //malloc, free
#include <fcntl.h> //open?

#include "utils.h" //own ft functions

void	ft_error(char* str);
int		ft_validate(int nbr);
char*	ft_readfile(int argc, char* argv[], int bufsz, char* buf, int* val);
void	ft_parsefile(char* buffer, int value, int* numbers, char* words);
void	ft_parseline(char* line, int* numbers, char* words);

//TODO: REMOVE printf BEFORE SUBMISSION
int	main(int argc, char* argv[])
{
	//the integer to verbalise
	int		value;
	//file read buffer. Big. By rights, should be re-allocated as needed,
	//but I don't want to implement realloc just now.
	int		bufsize;
	char*	buffer;
	int*	numbers;
	char*	words;

	bufsize = 1024000;
	buffer = NULL;
	numbers = NULL;
	words = NULL;
	//Read in the file and attach it to the buffer
	buffer = ft_readfile(argc, argv, bufsize, buffer, &value);
	printf("read file - have buffer %s\n", buffer);
	//Put file into two arrays - for numbers and for words
	ft_parsefile(buffer, value, numbers, words);
	exit(EXIT_SUCCESS);
}

char*	ft_readfile(int argc, char* argv[], int bufsz, char* buf, int* val)
{
	//the dictionary filename - numbers.dict from attachements or the second argument
	char*	filename;
	//file descriptor to file
	int		ifd;
	
	buf = (char*)malloc(bufsz*sizeof(char));
	buf[bufsz-1] = '\0';
	if (argc == 3)
	{
		filename = argv[1];
		*val = ft_validate(ft_atoi(argv[2]));
	}
	else if (argc == 2)
	{
		filename = "numbers.dict";
		*val = ft_validate(ft_atoi(argv[1]));
	}
	else
	{
		filename = "FAIL";
		*val = -3000;
		ft_error("Too many/few arguments\n");
	}
	printf("file %s, num %d\n", filename, *val);
	ifd = open(filename, O_RDONLY);
	if (ifd == -1) 
	{
		ft_error("open failed:");
		exit(EXIT_FAILURE);
	}
	read(ifd, buf, bufsz-1);
	printf("Done reading!\n%s\n", buf);
	close(ifd);
	return buf;
};

void	ft_parsefile(char* buf, int value, int* numbers, char* words)
{
	printf("In parsefile\n");
	//buffer index
	int bidx;
	//line index
	int lidx;
	//line buffer
	char* line;

	bidx = 0;
	lidx = 0;
   	//Yes, just a guess at the size of the line. Really should make a realloc
	line = (char*)malloc(1024 * (sizeof(char)));
	printf("In parsefile - have line %s, lidx %d, bidx %d\n",buf, lidx, bidx);
	while (buf[bidx] != '\0')
	{
		printf("In parsefile - not a null, lidx %d, bidx %d\n", lidx, bidx);
		while (buf[bidx] != '\n')
		{
			printf("In parsefile - not a newline, lidx %d, bidx %d\n", lidx, bidx);
			line[lidx] = buf[bidx];
			bidx++;
			lidx++;
		}
		line[lidx] = '\0';
		printf("In parsefile - terminated a line '%s', lidx %d, bidx %d\n",line, lidx, bidx);
		ft_parseline(line, numbers, words);
		lidx = 0;
		bidx++;
	}
	printf ("value in parsefile %d\n", value);
}
void	ft_error(char* str)
{
	if (str[0] == '\n')
	{
		write(2, &"Error\n", 7);
	}
	printf("%s\n", str);
	exit(EXIT_FAILURE);
}

int		ft_validate(int nbr)
{
	if (nbr < 0)
	{
		ft_error("Error\n");
	}
	return (nbr);
}

void	ft_parseline(char* line, int* numbers, char* words)
{	
	printf("In parseline\n");
	printf("Got a line %s, parsing\n", line);
//	int num;
//	char* word;
	//split "line" into num and word and put into arrays below into arr[location]
	numbers = NULL;
	words = NULL;
}
/*
 *
	char argv[] ;
	argv = char[10]; 
*
*/
