# Write your MySQL query statement below
SELECT C.name AS Customers
FROM CUSTOMERS AS C
LEFT JOIN Orders AS O
ON C.id =  O.customerId
Where O.id is NULL

