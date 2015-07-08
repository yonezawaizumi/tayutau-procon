lucky []     = []
lucky (x:xs) = if any (=='7') $ show(x) then "Lucky!" : lucky(xs) else show(x) : lucky(xs)
main = mapM_ putStrLn $ lucky [1..100]
