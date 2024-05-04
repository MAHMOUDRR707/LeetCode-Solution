# Write your MySQL query statement below
SELECT E.name , B.bonus 
FROM Employee as E
LEFT JOIN  Bonus as B
ON B.empId =  E.empId
WHERE B.bonus < 1000  or B.bonus is NULL
