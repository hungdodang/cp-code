class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        different_strings = []
        string_groups = []
        for string in strs:
            flag = False
            sorted_str = sorted(string)
            for index in range(len(different_strings)):
                if different_strings[index] == sorted_str:
                    string_groups[index].append(string)
                    flag = True
                    break
            if flag == False:
                group = [string]
                string_groups.append(group)
                different_strings.append(sorted_str)
        return string_groups

