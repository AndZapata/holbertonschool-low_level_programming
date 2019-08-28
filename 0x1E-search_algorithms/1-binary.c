#include "search_algos.h"

/**
 *
 *
 *
 */

int binary_search(int *array, size_t size, int value)
{
  size_t start = 0, end = 0, mid = 0, i;

  if (!array || !size)
    return (-1);
  end = size - 1;
  while (start <= end)
    {
      printf("Searching in array: ");
      for (i = start; i < end; i++)
	{
	  printf("%d ,", array[i]);
	}
      
      mid = (start + end) / 2;
      if (array[mid] < value)
	start = mid + 1;
      else if (array[mid] > value)
	end = mid - 1;
      else
	return (mid);
    }
  return (-1);
}
