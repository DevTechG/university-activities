const express = require("express");

const ehDiaUtil = require("eh-dia-util");
const dayJS = require("dayjs")

const app = express();

app.use(express.json());

app.get("/list_users", (req,res) => {
  res.status(200).json({message: "list users changed"});
});

app.post("/create_user", async (req,res) => {
  //const body = req.body;
  const {day} = req.body;

  //console.log(day);
  const isUtil = await ehDiaUtil(day);

  res.status(200).json(`O dia ${dayJS(day).format("DD/MM/YYYY")} ${isUtil ?  " é " : " não é"} dia útil!`);
  //res.status(200).json(isUtil);
  //res.status(200).json(body);
});

app.listen(8000, () => console.log("Server listening on port http://localhost:8000"));