{-
Exercício 4. retornar n-ésimo elemnto da lista
-}

list = [1..10]

nthElementList position list
    |(position > length list) || position < 0 = -1
    |otherwise = list!!(position - 1)

nthElementAux position list
    |(position > length list) || position < 0 = -1
    |otherwise = list!!position

nthElement position = nthElementAux (position - 1) list

main = do
    putStrLn "Informe a posição: "
    position <- readLn
    print (nthElement position)
    print (nthElementList position list)