import java.util.*;

class Solution {
    public List<List<Integer>> groupThePeople(int[] groupSizes) {
        List<List<Integer>> answer = new ArrayList<>();
        List<List<Integer>> groups = new ArrayList<>();

        for (int i = 0; i < groupSizes.length; ++i) {
            int size = groupSizes[i];

            int j;
            for (j = 0; j < groups.size(); ++j) {
                if (groups.get(j).get(0) == size && groups.get(j).get(1) > 0) {
                    groups.get(j).add(i);
                    groups.get(j).set(1, groups.get(j).get(1) - 1);
                    break;
                }
            }

            if (j == groups.size()) {
                List<Integer> newGroup = new ArrayList<>();

                newGroup.add(size);
                newGroup.add(size - 1);
                newGroup.add(i);

                groups.add(newGroup);
            }
        }

        for (int i = 0; i < groups.size(); ++i) {
            List<Integer> group = new ArrayList<>();

            for (int j = 2; j < groups.get(i).size(); ++j) {
                group.add(groups.get(i).get(j));
            }

            answer.add(group);
        }

        return answer;
    }
}

class P1282 {
    public static void main(String args[]) {
        int[] groupSizes = {3,3,3,3,3,1,3};

        Solution solution = new Solution();

        System.out.println(solution.groupThePeople(groupSizes));
    }
}
