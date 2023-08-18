-- 3. Faça um programa que mostre o produtório de um certo intervalo.

function productory(firstNumber, secondNumber)
    result = 1
    if firstNumber <= secondNumber then
        for index = firstNumber, secondNumber do
            result = result * index
        end
    else
        for index = secondNumber, firstNumber do
            result = result * index
        end
    end
    return result
end

function auxRecursiveProductory(firstNumber, secondNumber)
    -- if tonumber(secondNumber) <= tonumber(firstNumber) then return firstNumber end
    if secondNumber <= firstNumber then return firstNumber end
    local recursive_result = auxRecursiveProductory(firstNumber, (secondNumber - 1))
    return secondNumber * recursive_result
end

function recursiveProductory(firstNumber, secondNumber)
    local recursiveResult
    if firstNumber <= secondNumber then
        -- recursiveResult = auxRecursiveProductory(firstNumber, secondNumber)
        recursiveResult = auxRecursiveProductory(tonumber(firstNumber), tonumber(secondNumber))
    else
        -- recursiveResult = auxRecursiveProductory(secondNumber, firstNumber)
        recursiveResult = auxRecursiveProductory(tonumber(secondNumber), tonumber(firstNumber))
    end
    return recursiveResult
end

io.write('Digite o primeiro número do intervalo: \n')
number1 = io.read('*n')

print('Digite o segundo número do intervalo:')
number2 = io.read('*number')

product = 1
if number1 <= number2 then
    for index = number1, number2 do
        product = product * index
    end
else
    for index = number2, number1 do
        product = product * index
    end
end

print('O produtório com for: ' .. product)

io.write("O produtório utilizando função: " .. productory(number1, number2) .. ".\n")

io.write("O produtório utilizando recursão: " .. recursiveProductory(number1, number2) .. ".\n")
