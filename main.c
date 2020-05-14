#include "monty.h"
#include "stdio.h"
#include "lists.h"

/**
 * main - Principal function of the program.
 * data_file - pointer to the data of the file
 *
 */


int main () {

char *line_buf = NULL;
size_t line_buf_size = 0;
//int line_count = 0;
//ssize_t line_size;

 //pointer to the file
FILE * data_file;
//char display = "";

//Getting in to the file
data_file = fopen("00.m", "r");

//Condictional, if is not the file, print error
if (!data_file) {
fprintf(stderr, "Error opening file \n");
}

//Get the firs line of the file
getline(&line_buf, &line_buf_size, data_file);

//show the line details
printf("%s", line_buf);

//Loop to extract every character
//while (1) {
//reading the file
//display = fgetc(data_file);

//end of file indicator;
//if (feof(data_file))
//break;

//displaying every characters
//printf("%c", display);
//}
//closes the file pointed by data_file
fclose(data_file);
return 0;
 }
