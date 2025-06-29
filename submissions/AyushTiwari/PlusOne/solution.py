class Solution:
    def merge(self, nums1, m, nums2, n):
        i = m - 1  # Pointer for last valid element in nums1
        j = n - 1  # Pointer for last element in nums2
        k = m + n - 1  # Pointer for the end of nums1

        # Merge both arrays starting from the end
        while i >= 0 and j >= 0:
            if nums1[i] > nums2[j]:
                nums1[k] = nums1[i]
                i -= 1
            else:
                nums1[k] = nums2[j]
                j -= 1
            k -= 1

        # Copy any remaining elements from nums2 (if any)
        while j >= 0:
            nums1[k] = nums2[j]
            j -= 1
            k -= 1
