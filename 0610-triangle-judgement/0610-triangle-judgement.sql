# Write your MySQL query statement below
SELECT x,y,z , Case WHEN x+y>z and x+z>y and y+z>x then 'Yes' else 'No' end AS triangle 
from Triangle 