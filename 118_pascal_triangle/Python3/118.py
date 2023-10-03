from typing import List

class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        firstLine = [1]
        secondLine = [1, 1]

        if numRows == 1:
            return [firstLine]

        answer = [firstLine, secondLine]
        
        if numRows == 2:
            return answer

        numRows = numRows - 1

        for i in range(1, numRows):
            currentLine = [1]

            for j in range(1, len(answer[i])):
                currentLine.append(answer[i][j] + answer[i][j - 1])

            currentLine.append(1)
            answer.append(currentLine)

        return answer

print(Solution.generate(None, numRows=5))