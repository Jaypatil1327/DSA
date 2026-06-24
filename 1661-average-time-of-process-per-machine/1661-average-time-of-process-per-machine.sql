select A.machine_id , round(avg(B.timestamp - A.timestamp) , 3) as processing_time
from Activity as A , Activity as B 
where A.machine_id = B.machine_id and A.process_id = B.process_id and A.activity_type = 'start' and B.activity_type = 'end' 
group by A.machine_id 