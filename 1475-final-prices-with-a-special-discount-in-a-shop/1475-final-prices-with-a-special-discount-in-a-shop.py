class Solution:
    def finalPrices(self, prices: List[int]) -> List[int]:
        ans = []
        for i in range(len(prices) ):
            helper = 0
            for j in range(i+1,len(prices)):
                if  prices[i] >= prices[j] :
                    helper = prices[j]
                    break
            ans.append(prices[i] - helper)
        return ans
            