from typing import List
class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        last_non_zero = 0
        for current in range(len(nums)):
            if nums[current] != 0:
                nums[last_non_zero], nums[current] = nums[current], nums[last_non_zero]
                last_non_zero += 1