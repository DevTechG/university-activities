{-
Exercício 3. Verificar número primo
-}

primeNumberAux number increment
    |(mod number increment == 0) && number /= increment = False
    |increment == number = True
    |otherwise = primeNumberAux number (increment + 1)
    
primeNumber number 
    |even number || (mod number 3 == 0) || number < 1 = False
    |otherwise = primeNumberAux number 5

main = do
    putStrLn "Informe um número: "
    number <- readLn
    print (primeNumber number)
    