from typing import List

class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        if n == 0:
            return True

        if len(flowerbed) == 1:
            if n == 1 and flowerbed[0] == 0:
                return True
            return False

        if flowerbed[0] == 0 and flowerbed[1] == 0:
            flowerbed[0] = 1
            n = n - 1

        size1 = len(flowerbed) - 1
        for i in range(1, size1):
            if flowerbed[i - 1] == 0 and flowerbed[i] == 0 and flowerbed[i + 1] == 0:
                flowerbed[i] = 1
                n = n - 1
            

        if flowerbed[size1] == 0 and flowerbed[size1 - 1] == 0:
            n = n - 1

        if n <= 0:
            return True
        return False

flowerbed = [1,0,0,0,1]
n = 1
print(Solution.canPlaceFlowers(None, flowerbed, n))
