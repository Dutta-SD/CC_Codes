t = int(input())
nums = list(map(float, input().split()))
eu = sum([i*i for i in nums])
man = [abs(i) for i in nums]
che = max(man)
man = sum(man)
print(man)
print(eu**0.5)
print(che)
