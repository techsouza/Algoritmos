select categories.name, sum(products.amount)
from categories 
	join products
	on categories.id = products.id_categories
GROUP BY categories.name;