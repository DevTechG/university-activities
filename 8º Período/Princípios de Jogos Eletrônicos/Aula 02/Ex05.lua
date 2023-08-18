-- 5. Faça uma função que receba uma tabela como parâmetro. Sua função deve imprimir todos os elementos da tabela.

function print_table(table)
    for index, item in ipairs(table) do
        print(index .. "º elemento da tabela:".. item)
    end
end

function printTable(table)
    for index, item in ipairs(table) do
        io.write(item..', ')
    end
end

colorsTable = { 'Açafrão', 'Amarelo', 'Âmbar', 'Ameixa', 'Azul', 'Bege', 'Bordô', 'Branco', 'Bronze', 'Cáqui', 'Castanho', 'Cereja', 'Cinzento', 'Cobre', 'Escarlate', 'Esmeralda', 'Ferrugem', 'Laranja', 'Lavanda', 'Malva', 'Marfim', 'Oliva', 'Ouro', 'Pêssego', 'Prata', 'Terracota', 'Turquesa', 'Uva', 'Verde', 'Vermelho', 'Vinho', 'Violeta' }

print_table(colorsTable)
print()
printTable(colorsTable)