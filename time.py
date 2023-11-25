import time

def my_function():
    for _ in range(1000000):
        pass

start_time = time.time()
my_function()
end_time = time.time()

elapsed_time = end_time - start_time

print(f"real    0m{elapsed_time:.3f}s")
print(f"user    0m{elapsed_time:.3f}s")
print(f"sys     0m0.000s")
