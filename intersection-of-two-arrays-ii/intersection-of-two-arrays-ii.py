class Solution:
    def intersect(self, nums1, nums2):
        z =[]
    
        
        for i in set(nums1):
              if i in nums2  :
                    x = min(nums1.count(i),nums2.count(i))
                    for j in range(x) :
                        z.append(i)
                    
        return z