class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        x_str = str(x)
        if len(x_str) == 1:
            return True

        x_str_len = len(x_str)
        for i in range(x_str_len // 2):
            # compare the characters on two sides
            if not x_str[i] == x_str[x_str_len - i - 1]:
                # failed for at least one case
                return False

        # did not fail for any of the characters
        return True