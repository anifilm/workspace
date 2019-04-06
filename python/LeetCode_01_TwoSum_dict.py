def twoSum(nums, target):

    dict = {}

    for i in range(len(nums)):

        if target - nums[i] not in dict:
            dict[nums[i]] = i
        else:
            print(nums, '->', target)

            return (dict[target-nums[i]], i)


print(twoSum([2, 7, 11, 15], 9))
