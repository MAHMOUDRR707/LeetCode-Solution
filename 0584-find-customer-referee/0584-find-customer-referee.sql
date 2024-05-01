# Write your MySQL query statement below
SELECT C.name
FROM Customer as C
WHERE C.referee_id IS NULL OR C.referee_id <> 2 ;