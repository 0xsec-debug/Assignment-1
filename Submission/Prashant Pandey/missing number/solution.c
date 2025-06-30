int missingNumber(int* nums, int numsSize){
    int expectedSum = numsSize * (numsSize + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < numsSize; i++) {
        actualSum += nums[i];
    }

    return expectedSum - actualSum;
    
}