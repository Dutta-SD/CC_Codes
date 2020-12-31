t = int(input())
for i in range(t):
    n = int(input())
    nums = list(map(int, input().split()))
    aux = [nums[0]]
    for i in range(1, n):
        aux.append(nums[i] + (0 if (nums[i] != nums[i-1] and nums[i] != aux[i-1]) else 1))
    print(str(len(set(aux))))