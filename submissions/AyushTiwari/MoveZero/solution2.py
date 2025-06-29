class Solution:
    def moveZeroes(self, nums):
        # Pointer to place the next non-zero element
        insert_pos = 0

        # First pass: move all non-zero elements to the front
        for i in range(len(nums)):
            if nums[i] != 0:
                nums[insert_pos] = nums[i]
                insert_pos += 1

        # Second pass: fill the remaining positions with zeroes
        while insert_pos < len(nums):
            nums[insert_pos] = 0
            insert_pos += 1
