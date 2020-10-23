



Create table Person 
    (PersonId int, FirstName varchar(255), LastName varchar(255))

Create table Address 
    (AddressId int, PersonId int, City varchar(255), State varchar(255))

Truncate table Person

insert into Person 
    (PersonId, LastName, FirstName) 
values 
    ('1', 'Wang', 'Allen')

Truncate table Address

insert into Address 
    (AddressId, PersonId, City, State)
values 
    ('1', '2', 'New York City', 'New York')
    

CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
      # Write your MySQL query statement below.
      SELECT 
          DISTINCT e.salary
      FROM 
          employee e
      WHERE 
          (SELECT count(DISTINCT salary) FROM employee WHERE salary>e.salary) = N-1
  );

EN

select *,
   rank() over (order by 成绩 desc) as ranking,   # 间隔重复计数
   dense_rank() over (order by 成绩 desc) as dese_rank,   #不间隔重复计数
   row_number() over (order by 成绩 desc) as row_num      #不重复计数
from 班级

