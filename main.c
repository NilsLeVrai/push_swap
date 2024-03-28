#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_value
{
    struct s_value   *prev;
    int               value;
    int               index;
    struct s_value   *next;
}               t_value;

void swap(t_value *a, t_value *b)
{
    t_value temp = *a;
    *a = *b;
    *b = temp;
}

void sort(t_value *values, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (values[j].index > values[j + 1].index)
            {
                swap(&values[j], &values[j + 1]);
            }
        }
    }
}

void print_values(t_value *values, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Value: %d\n", values[i].value);
        printf("Index: %d\n", values[i].index);
    }
}

int parse_arguments(int argc, char *argv[], t_value *values)
{
    int i;
    for (i = 1; i < argc; i++)
    {
        char *endptr;
        long value = strtol(argv[i], &endptr, 10);
        values[i - 1].value = value;
        values[i - 1].index = i;
    }
    return argc - 1;
}

int main(int argc, char *argv[])
{
    t_value values[argc - 1];
    int n;
    if ((n = parse_arguments(argc, argv, values)) < 0)
    {
        printf("Error: Invalid arguments\n");
        return 1;
    }
    sort(values, n);
    print_values(values, n);
    return 0;
}
