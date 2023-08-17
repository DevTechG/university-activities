{-
Exercício 2. Somar número par de 10 até N
-}

addEven10toNumberAux number increment result
    |number == 10 = 10
    |increment > number = result
    |increment == number && even increment = result + increment
    |not (even increment) = addEven10toNumberAux number (increment + 1) result
    |otherwise = addEven10toNumberAux number (increment + 1) (result + increment)

addEven10toNumber number 
    |number < 10 = 0
    |otherwise = addEven10toNumberAux number 10 0

main = do
    putStrLn "Informe um número: "
    number <- readLn
    print (addEven10toNumber number)
    