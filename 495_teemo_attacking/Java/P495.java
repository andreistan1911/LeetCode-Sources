//import java.util.*;

class Solution {
    public int findPoisonedDuration(int[] timeSeries, int duration) {
        int poisonedDuration = 0;
        int time = 0;

        for (int i = 0; i < timeSeries.length; ++i) {
            poisonedDuration += duration;

            if (time != 0 && timeSeries[i] - time < duration) {
                poisonedDuration -= duration - (timeSeries[i] - time);
            }

            time = timeSeries[i];
        }

        return poisonedDuration;
    }
}

class P495 {
    public static void main(String args[]) {
        int[] timeSeries = {0,3,6,9};
        int duration = 4;

        Solution solution = new Solution();

        System.out.println(solution.findPoisonedDuration(timeSeries, duration));
    }
}
