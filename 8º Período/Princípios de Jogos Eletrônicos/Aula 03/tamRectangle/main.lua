x = 0
size = 100

function love.draw()
    love.graphics.rectangle(
        'fill',
        x,
        30,
        size,
        size
    )
end

function love.update(dt)
    x = x + 1
end