package itmo.dbs.models.repositories;

import itmo.dbs.models.Entertainment;
import org.springframework.data.repository.CrudRepository;
import org.springframework.data.rest.core.annotation.RepositoryRestResource;

@RepositoryRestResource
public interface EntertainmentsRepository extends CrudRepository<Entertainment, Long> {
}