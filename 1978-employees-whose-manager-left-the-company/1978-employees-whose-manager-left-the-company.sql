# Write your MySQL query statement below
SELECT E.employee_id
FROM Employees AS E
LEFT JOIN EMPLOYEES AS EE
ON E.manager_id = EE.employee_id
WHERE E.salary < 30000 and E.manager_id IS not NULL AND EE.employee_id is NULL
ORDER BY E.employee_id