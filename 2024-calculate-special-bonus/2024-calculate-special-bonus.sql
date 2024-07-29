# Write your MySQL query statement below
SELECT employee_id,(if(employee_id % 2 != 0 AND name not LIKE 'M%', salary, 0)) as bonus FROM Employees ORDER BY employee_id;