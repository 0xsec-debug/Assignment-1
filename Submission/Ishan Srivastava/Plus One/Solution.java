class Solution {
    public int[] plusOne(int[] digits) {
        int carry = 0;
        int res[] = new int[digits.length];
        digits[digits.length-1] = digits[digits.length-1]+1;
        for(int i=digits.length-1;i>-1;i--)
        {
            int val = digits[i]+carry;
            if(val>9)
            {
                val = val%10;
                carry = 1;
            }
            else
                carry = 0;
            res[i] = val;
        }
        if(carry!=0)
        {
            int res1[] = new int[res.length+1];
            for(int i=res.length-1;i>-1;i--)
            {
                res1[i] = res[i];
            }
            res1[0] = carry;
            return res1;
        }
        return res;
    }
}