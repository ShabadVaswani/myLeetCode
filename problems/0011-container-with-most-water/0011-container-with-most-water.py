class Solution:
    def maxArea(self, heights: List[int]) -> int:
        l, r = 0, len(heights)-1
        maxArea = (r-l)*min(heights[l],heights[r])
        while(l<r):
            area = heights[l]*heights[r]
            if heights[l] > heights[r]:
                r-=1
            else:
                l+=1
            area = (r-l)*min(heights[l],heights[r])
            if area > maxArea:
                maxArea = area
        return maxArea