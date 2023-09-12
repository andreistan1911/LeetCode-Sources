class Solution {
    public String longestCommonPrefix(String[] strs) {
        String answer = "";
        String firstWord = strs[0];
        boolean stop = false;
        int i = 0;

        do
        {
            char current;
            
            if (i < firstWord.length())
                current = firstWord.charAt(i);            
            else
                break;

            for (String word : strs)
                if (i == word.length() || word.charAt(i) != current) {
                    stop = true;
                    break;
                }

            ++i;

            if (!stop)
                answer += current;
        } while (!stop);

        return answer;
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
