# Write your MySQL query statement below
SELECT p.project_id, round(avg(experience_years),2) as average_years
FROM Project p
INNER JOIN Employee e
ON p.employee_id=e.employee_id
GROUP BY project_id