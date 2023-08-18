x = 0
y = 0
size = 100
speedX = 100
speedY = 100

function love.draw()
    love.graphics.rectangle(
        'fill',
        x,
        y,
        size,
        size    
    )
    love.graphics.print(
        x,
        400,
        300
    )
    love.graphics.print(
        y,
        400,
        400
    )
end

function love.update(dt)
    ultrapassouX = (x + size >= 800) or (x + size < 0)
    ultrapassouY = (y + size >= 600) or (y + size < 0)
    if  ultrapassouX then
        speedX = -speedX
    end
    if  ultrapassouY then
        speedY = -speedY
    end
    x = x + speedX * dt
    y = x + speedY * dt
end