import java.util.*;

class Solution {

    public String predictPartyVictory(String senate) {
        Queue<Integer> rad = new LinkedList<>();
        Queue<Integer> dir = new LinkedList<>();
        int n = senate.length();

        for (int i = 0; i < n; ++i)
            if (senate.charAt(i) == 'R')
                rad.add(i);
            else
                dir.add(i);

        while (!rad.isEmpty() && !dir.isEmpty())
            if (rad.poll() < dir.poll())
                rad.add(n++);
            else
                dir.add(n++);

        return dir.isEmpty() ? "Radiant" : "Dire";
    }
}

class P649 {
    public static void main(String args[]) {
        Solution solution = new Solution();

        System.out.println(solution.predictPartyVictory("RD"));
    }
}
