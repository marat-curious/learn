fun Customer.getOrderedProducts(): Set<Product> =
    orders
        .flatMap(Order::products)
        .toSet()

fun Shop.getProductsOrderedByAll(): Set<Product> =
    customers
        .map(Customer::getOrderedProducts)
        .reduce { orderedByAll, customer -> orderedByAll.intersect(customer) }
