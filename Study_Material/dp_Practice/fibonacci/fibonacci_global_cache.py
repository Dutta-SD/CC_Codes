# Cache functions by using global dict. Not recommended
import timeit

fibonacci_cache = {}

def fib(n):
    if n <= 2:
        return 1
    try:
        return fibonacci_cache[n]
    except KeyError:
        fibonacci_cache[n] = fib(n-1) + fib(n-2)
        return fibonacci_cache[n]


print(timeit.timeit('fib(100)', number=10, globals=globals()))
print(timeit.timeit('fib(13)', number=10, globals=globals()))
print(timeit.timeit('fib(9)', number=10, globals=globals()))