# Write your MySQL query statement below
SELECT Distinct(V.author_id) as id
FROM views as v
WHERE V.author_id = V.viewer_id
ORDER BY author_id;
