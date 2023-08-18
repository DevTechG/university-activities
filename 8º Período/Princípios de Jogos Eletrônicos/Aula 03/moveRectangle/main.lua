x = 0

function love.draw()
    love.graphics.rectangle(
        'fill',
        x,
        30,
        200,
        150
    )
end

function love.update(dt)
    x = x + 1
end