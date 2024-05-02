# Write your MySQL query statement below
SELECT teacher_id ,Count(DISTINCT(subject_id)) AS cnt
FROM Teacher
group by teacher_id