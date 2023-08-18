-- 4. Faça uma função recursiva para calcular o fatorial de um número.

function factorial(number)
    if number <= 1 then return 1 end
    result = factorial(number - 1)
    return number * result
end

print('Digite o número a ser fatorado: ')
number = io.read("*number")

print(number .. "! = " .. factorial(number))