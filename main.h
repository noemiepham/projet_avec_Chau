#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * Main function to test in the project.
 * Code for this functio is in printf.c
 */
int _printf(const char *format, ...);

/**
 * buffer_handle is the structure to print to the screen.
 * @index: current index of the buffer.
 * @size: total size of the buffer.
 * @padding: the part that needs to be padded. (NEED TO BE RE-READ)
 * @content: pointer to the buffer's content.
 */
typedef struct buffer_handle
{
    unsigned int index;
    unsigned int size;
    unsigned int padding;
    char *content;
} buffer;

/* These functions are defined in buffer_memory.c */
buffer *create_buffer();
buffer *create_buffer_with_size(int);
void free_buffer(buffer *);

/* These functions are defined in buffer_operation.c */
void increase_buffer(buffer *);
int get_buffer_size(buffer *);
void append_number_to_buffer(buffer *buf, unsigned int num);
char *copy_buffer_content(buffer *);
void write_and_clear_buffer(buffer *);

/**
 * struct writer_handle - struct for the write operators.
 * @operation: hold a symbol that represents the operator.
 * @write_function: pointer function to the write functions.
 */
typedef struct writer_handle
{
    char *operation;
    int (*write_function)(buffer *, va_list);
} writer;

/* These functions are defined in writer.c */
int operator_scan(buffer *buf, va_list v_ls, const char *src, int src_i);
int write_char(buffer *buf, va_list v_ls);
int write_string(buffer *buf, va_list v_ls);
int write_percentage_sign(buffer *buf, va_list v_ls);
int write_signed_integer(buffer *buf, va_list v_ls);
