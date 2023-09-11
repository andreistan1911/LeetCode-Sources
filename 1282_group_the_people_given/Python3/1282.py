from typing import List

class Solution:
    def groupThePeople(self, groupSizes: List[int]) -> List[List[int]]:
        groups = []
        answer = []

        for i, size in enumerate(groupSizes):
            appended = False

            for j in range(len(groups)):
                if groups[j][0] == size and groups[j][1] > 0:
                    appended = True
                    groups[j].append(i)
                    groups[j][1] = groups[j][1] - 1
                    break

            if not appended:
                groups.append([size, size - 1, i])

        for group in groups:
            answer.append(group[2:])

        return answer


print(Solution.groupThePeople(None, groupSizes=[3,3,3,3,3,1,3]))
