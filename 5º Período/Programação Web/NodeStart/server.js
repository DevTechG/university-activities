const { read } = require('fs');
const http = require('http');

// Create a local server to receive data from
const server = http.createServer((req, res) => {
  res.writeHead(200, { 'Content-Type': 'application/json' });

  if (req.url ==="/meu_nome") {
    res.end(JSON.stringify({meuNome: "Gabriel"}));
  }
  
  res.end(JSON.stringify({
    data: 'Hello World!'
  }));
});

server.listen(8000, () => console.log("Server listening on port http://localhost:8000"));
