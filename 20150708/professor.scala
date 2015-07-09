object Main extends App {
    (1 until 101).map { case lucky if lucky.toString.contains('7') => "Lucky!" case i => i.toString }.foreach(println)
}