class Solution:
    def change(self, amount: int, coins: List[int]) -> int:
        res = [[-1] * (amount +1)  for i in range(len(coins))]
        def helper(i,amount) :
            if amount  == 0 :
                return 1
            if i == len(coins) :
                return 0
            
            if res[i][amount] != -1 :
                return res[i][amount]
            
            if coins[i] > amount :
                res[i][amount] =  helper(i+1,amount)
            else :
                res[i][amount] =  helper(i,amount-coins[i]) + helper(i+1,amount)
                
            return res[i][amount]
        return helper(0,amount)