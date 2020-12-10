def twoSum(nums, target):

    dict = {}

    for i in range(len(nums)):

        if target - nums[i] not in dict:
            dict[nums[i]] = i
        else:
            print(nums, '->', target)

            return (dict[target-nums[i]], i)


if __name__ == "__main__":

    nums = [2, 7, 11, 15]
    target = 9
    print(twoSum(nums, target))