Trapping Rain Water problem cam be done in 2 ways

1.Brute Force:Taking 2 arrays prefix and suffix prefix will store the height of the largest building till that index on traversal form left to right and suffix will store the height of the largest building till that index on traversal form right to left.And then min(prefix(i),suffix(i)) will be taken and subtracted with with the height of the i'th building i.e. min(prefix(i),suffix(i))-arr(i) and the value will be added in the  ans varible which will return the total uints of water that can be stored in between the building at the end of the loop.

Time Complexity=0(n)
Space COmplexity=0(2n) .Since we are taking 2 extra arrays{prefix & suffix)


2.Optimal Solution:We can do it without using extra space by taking 2 pointers l & r(i.e. left and right) l will be at index 0(l=0) and r will be at last index(i.e.r=n-1).It will be traversed till l<r.When arr(l)<=arr(r) then  if the current index height is < than max of l then in the ans (lmax-arr(i)) will be added other wise lmax will be updated.Similar will be done for rmax when arr(r)<arr(l)

Time Complexity=0(n)
Space COmplexity=0(1) Since no extra space is used.
