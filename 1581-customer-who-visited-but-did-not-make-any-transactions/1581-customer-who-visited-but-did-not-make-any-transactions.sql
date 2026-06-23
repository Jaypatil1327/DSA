# Write your MySQL query statement below
select customer_id , count(customer_id) as count_no_trans
from Visits Left Join Transactions 
on Visits.visit_id = Transactions.visit_id 
where transactions.transaction_id is NULL 
Group by customer_id ; 