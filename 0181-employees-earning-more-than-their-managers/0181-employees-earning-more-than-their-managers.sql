# Write your MySQL query statement below
SELECT e.name AS Employee
FROM Employee AS e
JOIN Employee AS d
ON e.managerId = d.id
WHERE e.salary > d.salary;