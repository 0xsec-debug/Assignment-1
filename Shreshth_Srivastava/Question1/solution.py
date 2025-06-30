def two_sum(nums, target):
    num_map = {} 

    for i, num in enumerate(nums):
        complement = target - num
        if complement in num_map:
            return [num_map[complement], i]
        num_map[num] = i

    return []  

if __name__ == "__main__":
    
    n = int(input("Enter the number of elements: "))

    
    nums = list(map(int, input("Enter the elements separated by space: ").split()))
  
    if len(nums) != n:
        print(f"Error: Expected {n} elements, but got {len(nums)}.")
        exit()

   
    target = int(input("Enter the target: "))

  
    result = two_sum(nums, target)

    if result:
        print(f"Output: {result}")
    else:
        print("No valid pair found.")
