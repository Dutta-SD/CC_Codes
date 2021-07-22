n, x = map(int, input().split())
nums = list(map(int, input().split()))

nums = sum([e - 1 if idx % 2 == 0 else e for idx, e in enumerate(nums, start=1)])

if x >= nums:
    print('Yes')
else:
    print('No')