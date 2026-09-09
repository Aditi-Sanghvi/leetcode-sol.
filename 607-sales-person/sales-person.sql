# Write your MySQL query statement below
SELECT  s.name FROM SalesPerson s WHERE NOT EXISTS ( SELECT c.name
    FROM Company c JOIN Orders o on c.com_id=o.com_id
     WHERE  c.name='RED' AND s.sales_id=o.sales_id
    )