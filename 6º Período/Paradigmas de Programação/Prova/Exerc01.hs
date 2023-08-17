{-
Exercício 1. Fatorial de 0 até N
-}
factorial0toNumber number increment result
    |number ==  0 = putStrLn(show(increment) ++ " != " ++ show(result))
    |increment == 0 = do
        putStrLn( show(increment) ++ " != " ++ show(result))
        factorial0toNumber number (increment + 1) result
    |increment == number = putStrLn( show(increment) ++ " != " ++ show(result * increment))
    |otherwise = do
        putStrLn( show(increment) ++ " != " ++ show(result * increment))
        factorial0toNumber number (increment + 1) (result * increment)

factorial number = factorial0toNumber number 0 1

main = do
  putStrLn "Informe um número: "
  number <- readLn
  factorial number