class Solution:
    def twoSum(self, numbers, target_sum):
        seen_numbers = {}
        for index, current_number in enumerate(numbers):
            needed_number = target_sum - current_number
            if needed_number in seen_numbers:
                return [seen_numbers[needed_number], index]
            seen_numbers[current_number] = index
