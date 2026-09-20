# Write your MySQL query statement below
SELECT 
id, SUM(CASE when month='Jan' THEN revenue END ) as Jan_Revenue,
    SUM(CASE when month='Feb' THEN revenue END) as Feb_Revenue,
    SUM(CASE when month='Mar' THEN revenue END) as Mar_Revenue,
    SUM(CASE when month='Apr' THEN revenue END) as Apr_Revenue,
    SUM(CASE when month='May' THEN revenue END) as May_Revenue,
    SUM(CASE when month='Jun' THEN revenue END) as Jun_Revenue,
    SUM(CASE when month='Jul' THEN revenue END) as Jul_Revenue,
    SUM(CASE when month='Aug' THEN revenue END) as Aug_Revenue,
    SUM(CASE when month='Sep' THEN revenue END) as Sep_Revenue,
    SUM(CASE when month='Oct' THEN revenue END) as Oct_Revenue,
    SUM(CASE when month='Nov' THEN revenue END) as Nov_Revenue,
    SUM(CASE when month='Dec' THEN revenue END) as Dec_Revenue
FROM Department
GROUP BY id;