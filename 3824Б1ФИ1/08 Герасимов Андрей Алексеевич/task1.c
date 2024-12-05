// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
int sum_of_two_numbers(int a, int b)
{
  long long s = a + b;
  if (s >= INT_MAX)
    return INT_MAX;
  else if (s <= INT_MIN)
    return INT_MIN;
  else
    return a + b;
}
