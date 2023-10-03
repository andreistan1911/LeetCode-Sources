from typing import List

class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        mySet = set()

        for num in nums:
            if num in mySet:
                return True
            mySet.add(num)
        
        return False

nums = [1,2,3,1]
print(Solution.containsDuplicate(None, nums))
