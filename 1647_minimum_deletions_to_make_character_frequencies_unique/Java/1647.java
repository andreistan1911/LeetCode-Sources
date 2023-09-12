import java.util.*;

class Solution {
    /**
     * Calculates the minimum number of deletions required to make all characters frequencies in the given string `s` unique.
     *
     * @param s The input string
     * @return The minimum number of deletions required
     */
    public int minDeletions(String s) {
        int answer = 0;
        int[] frequencies = new int[26];

        // Count the frequencies of each character in the string
        for (char c : s.toCharArray()) {
            frequencies[c - 'a']++;
        }

        // Sort the frequencies in ascending order
        Arrays.sort(frequencies);

        // Iterate through the frequencies array and check if any frequency is greater than or equal to the next frequency
        for (int i = 24; i >= 0; i--) {
            while (frequencies[i] != 0 && frequencies[i] >= frequencies[i + 1]) {
                frequencies[i]--;
                answer++;
            }
        }

        return answer;
    }
}

class P1647 {
    public static void main(String args[]) {

        Solution solution = new Solution();

        System.out.println(solution.minDeletions("aaabc"));
    }
}
