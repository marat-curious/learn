fun moneySpentBy(customer: Customer): Double =
    customer.orders
        .flatMap { it.products }
        .sumOf { it.price }
