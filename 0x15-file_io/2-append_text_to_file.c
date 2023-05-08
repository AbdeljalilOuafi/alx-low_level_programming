#include "main.h"

/**
 * append_text_to_file - adds text to a file that already exists
 * @filename: pointer to the name of the file to add text to
 * @text_content: pointer to a string that will
 * be added to the file
 * Return: If the function fails - -1
 * else - 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
