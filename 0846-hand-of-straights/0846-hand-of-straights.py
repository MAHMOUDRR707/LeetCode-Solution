class Solution:
    def isNStraightHand(self, hand: List[int], groupSize: int) -> bool:
        n =  len(hand)
        if n%groupSize != 0 :
            return False
        res = Counter(hand)
        hand.sort()
        
        for i in hand:
            if res[i]:
                for j in range(i,i+groupSize):
                    res[j] -=1 
                    if res[j] < 0 :
                        return False
        return True
         