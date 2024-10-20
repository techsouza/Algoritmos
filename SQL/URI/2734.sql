select name, char_length(people.name) AS Length
from people
oRDER BY length desc;
