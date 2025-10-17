fun findMostExpensiveProductBy(customer: Customer): Product? {
    return customers.orders
        .filter(Order::isDelivered)
        .flatMap(Order::products)
        .maxByOrNull(Product::price)
}

fun Shop.getNumberOfTimesProductWasOrdered(product: Product): Int {
    return customers
        .flatMap(Customer::getOrderedProducts)
        .count { it == product }
}

fun Customer.getOrderedProducts(): List<Product> =
    orders
        .flatMap(Order::products)

