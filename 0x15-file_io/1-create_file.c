#include "main.h"

/**
 * create_file - create file and write content into it
 * @filename: pointer to the name of the file to be created
 * @text_content: pointer to string in order to
 * write to the file
 * Return: If the function fails - -1
 * else - 1
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
