from functools import lru_cache
import timeit

@lru_cache(maxsize=128)
def fibonacci(n):
    if n <= 2:
        return 1
    return fibonacci(n-1) + fibonacci(n-2)


print(timeit.timeit('fibonacci(100)', number=10, globals=globals()))
print(timeit.timeit('fibonacci(13)', number=10, globals=globals()))
print(timeit.timeit('fibonacci(9)', number=10, globals=globals()))