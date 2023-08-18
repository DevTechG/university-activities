
tempo = nil

function love.draw()
    love.graphics.rectangle(
        'fill',
        20,
        30,
        200,
        150
    )
    love.graphics.print(
        tempo,
        400,
        300
    )
end

function love.update(dt)
    tempo = 1/dt
end