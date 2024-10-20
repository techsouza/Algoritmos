select movies.id, movies.name
from movies_actors
	join movies
	on movies.id = movies_actors.id_movies
	join genres
	on movies.id_genres = genres.id
	join actors
	on actors.id = movies_actors.id_actors
where genres.description like 'Action' and actors.name like 'Marcelo Silva' or actors.name like 'Miguel Silva'	
Group By movies.id;