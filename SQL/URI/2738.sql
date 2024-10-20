  select candidate.name, round(((score.math*2.0+score.specific*3.0+score.project_plan*5.0)/10.0),2) as avg
  from candidate
  	join score
	on score.candidselect categories.name, sum(products.amount)
from categories 
	join products
	on categories.id = products.id_categories
GROUP BY categories.name;