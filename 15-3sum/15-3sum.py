class Solution:
    def threeSum(self, z):
        z =  sorted(z)
        n = len(z)
        x  =[]
        for i in range(0,n-2):
            j = i +1 
            k = n -1
            
            if z[i] > 0 :
                break 
                
            if i > 0  and z[i] == z[i-1] :
                continue
                        
            while j < k :
                v =  z[i] + z[j] + z[k]
                if v < 0 :
                    j += 1
                    
                elif v > 0 :
                    k -= 1 
                
                else :
                    if [z[i],z[j],z[k]] not in x :
                          x.append( [z[i],z[j],z[k]])
                    j +=1 
                    k -=1
        print(x)
        return x