// Abstract classes can be inherited by default. The purpose of abstract classes
// is to provide members that other classes inherit or implement. As a result,
// they have a constructor, but you can't create instances from them. Within
// the child class, you define the behavior of the parent's properities and
// functions with the `override` keyword.

// Abstract classes can contain both functions and properties `with`
// implementation as well as functions and properties `without` implementation,
// known as abstract functions and properties.

abstract class Product(val name: String, var price: Double) {
    // Abstract property for the product category
    abstract val category: String

    // A function that can be shared by all products
    fun productInfo(): String {
        return "Product: $name, Category: $category, Price: $price"
    }
}

// Let's create a child class for electronics. Before you define an
// implementation for the `category` property in the child class, you must
// use the `override` keyword

class Electronic(name: String, price: Double, val warranty: Int): Product(name, price) {
    override val category = "Electronic"
}

// Although abstract classes are great for sharing code in this way, they are
// restricted because classes in Kotlin only support single inheritance. If
// you need to inherit from multiple sources, consider using interfaces

fun main() {
    val laptop = Electronic(name = "Laptop", price = 1000.0, warranty = 2)
    println(laptop.productInfo())
}
