class Solution {
    public boolean canPlaceFlowers(int[] flowerbed, int n) {
        if (n == 0)
            return true;

        if (flowerbed.length == 1) {
            if (n == 1 && flowerbed[0] == 0)
                return true;
            else
                return false;
        }

        if (flowerbed[0] == 0 && flowerbed[1] == 0) {
            flowerbed[0] = 1;
            n--;
        }

        int size1 = flowerbed.length - 1;
        for (int i = 1; i < size1; i++) {
            if (flowerbed[i - 1] == 0 && flowerbed[i] == 0 && flowerbed[i + 1] == 0) {
                flowerbed[i] = 1;
                n--;
                if (n <= 0)
                    return true;
            }
        }

        if (flowerbed[size1] == 0 && flowerbed[size1 - 1] == 0) {
            n--;
        }

        if (n <= 0)
            return true;
        return false;
    }
}

class Printer {
    public static void main(String args[]) {
        int[] flowerbed = {1, 0, 0, 0, 1};
        int n = 2;

        Solution solution = new Solution();

        System.out.println(solution.canPlaceFlowers(flowerbed, n));
    }
}