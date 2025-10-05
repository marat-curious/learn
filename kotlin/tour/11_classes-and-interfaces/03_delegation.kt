interface DrawingTool {
    val color: String
    fun draw(shape: String)
    fun erase(area: String)
    fun getToolInfo(): String
}

// `PenTool` implements the `DrawingTool` interface and provides implementations
// for all of its members

class PenTool: DrawingTool {
    override val color: String = "black"

    override fun draw(shape: String) {
        println("Drawing $shape using a pen in $color")
    }

    override fun erase(area: String) {
        println("Erasing $area with pen tool")
    }

    override fun getToolInfo(): String {
        return "PenTool(color=$color)"
    }
}

// You want to create a class like `PenTool` with the same behaviour but a
// defferent `color` value. One approach is to create a new class that expects
// an object implementing the `DrawingTool` interface as a parameter, like
// a `PenTool` class instance. Then, inside the class, you can override the
// `color` property.

class CanvasSessionCopy(val tool: DrawingTool) : DrawingTool {
    override val color: String = "blue"

    override fun draw(shape: String) {
        tool.draw(shape)
    }

    override fun erase(area: String) {
        tool.erase(area)
    }

    override fun getToolInfo(): String {
        return tool.getToolInfo()
    }
}

// In Kotlin, you can delegate the interface implementation to a class instance
// using by `by` keyword

class CanvasSession(val tool: DrawingTool) : DrawingTool by tool {
    override val color: String = "blue"

    // If you want to, you can also override the behavior of an inherited
    // member function in the `CanvasSession` class, but now you don't have
    // to add new lines of code for every inherited member function
}
