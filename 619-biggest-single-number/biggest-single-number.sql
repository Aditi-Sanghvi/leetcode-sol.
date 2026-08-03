# Write your MySQL query statement below
SELECT max(num) as num from (
    SELECT num 
from MyNumbers
GROUP BY num
HAVING count(*)=1) t;