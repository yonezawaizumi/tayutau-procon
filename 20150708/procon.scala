object Main extends App {
    def lucky(x : List[Int]) : List[String] = {
        if (x.isEmpty) List.empty
        else if (x.head.toString.contains("7")) "Lucky!" :: lucky(x.tail)
        else x.head.toString :: lucky(x.tail)
    }
    lucky(Range(1, 101).toList).foreach(x => println(x))
}
