#include "main.h"

/**
 * increase_buffer - increment both index and padding.
 * @buf: pointer to a buffer.
 */
void increase_buffer(buffer *buf)
{
	if (!buf)
		return;
	buf->index++;
	buf->padding++;
}

/**
 * get_buffer_size - get the size of the buffer;
 * @buf: the pointer to a buffer.
 *
 * Return: int type of the size.
 */
int get_buffer_size(buffer *buf)
{
	if (!buf)
		return (0);
	return (buf->size);
}

/**
 * append_number_to_buffer - appends a number as an integer to the buffer
 * @buf: the buf to write number characters to
 * @num: the number to write to the buffer
 * Return: No Value
 */
void append_number_to_buffer(buffer *buf, unsigned int num)
{
	if (num == 0)
		return;

	write_and_clear_buffer(buf);
	append_number_to_buffer(buf, num / 10);
	buf->content[buf->index] = (num % 10) + '0';
	increase_buffer(buf);
}

/**
 * copy_buffer_content - creates a copy of the buffer str field
 * @buf: pointer to a buffer.
 *
 * Return: a pointer to a copy.
 */
char *copy_buffer_content(buffer *buf)
{
	unsigned int i;
	char *copy;

	if (!buf)
		return (NULL);

	copy = malloc(sizeof(char) * buf->size + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (i < buf->index)
	{
		copy[i] = buf->content[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/**
 * write_and_clear_buffer - write and rest the buffer
 * @buf: pointer to the buffer
 */
void write_and_clear_buffer(buffer *buf)
{
	if (!buf || (buf->index <= buf->size))
		return;
	write(1, buf->content, buf->index);
	buf->index = 0;
	buf->content[0] = '\0';
}
