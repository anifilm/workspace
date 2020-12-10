def twoSum(nums, target):

    for i in nums:

        n = target - i

        start_index = nums.index(i)
        next_index = start_index + 1

        temp_nums = nums[next_index:]

        if n in temp_nums:
            print(nums, '->', target)
            print(i, '+', n, '=', target)

            return(start_index, next_index + temp_nums.index(n))


if __name__ == "__main__":

    nums = [2, 7, 11, 15]
    target = 9
    print(twoSum(nums, target))
