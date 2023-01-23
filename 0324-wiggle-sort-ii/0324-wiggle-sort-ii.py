class Solution:
    def wiggleSort(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        nums.sort()
        res = nums[:(n+1)//2][::-1]
        ans = nums[(n+1)//2:][::-1]
        #print(res)
        x ,y = 0,0
        for i in range(n):
            if i%2 == 0 :
                nums[i] = res[x]
                x+=1
            else :
                nums[i] =  ans[y]
                y+=1
        
        
        