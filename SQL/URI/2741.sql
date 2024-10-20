select concat('Approved: ', name), grade
from students
where students.grade >= 7
order by grade desc;