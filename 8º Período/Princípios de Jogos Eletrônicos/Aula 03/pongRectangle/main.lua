velocidadeX = 1
velocidadeY = 1
posicaoX = 0
posicaoY = 0
size = 20

function love.draw()
    love.graphics.rectangle(
        'fill',
        posicaoX,
        posicaoY,
        size,
        size
    )
end

function love.update(dt)
    if size + posicaoX >= 800 or posicaoX < 0 then
        velocidadeX = -velocidadeX
    end

    if size + posicaoY >= 600 or posicaoY < 0 then
        velocidadeY = -velocidadeY
    end

    posicaoX = posicaoX + velocidadeX
    posicaoY = posicaoY + velocidadeY
end