fun Shop.groupCustomersByCity(): Map<City, List<Customer>> =
    customers.groupBy { it.city }
