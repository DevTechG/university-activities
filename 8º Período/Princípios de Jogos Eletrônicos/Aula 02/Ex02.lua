-- 2. Faça o famoso programa que identifica se um número é par ou não.
function isEven(number)
    if number % 2 == 0 then return true 
    else return false end
end

print('Informe um número:')

number = io.read()
if number % 2 == 0 then
    print("O número digitado é par")
else
    print("O número digitado é impar")
end

if isEven(number) then
    print("O número " .. number .. " é par")
else
    print("O número " .. number .. " é impar")
end
