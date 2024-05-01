# Write your MySQL query statement below
SELECT V.unique_id,E.name    
FROM Employees as E
LEFT JOIN EmployeeUNI AS V 
ON  E.id = V.id