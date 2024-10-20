select customers.name, orders.id
from customers
	join orders
	on customers.id = orders.id_customers
where orders.orders_date between '20160101' and '20160630';