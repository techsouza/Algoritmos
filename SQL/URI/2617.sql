select products.name, providers.name
from products join providers on products.id_providers=providers.id
where providers.name='Ajax SA';