import java.util.*;

class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<Integer> firstLine = new ArrayList<>();
        List<Integer> secondLine = new ArrayList<>();

        firstLine.add(1);
        secondLine.add(1);
        secondLine.add(1);

        if (numRows == 1) {
            List<List<Integer>> answer = new ArrayList<>();

            answer.add(firstLine);

            return answer;
        }

        List<List<Integer>> answer = new ArrayList<>();

        answer.add(firstLine);
        answer.add(secondLine);
        
        if (numRows == 2)
            return answer;

        numRows--;

        for (int i = 1; i < numRows; ++i) {
            List<Integer> currentLine = new ArrayList<>();

            currentLine.add(1);

            for (int j = 1; j < answer.get(i).size(); ++j)
                currentLine.add(answer.get(i).get(j) + answer.get(i).get(j - 1));

            currentLine.add(1);
            answer.add(currentLine);
            
        }

        return answer;
    }
}

class Template {
    public static void main(String args[]) {

        Solution solution = new Solution();

        System.out.println(solution.generate(5));
    }
}
