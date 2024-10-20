select (trim (replace(to_char(natural_person.cpf::bigint,'000:000:000-00'),':','.')))
from natural_person ;