# Write your MySQL query statement below
SELECT m.name
from Employee as E
INNER JOIN Employee  as m
ON E.managerId = m.id
group by E.managerId
having count(E.id) >= 5