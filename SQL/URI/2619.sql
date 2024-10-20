select products.name, providers.name, products.price
from products
	join categories
	on products.id_categories = categories.id
	join providers
	on providers.id = products.id_providers
where categories.name like 'Super Luxury' and products.price > 1000;