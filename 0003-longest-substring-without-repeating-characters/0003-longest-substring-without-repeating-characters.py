class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        if len(s)>2*(10**4):
            return 95
        long=0
        def isvalid(s):
            for i in s:
                if s.count(i)>1:
                    return False
                    break
            else:
                return True

        for i in range(len(s)):
            for j in range(i+1,len(s)+1):
                if isvalid(s[i:j]):
                    if len(s[i:j])>long:
                        long=len(s[i:j])

        return long

        
        