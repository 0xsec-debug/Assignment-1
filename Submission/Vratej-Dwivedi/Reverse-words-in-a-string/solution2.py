class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        words = s.split()  #Split the string into words        
        rev_word = words[::-1] #Reverse the list of words
        return ' '.join(rev_word) #Join the words back into a string with single spaces
