CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
SET n=n-1;
  RETURN (

     SELECT DISTINCT salary
     FROM Employee
     ORDER BY salary desc
     LIMIT 1 offset n
  );
END