class Solution {
    /**
     * Finds the longest common prefix among all the strings in the input array.
     *
     * @param strs The array of strings to find the longest common prefix from.
     * @return The longest common prefix among all the strings.
     */
    public String longestCommonPrefix(String[] strs) {
        if (strs == null || strs.length == 0) {
            return "";
        }

        String firstWord = strs[0];
        StringBuilder answer = new StringBuilder();

        for (int i = 0; i < firstWord.length(); i++) {
            char currentChar = firstWord.charAt(i);

            for (int j = 1; j < strs.length; j++) {
                if (i >= strs[j].length() || strs[j].charAt(i) != currentChar) {
                    return answer.toString();
                }
            }

            answer.append(currentChar);
        }

        return answer.toString();
    }
}

class P14 {
    public static void main(String args[]) {
        //String[] strs = {"flower", "flow", "flight"};
        String[] strs = {"a"};

        Solution solution = new Solution();

        System.out.println(solution.longestCommonPrefix(strs));
    }
}
