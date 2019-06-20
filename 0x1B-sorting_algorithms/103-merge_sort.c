#include "sort.h"

void print(int *a, int *buf, size_t l_i, size_t l_m, size_t r_i, size_t r_m)
{
    size_t left, l_size, right, r_size, i;

    left = l_i;
    l_size = l_m - l_i + 1;
    right = r_i;
    r_size = r_m - r_i + 1;
    i = l_i;

    printf("Merging...\n");
    printf("[left]: ");
    print_array(a + left, l_size);
    printf("[right]: ");
    print_array(a + right, r_size);

    while (l_i <= l_m && r_i <= r_m)
    {
        if (a[l_i] <= a[r_i])
            buf[i++] = a[l_i++];
        else
            buf[i++] = a[r_i++];
    }
    while (l_i <= l_m)
        buf[i++] = a[l_i++];
    while (r_i <= r_m)
        buf[i++] = a[r_i++];

    for (i = left; i <= r_m; i++)
        a[i] = buf[i];

    printf("[Done]: ");
    print_array(a + left, l_size + r_size);
}

void recursive_func(int *array, int *buf, size_t init, size_t max)
{
    if (max > init)
    {
        recursive_func(array, buf, init, (init + max + 1) / 2 - 1);
        recursive_func(array, buf, (init + max + 1) / 2, max);
        print(array, buf, init, (init + max + 1) / 2 - 1,
              (init + max + 1) / 2, max);
    }
}

void merge_sort(int *array, size_t size)
{
    int buf[10000];

    if (!array || size < 2)
        return;
    recursive_func(array, buf, 0, size - 1);
}
