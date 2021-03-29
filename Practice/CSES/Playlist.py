# Longest unique substring(ie substring with longest uniq chars)

def longestUniqueSubstring(allNumbers : list) -> int:
    allLastIndexes = {}
    maxSubstrLength = -1
    startIndex = 0
    indexNotFound = -2

    for idx in range(len(allNumbers)):

        startIndex = max(startIndex, 1 + allLastIndexes.get(allNumbers[idx], indexNotFound))
        maxSubstrLength = max(maxSubstrLength, idx - startIndex + 1)
        allLastIndexes[allNumbers[idx]] = idx

    return maxSubstrLength

    
length = int(input())
allNumbers = input().split()
print(longestUniqueSubstring(allNumbers))