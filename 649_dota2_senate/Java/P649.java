import java.util.*;

class Solution {
    private void senatorBans(char senator, int[] direSenate, int radiantSenate[]) {
        if (senator == 'D') {
            direSenate[0]++;
            direSenate[1]++;

            if (radiantSenate[1] > 0) {
                radiantSenate[1]--;
                direSenate[0]--;
                direSenate[1]--;
            }
        }
        else {
            radiantSenate[0]++;
            radiantSenate[1]++;

            if (direSenate[1] > 0) {
                direSenate[1]--;
                radiantSenate[0]--;
                radiantSenate[1]--;
            }
        }
    }

    public String predictPartyVictory(String senate) {
        boolean radiantVictory = true;
        int[] radiantSenate = new int[2];
        int[] direSenate = new int[2];

        /**
         * senate:
         * 0 -> unbanned senators
         * 1 -> available this turn
         */


        String remainingSenate = "";
        for (char senator : senate.toCharArray()) {
            senatorBans(senator, direSenate, radiantSenate);
        }

        while (direSenate[0] > 0 && radiantSenate[0] > 0) {
            direSenate[1] = direSenate[0];
            radiantSenate[1] = radiantSenate[0];



        }

        return radiantVictory ? "Radiant" : "Dire";
    }
}

class P649 {
    public static void main(String args[]) {
        // NOT FINISHED

        Solution solution = new Solution();

        System.out.println(solution.predictPartyVictory("RD"));
    }
}
