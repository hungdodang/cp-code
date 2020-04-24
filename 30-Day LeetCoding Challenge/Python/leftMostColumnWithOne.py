# """
# This is BinaryMatrix's API interface.
# You should not implement it, or speculate about its implementation
# """
#class BinaryMatrix(object):
#    def get(self, row, col):
#        """
#        :type row : int, col : int
#        :rtype int
#        """
#
#    def dimensions:
#        """
#        :rtype list[]
#        """

class Solution(object):
    def leftMostColumnWithOne(self, binaryMatrix):
        """
        :type binaryMatrix: BinaryMatrix
        :rtype: int
        """
        dimensions = binaryMatrix.dimensions()
        row = dimensions[0] - 1
        col = dimensions[1] - 1
        hasOne = False
        while (row > -1) and (col > -1):
            value = binaryMatrix.get(row, col)
            if value == 0:
                row -= 1
            else:
                col -= 1
                hasOne = True
        if hasOne:
            return col + 1
        else:
            return -1
            