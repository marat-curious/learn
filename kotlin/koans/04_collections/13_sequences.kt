fun findMostExpensiveProductBy(customer: Customer): Product? {
    return customer
        .orders
        .asSequence()
        .filter(Order::isDelivered)
        .flatMap(Order::products)
        .maxByOrNull(Product::price)
}

fun Shop.getNumberOfTimesProductWasOrdered(product: Product): Int {
    return customers
        .asSequence()
        .flatMap(Customer::getOrderedProducts)
        .count { it == product }
}

fun Customer.getOrderedProducts(): Sequence<Product> =
    orders
        .asSequence()
        .flatMap(Order::products)
