#include "main.h"

/**
 * create_buffer - Function that create a buffer at a default size of 1024
 *
 * Return: a pointer to a pointer.
 */
buffer *create_buffer()
{
	buffer *buf;

	buf = malloc(sizeof(buffer));
	if (!buf)
		return (NULL);
	buf->index = 0;
	buf->size = 1024;
	buf->padding = 0;
	buf->content = malloc(sizeof(char) * buf->size + 1);

	return (buf);
}

/**
 * create_buffer_with_size - Function that create a buffer at a custom
 * @buffer_size: the desired size of the custom buffer.
 *
 * Return: a pointer to a buffer
 */
buffer *create_buffer_with_size(int buffer_size)
{
	buffer *buf;

	buf = malloc(sizeof(buffer));
	if (!buf)
		return (NULL);
	buf->index = 0;
	buf->size = buffer_size;
	buf->padding = 0;
	buf->content = malloc(sizeof(char) * buf->size + 1);

	return (buf);
}

/**
 * free_buffer - frees up the buffer.
 * @buf: pointer to a buffer
 */
void free_buffer(buffer *buf)
{
	if (!buf)
		return;
	free(buf->content);
	free(buf);
}
