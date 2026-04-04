nums = [int(x) for x in input().split()]

a = []
flag = True
start = end = 0
for i in range(1, len(nums)):
    if not flag:
        if start == end:
            a.append(str(nums[start]))
        else:
            a.append(f'{nums[start]}->{nums[end]}')
        start = end = nums[i]
        flag = True
    if nums[i] - nums[start] != i - start:
        flag = False
        end = i - 1
print(a)
