#include "main.h"
/**
 * append_text_to_file - append text to the end of the file
 * @filename: param refers to file name
 * @text_content: param refers to text content to be appended to the file
 * Return: 1 when success and -1 when failed
*/
int append_text_to_file(const char *filename, char *text_content)
{
    int o, w, len = 0;

    if (filename == NULL)
    {
    return (-1);
    }
    if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

    o = open(filename, O_APPEND | O_WRONLY);
    w = write(o, text_content, len);

    if (o == -1 || w == -1)
    return (-1);

    close(o);

    return (1);
}